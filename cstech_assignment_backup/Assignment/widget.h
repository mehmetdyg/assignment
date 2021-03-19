#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QDebug>
#include <QTextStream>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_runCommandBtn_clicked();

    void on_chooseFileBtn_clicked();

    void on_commandCB_currentIndexChanged(int index);

private:
    Ui::Widget *ui;
    void SearchOperation(std::string& text);
    void ReplaceOperation(std::string& textToBeReplacedWith, std::string& textToBeReplaced);
    void DeleteOperation(std::string &deleteText);

    enum command
    {
        F = 0,
        R,
        D
    };

    const QString defaultPathPrefix = "";
    QString filePath;
};

#endif // WIDGET_H
