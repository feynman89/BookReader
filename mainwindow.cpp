#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "book.h"
#include "fb2format.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString path = "E:\\Google\\books\\ХудЛит\\Ложная слепота.fb2";
    Book book(path, new FB2Format);
    ui->textBrowser->clear();
    ui->textBrowser->setText(book.getText());
//    ui->textBrowser->verticalScrollBar()->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

