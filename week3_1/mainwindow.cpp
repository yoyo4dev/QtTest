#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setWindowTitle("main window");
    setMinimumWidth(300);
    newAction = new QAction(this);
    newAction->setText(tr("New Window"));

    toolBar = new QToolBar(this);
    toolBar->addAction(newAction);
    addToolBar(Qt::TopToolBarArea, toolBar);

    connect(newAction, &QAction::triggered, this, closeAndOpenNew);
}

void MainWindow::closeAndOpenNew()
{
    close();
    openNewWindow();
}
