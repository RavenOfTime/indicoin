/********************************************************************************
** Form generated from reading UI file 'secondauthdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDAUTHDIALOG_H
#define UI_SECONDAUTHDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SecondAuthDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *infoLabel;
    QHBoxLayout *horizontalLayout;
    QValidatedLineEdit *addressIn;
    QPushButton *addressBookButton;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *messageIn;
    QPushButton *pasteButton;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *signatureOut;
    QPushButton *copySignatureButton;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *signMessageButton;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *SecondAuthDialog)
    {
        if (SecondAuthDialog->objectName().isEmpty())
            SecondAuthDialog->setObjectName(QString::fromUtf8("SecondAuthDialog"));
        SecondAuthDialog->setWindowModality(Qt::ApplicationModal);
        SecondAuthDialog->resize(768, 221);
        verticalLayout = new QVBoxLayout(SecondAuthDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        infoLabel = new QLabel(SecondAuthDialog);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setTextFormat(Qt::PlainText);
        infoLabel->setWordWrap(true);

        verticalLayout->addWidget(infoLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addressIn = new QValidatedLineEdit(SecondAuthDialog);
        addressIn->setObjectName(QString::fromUtf8("addressIn"));
        addressIn->setMaxLength(34);

        horizontalLayout->addWidget(addressIn);

        addressBookButton = new QPushButton(SecondAuthDialog);
        addressBookButton->setObjectName(QString::fromUtf8("addressBookButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);
        addressBookButton->setAutoDefault(false);

        horizontalLayout->addWidget(addressBookButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        messageIn = new QLineEdit(SecondAuthDialog);
        messageIn->setObjectName(QString::fromUtf8("messageIn"));
        messageIn->setMaxLength(64);

        horizontalLayout_2->addWidget(messageIn);

        pasteButton = new QPushButton(SecondAuthDialog);
        pasteButton->setObjectName(QString::fromUtf8("pasteButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon1);
        pasteButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(pasteButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        signatureOut = new QLineEdit(SecondAuthDialog);
        signatureOut->setObjectName(QString::fromUtf8("signatureOut"));
        QFont font;
        font.setItalic(true);
        signatureOut->setFont(font);
        signatureOut->setReadOnly(true);

        horizontalLayout_3->addWidget(signatureOut);

        copySignatureButton = new QPushButton(SecondAuthDialog);
        copySignatureButton->setObjectName(QString::fromUtf8("copySignatureButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/editcopy"), QSize(), QIcon::Normal, QIcon::Off);
        copySignatureButton->setIcon(icon2);
        copySignatureButton->setAutoDefault(false);

        horizontalLayout_3->addWidget(copySignatureButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        signMessageButton = new QPushButton(SecondAuthDialog);
        signMessageButton->setObjectName(QString::fromUtf8("signMessageButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/edit"), QSize(), QIcon::Normal, QIcon::Off);
        signMessageButton->setIcon(icon3);
        signMessageButton->setAutoDefault(false);

        horizontalLayout_4->addWidget(signMessageButton);

        clearButton = new QPushButton(SecondAuthDialog);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon4);
        clearButton->setAutoDefault(false);

        horizontalLayout_4->addWidget(clearButton);

        horizontalSpacer = new QSpacerItem(10, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        statusLabel = new QLabel(SecondAuthDialog);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        statusLabel->setFont(font1);
        statusLabel->setWordWrap(true);

        horizontalLayout_4->addWidget(statusLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(SecondAuthDialog);

        QMetaObject::connectSlotsByName(SecondAuthDialog);
    } // setupUi

    void retranslateUi(QWidget *SecondAuthDialog)
    {
        SecondAuthDialog->setWindowTitle(QApplication::translate("SecondAuthDialog", "Second Authentification", 0, QApplication::UnicodeUTF8));
        infoLabel->setText(QApplication::translate("SecondAuthDialog", "You can sign hash of transaction exists in the blockchain with your addresses.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addressIn->setToolTip(QApplication::translate("SecondAuthDialog", "The address for authentification (e.g. 4Zo1ga6xuKuQ7JV7M9rGDoxdbYwV5zgQJ5)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("SecondAuthDialog", "Choose an address from the address book", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("SecondAuthDialog", "Alt+A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("SecondAuthDialog", "Paste hash from clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
        pasteButton->setShortcut(QApplication::translate("SecondAuthDialog", "Alt+P", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        copySignatureButton->setToolTip(QApplication::translate("SecondAuthDialog", "Copy the current signature to the system clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        copySignatureButton->setText(QString());
        copySignatureButton->setShortcut(QApplication::translate("SecondAuthDialog", "Alt+C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        signMessageButton->setToolTip(QApplication::translate("SecondAuthDialog", "Sign the hash", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        signMessageButton->setText(QApplication::translate("SecondAuthDialog", "&Sign Data", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("SecondAuthDialog", "Reset all sign message fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("SecondAuthDialog", "Clear &All", 0, QApplication::UnicodeUTF8));
        statusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SecondAuthDialog: public Ui_SecondAuthDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDAUTHDIALOG_H
