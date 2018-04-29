#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    textEdit = new MyTextEdit();
    setCentralWidget(textEdit);
}
