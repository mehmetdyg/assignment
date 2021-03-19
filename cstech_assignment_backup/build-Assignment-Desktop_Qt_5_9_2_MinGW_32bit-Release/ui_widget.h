/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *runCommandBtn;
    QLabel *label_4;
    QLabel *numOfWordsLbl;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *chooseFileBtn;
    QComboBox *commandCB;
    QLineEdit *textLineEdit;
    QLineEdit *replacedLineEdit;
    QLineEdit *replacedWithLineEdit;
    QLineEdit *deleteTextLineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(330, 289);
        runCommandBtn = new QPushButton(Widget);
        runCommandBtn->setObjectName(QStringLiteral("runCommandBtn"));
        runCommandBtn->setGeometry(QRect(210, 250, 101, 28));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 220, 101, 16));
        numOfWordsLbl = new QLabel(Widget);
        numOfWordsLbl->setObjectName(QStringLiteral("numOfWordsLbl"));
        numOfWordsLbl->setGeometry(QRect(150, 220, 161, 16));
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(21, 11, 125, 191));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(150, 14, 161, 191));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        chooseFileBtn = new QPushButton(widget1);
        chooseFileBtn->setObjectName(QStringLiteral("chooseFileBtn"));

        verticalLayout_2->addWidget(chooseFileBtn);

        commandCB = new QComboBox(widget1);
        commandCB->setObjectName(QStringLiteral("commandCB"));

        verticalLayout_2->addWidget(commandCB);

        textLineEdit = new QLineEdit(widget1);
        textLineEdit->setObjectName(QStringLiteral("textLineEdit"));

        verticalLayout_2->addWidget(textLineEdit);

        replacedLineEdit = new QLineEdit(widget1);
        replacedLineEdit->setObjectName(QStringLiteral("replacedLineEdit"));

        verticalLayout_2->addWidget(replacedLineEdit);

        replacedWithLineEdit = new QLineEdit(widget1);
        replacedWithLineEdit->setObjectName(QStringLiteral("replacedWithLineEdit"));

        verticalLayout_2->addWidget(replacedWithLineEdit);

        deleteTextLineEdit = new QLineEdit(widget1);
        deleteTextLineEdit->setObjectName(QStringLiteral("deleteTextLineEdit"));

        verticalLayout_2->addWidget(deleteTextLineEdit);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        runCommandBtn->setText(QApplication::translate("Widget", "Run Command", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "Number of Words", Q_NULLPTR));
        numOfWordsLbl->setText(QApplication::translate("Widget", "N/A", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "File", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "Command Type", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "Text to Search", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "Text To Be Replaced", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "Text To Replace With", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "Text To Be Deleted", Q_NULLPTR));
        chooseFileBtn->setText(QApplication::translate("Widget", "Choose File", Q_NULLPTR));
        commandCB->clear();
        commandCB->insertItems(0, QStringList()
         << QApplication::translate("Widget", "F", Q_NULLPTR)
         << QApplication::translate("Widget", "R", Q_NULLPTR)
         << QApplication::translate("Widget", "D", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
