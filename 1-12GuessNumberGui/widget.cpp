#include "widget.h"
#include "ui_widget.h"
#include <stdlib.h>
#include <time.h>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //Initialize
    srand (time(NULL));

    // Generate (1-10)
    secretNumber = rand() % 10 + 1;
    qDebug() << "Secret Number generated: "<< QString::number(secretNumber);

    ui->startOverButton->setDisabled(true);

    // Clear the msg label
    ui ->messageLabel->setText("");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_guessButton_clicked()
{

    guessNumber = ui->spinBox-> value();
    qDebug() << "Guessed Number is: "<< QString::number(guessNumber);

    if (guessNumber == secretNumber){

        //Congratulation
        ui->messageLabel->setText("Congratulation, number is: " + QString::number(secretNumber));

        // Disable the guess button
        ui->guessButton->setDisabled(true);
        ui->startOverButton->setDisabled(false);
    }else{

        if(secretNumber < guessNumber){
            ui->messageLabel->setText("Number is lower than that");
        }else{

            ui->messageLabel->setText("Number is higher than that");
        }
    }

}

void Widget::on_startOverButton_clicked()
{

    // Disable the startover button
    ui->startOverButton->setDisabled(true);

    // Enable the guess button
    ui->guessButton->setDisabled(false);

    //Put the spinbox back to 1
    ui->spinBox->setValue(1);

    //Regenerate the random number
    secretNumber = rand() % 10 +1;
    qDebug()<<"New secret number is "<<QString::number(secretNumber);

    // Clear the msg label
    ui ->messageLabel->setText("");

}
