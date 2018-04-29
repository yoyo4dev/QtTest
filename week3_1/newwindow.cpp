#include "newwindow.h"

NewWindow::NewWindow(QWidget *parent) : QMainWindow(parent)
{
    setWindowTitle("new window");
    setMinimumWidth(300);
    mainAction = new QAction(this);
    mainAction->setText(tr("Main Window"));

    toolBar = new QToolBar(this);
    toolBar->addAction(mainAction);
    addToolBar(Qt::TopToolBarArea, toolBar);

    connect(mainAction, &QAction::triggered, this, closAndOpenMain);
}

void NewWindow::closAndOpenMain()
{
    close();
    openMainWindow();
}
