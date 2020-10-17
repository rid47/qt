#include "mainwindow.h"
#include <QPushButton>
#include <QDebug>
#include <QMenuBar>
#include <QStatusBar>
#include <QAction>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    // Add central widget
    QPushButton * button = new QPushButton("Hello", this);

    setCentralWidget(button);

    // Declare Quit Action
    QAction * quit = new QAction("Quit");
    connect(quit, &QAction::triggered, [=](){
        QApplication::quit();
    });
    // Add menus
    QMenu *fileMenu = menuBar()->addMenu("File");
    fileMenu->addAction(quit);
    menuBar()->addMenu(("Edit"));
    menuBar()->addMenu("Window");
    menuBar()->addMenu(("Settings"));
    menuBar()->addMenu("Help");

    //    menuBar()->addMenu(("Edit"));
    statusBar()->showMessage("Uploading file...", 4000);
    //    statusBar()->clearMessage();

}

MainWindow::~MainWindow()
{
}

QSize MainWindow::sizeHint() const
{
    return QSize(800, 500);
}

