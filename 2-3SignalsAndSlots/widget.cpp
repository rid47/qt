#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //String Notation

   //    connect(ui ->pushButton, SIGNAL(clicked()), this, SLOT(changeText()));

   // Functor Notation: Regular Slots

     connect(ui->pushButton, &QPushButton::clicked, this, &Widget::changeText);

 //Functor Notation: Lambdas
//    connect(ui->pushButton, &QPushButton::clicked,[=](){
//        ui->label->setText("Lambda");
//    });

}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeText()
{
    qDebug() << "User clicked!";
    ui->label->setText("Hello there! u clicked!");
}

/*
void Widget::on_pushButton_clicked()
{

}
*/
