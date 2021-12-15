#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    testsc1 = new QxtGlobalShortcut(QKeySequence("Shift+F1"));
    testsc2 = new QxtGlobalShortcut(QKeySequence("Shift+F2"));

    QObject::connect(testsc1, SIGNAL(activated()), this, SLOT( test1() ));
    QObject::connect(testsc2, SIGNAL(activated()), this, SLOT( test2() ));
    QObject::connect(ui->pushButton, SIGNAL( clicked() ), this, SLOT( delete1() ));
}

MainWindow::~MainWindow()
{
    delete testsc1;
    delete testsc2;
    delete ui;
}

void MainWindow::test1() {
    std::cout << "Testshortcut 1" << std::endl;
}

void MainWindow::test2() {
    std::cout << "Testshortcut 2" << std::endl;
}

void MainWindow::delete1() {
    std::cout << "delete1" << std::endl;
    delete testsc1;
    testsc1 = nullptr;
}

