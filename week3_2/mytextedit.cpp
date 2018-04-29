#include "mytextedit.h"
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>
#include <QMessageBox>
#include <QTextStream>

MyTextEdit::MyTextEdit()
{

}

void MyTextEdit::dragEnterEvent(QDragEnterEvent *event)
{
    if(event->mimeData()->hasUrls())
        event->accept();
    else {
        event->ignore();
    }
}

void MyTextEdit::dropEvent(QDropEvent *event)
{
    const QMimeData *mimeData = event->mimeData();
    if(mimeData->hasUrls()) {
        QList<QUrl> urlList = mimeData->urls();
        QString fileName = urlList.at(0).toLocalFile();

        if (!fileName.isEmpty()) {
            QFile file(fileName);
            if(!file.open(QFile::ReadOnly | QFile::Text)) {
                QMessageBox::warning(this, tr("Warning!!!"), tr("can't read file %1: \n %2.")
                                     .arg(fileName).arg(file.errorString()));
            } else {
                QTextStream in(&file);
                setText(in.readAll());
                setWindowTitle(fileName);
            }
        }
    }
}
