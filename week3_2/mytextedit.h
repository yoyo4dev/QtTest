#ifndef MYTEXTEDIT_H
#define MYTEXTEDIT_H
#include <QTextEdit>

class MyTextEdit : public QTextEdit
{
public:
    MyTextEdit();

protected:
    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);
};

#endif // MYTEXTEDIT_H
