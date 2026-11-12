#include <QPushButton>
#include <QLabel>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    auto *button = new QPushButton("押してみる", this);
    button->move(150, 100);
    button->show();

    connect(button, &QPushButton::clicked, this, [this]() {
        ui->label->setText("クリックされました");
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
