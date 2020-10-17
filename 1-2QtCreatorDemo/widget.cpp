#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{

    qDebug() << "Submitting data...";
    qDebug() << "First Name is : "  << ui -> firstName -> text();
    qDebug() << "Last Name is : "  << ui -> lastName -> text();
    qDebug() << "Message is : "  << ui -> msg -> toPlainText();
}
