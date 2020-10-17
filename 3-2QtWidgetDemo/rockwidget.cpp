#include "rockwidget.h"
#include <QLabel>
#include <QPushButton>
#include <QMessageBox>

RockWidget::RockWidget(QWidget *parent) : QWidget(parent)

{

    setWindowTitle("Rock Widget Here");
//    QLabel * label = new QLabel("This is my label", this);

    QPalette label1Palette;
    label1Palette.setColor(QPalette::Window, Qt::yellow);
    label1Palette.setColor(QPalette::WindowText, Qt::blue);
    QFont label1Font("Times", 20, QFont::Bold);

    // Add a style widget and move it around
    QLabel * label1 = new QLabel(this);


    label1->setAutoFillBackground(true);
    label1->setText("My  colored label");
    label1->setPalette(label1Palette);
    label1->move(5,50);
    label1->setFont(label1Font);


    // Add another label
    QPalette label2Palette;
    label2Palette.setColor(QPalette::Window, Qt::green);
    label2Palette.setColor(QPalette::WindowText, Qt::blue);
    QFont label2Font("Times", 10, QFont::Bold);
    QLabel * label2 = new QLabel(this);


    label2->setAutoFillBackground(true);
    label2->setText("My  colored label2");
    label2->setPalette(label2Palette);
    label2->move(5,25);
    label2->setFont(label2Font);

    //Add a button and connect to slot

    QFont buttonFont("Times", 30, QFont::Bold);
    QPushButton * button = new QPushButton(this);
    button ->setText("Click Me");
    button->setFont(buttonFont);
    button->move(100, 250);
    
    connect(button, SIGNAL(clicked()), this, SLOT(buttonClicked()));    
    
}

void RockWidget::buttonClicked()
{
    QMessageBox::information(this, "Message","You clicked");
    
}

QSize RockWidget::sizeHint() const
{
    return QSize(500, 500);
}
