#include <QPushButton>
#include <QLabel>
#include "mainwindow.h"     // MainWindow class define
#include "ui_mainwindow.h"  // UI code form `mainwindow.ui`

// Constructor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)           // init window
    , ui(new Ui::MainWindow)        // create ui
{
    // create button
    ui->setupUi(this);              // set ui
    auto *button = new QPushButton("押してみる", this);
    button->move(150, 100);         // locate button
    button->show();                 // show button

    // connects click to action
    // * [this]() { ... } : lambda
    connect(button, &QPushButton::clicked, this, [this]() {
        ui->label->setText("クリックされました");
    });
}

// Distructor
MainWindow::~MainWindow()
{
    delete ui;
}
