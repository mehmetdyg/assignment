#include "widget.h"
#include "ui_widget.h"
#include "string.h"
#include <fstream>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //The application starts with F at combobox. Only text line edit will be enabled.
    ui->replacedLineEdit->setEnabled(false);
    ui->replacedWithLineEdit->setEnabled(false);
    ui->deleteTextLineEdit->setEnabled(false);
    ui->textLineEdit->setEnabled(true);

    setWindowTitle("CS TECH Assignment");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_runCommandBtn_clicked()
{
    std::string text = ui->textLineEdit->text().toStdString();
    std::string textToBeReplaced = ui->replacedLineEdit->text().toStdString();
    std::string textToBeReplacedWith = ui->replacedWithLineEdit->text().toStdString();
    std::string deleteText = ui->deleteTextLineEdit->text().toStdString();

    int command = ui->commandCB->currentIndex();

    if(command == F)
    {
        SearchOperation(text);
    }
    else if(command == R)
    {
        ReplaceOperation(textToBeReplacedWith, textToBeReplaced);
    }
    else if(command == D)
    {
        DeleteOperation(deleteText);
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Wrong command.");
        msgBox.exec();
    }
}

void Widget::SearchOperation(std::string& text)
{
    int wordCount = 0;
    QFile MyFile(filePath);
    if(!MyFile.open(QIODevice::ReadWrite))
    {
        QMessageBox msgBox;
        msgBox.setText("File could NOT be opened.");
        msgBox.exec();
        return;
    }
    QTextStream textStream(&MyFile);

    std::string content = textStream.readAll().toStdString();

    if(content.empty())
    {
        QMessageBox msgBox;
        msgBox.setText("File is empty.");
        msgBox.exec();
        return;
    }
    else
    {
        size_t nPos = content.find(text, 0); // first occurrence
        while(nPos != std::string::npos)
        {
            wordCount++;
            nPos = content.find(text, nPos + 1);
        }
    }


    ui->numOfWordsLbl->setText(QString::number(wordCount, 10));
    MyFile.close();
}

void Widget::ReplaceOperation(std::string& textToBeReplacedWith, std::string& textToBeReplaced)
{
    QFile MyFile(filePath);
    if(!MyFile.open(QIODevice::ReadWrite))
    {
        QMessageBox msgBox;
        msgBox.setText("File could NOT be opened.");
        msgBox.exec();
        return;
    }
    QTextStream textStream(&MyFile);

    std::string content = textStream.readAll().toStdString();

    size_t pos = 0;
    while ((pos = content.find(textToBeReplaced, pos)) != std::string::npos) {
        content.replace(pos, textToBeReplaced.length(), textToBeReplacedWith);
        pos += textToBeReplacedWith.length();
    }

    //clear the content before
    std::ofstream fs;
    fs.open(filePath.toStdString(), std::ios::out | std::ios::trunc);
    fs.close();

    //write the new content
    char const *c = content.c_str();
    textStream << c;
}

void Widget::DeleteOperation(std::string& deleteText)
{
    std::string emptyString = " ";
    QFile MyFile(filePath);
    if(!MyFile.open(QIODevice::ReadWrite))
    {
        QMessageBox msgBox;
        msgBox.setText("File could NOT be opened.");
        msgBox.exec();
        return;
    }
    QTextStream textStream(&MyFile);

    std::string content = textStream.readAll().toStdString();

    size_t pos = 0;
    while ((pos = content.find(deleteText, pos)) != std::string::npos) {
        content.erase(pos, deleteText.length());
    }

    //clear the content before
    std::ofstream fs;
    fs.open(filePath.toStdString(), std::ios::out | std::ios::trunc);
    fs.close();

    //write the new content
    char const *c = content.c_str();
    textStream << c;

}

void Widget::on_chooseFileBtn_clicked()
{
    filePath = QFileDialog::getOpenFileName(this, "Choose File");
}

void Widget::on_commandCB_currentIndexChanged(int index)
{
    switch (index) {
    case F:
        // In finding mode only text line edit will be enabled.
        ui->replacedLineEdit->setEnabled(false);
        ui->replacedWithLineEdit->setEnabled(false);
        ui->deleteTextLineEdit->setEnabled(false);
        ui->textLineEdit->setEnabled(true);
        break;
    case R:
        // In replacing mode only replaced with and replaced line edits will be enabled.
        ui->replacedLineEdit->setEnabled(true);
        ui->replacedWithLineEdit->setEnabled(true);
        ui->deleteTextLineEdit->setEnabled(false);
        ui->textLineEdit->setEnabled(false);
        break;
    case D:
        // In deleting mode only delete line edit will be enabled.
        ui->replacedLineEdit->setEnabled(false);
        ui->replacedWithLineEdit->setEnabled(false);
        ui->deleteTextLineEdit->setEnabled(true);
        ui->textLineEdit->setEnabled(false);
        break;
    default:
        break;
    }
}
