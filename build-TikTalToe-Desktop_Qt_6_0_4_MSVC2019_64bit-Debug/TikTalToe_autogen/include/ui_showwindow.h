/********************************************************************************
** Form generated from reading UI file 'showwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWWINDOW_H
#define UI_SHOWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *m7PushButton;
    QPushButton *m1PushButton;
    QPushButton *m3PushButton;
    QPushButton *m6PushButton;
    QPushButton *m4PushButton;
    QPushButton *m0PushButton;
    QPushButton *m8PushButton;
    QPushButton *m5PushButton;
    QPushButton *m2PushButton;
    QHBoxLayout *horizontalLayout;
    QLabel *mOLabel;
    QLabel *mTrunNowLabel;
    QLabel *mXLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ShowWindow)
    {
        if (ShowWindow->objectName().isEmpty())
            ShowWindow->setObjectName(QString::fromUtf8("ShowWindow"));
        ShowWindow->resize(800, 600);
        centralwidget = new QWidget(ShowWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        m7PushButton = new QPushButton(centralwidget);
        m7PushButton->setObjectName(QString::fromUtf8("m7PushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m7PushButton->sizePolicy().hasHeightForWidth());
        m7PushButton->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush2(QColor(227, 227, 227, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(160, 160, 160, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush4(QColor(240, 240, 240, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush5(QColor(18, 232, 161, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        QBrush brush6(QColor(0, 120, 215, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush1);
        QBrush brush7(QColor(0, 0, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush7);
        QBrush brush8(QColor(255, 0, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush8);
        QBrush brush9(QColor(245, 245, 245, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush11(QColor(0, 0, 0, 128));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        QBrush brush12(QColor(105, 105, 105, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        QBrush brush13(QColor(0, 0, 0, 255));
        brush13.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        QBrush brush14(QColor(120, 120, 120, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        QBrush brush15(QColor(247, 247, 247, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        QBrush brush16(QColor(0, 0, 0, 255));
        brush16.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush16);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        m7PushButton->setPalette(palette);
        QFont font;
        font.setPointSize(34);
        font.setStyleStrategy(QFont::PreferDefault);
        m7PushButton->setFont(font);

        gridLayout_2->addWidget(m7PushButton, 2, 2, 1, 1);

        m1PushButton = new QPushButton(centralwidget);
        m1PushButton->setObjectName(QString::fromUtf8("m1PushButton"));
        sizePolicy.setHeightForWidth(m1PushButton->sizePolicy().hasHeightForWidth());
        m1PushButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(34);
        m1PushButton->setFont(font1);

        gridLayout_2->addWidget(m1PushButton, 0, 2, 1, 1);

        m3PushButton = new QPushButton(centralwidget);
        m3PushButton->setObjectName(QString::fromUtf8("m3PushButton"));
        sizePolicy.setHeightForWidth(m3PushButton->sizePolicy().hasHeightForWidth());
        m3PushButton->setSizePolicy(sizePolicy);
        m3PushButton->setFont(font1);

        gridLayout_2->addWidget(m3PushButton, 1, 1, 1, 1);

        m6PushButton = new QPushButton(centralwidget);
        m6PushButton->setObjectName(QString::fromUtf8("m6PushButton"));
        sizePolicy.setHeightForWidth(m6PushButton->sizePolicy().hasHeightForWidth());
        m6PushButton->setSizePolicy(sizePolicy);
        m6PushButton->setFont(font1);

        gridLayout_2->addWidget(m6PushButton, 2, 1, 1, 1);

        m4PushButton = new QPushButton(centralwidget);
        m4PushButton->setObjectName(QString::fromUtf8("m4PushButton"));
        sizePolicy.setHeightForWidth(m4PushButton->sizePolicy().hasHeightForWidth());
        m4PushButton->setSizePolicy(sizePolicy);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush17(QColor(85, 255, 0, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Link, brush7);
        palette1.setBrush(QPalette::Active, QPalette::LinkVisited, brush8);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Link, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        QBrush brush18(QColor(0, 0, 0, 255));
        brush18.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush18);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Link, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        QBrush brush19(QColor(0, 0, 0, 255));
        brush19.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush19);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        m4PushButton->setPalette(palette1);
        m4PushButton->setFont(font1);

        gridLayout_2->addWidget(m4PushButton, 1, 2, 1, 1);

        m0PushButton = new QPushButton(centralwidget);
        m0PushButton->setObjectName(QString::fromUtf8("m0PushButton"));
        sizePolicy.setHeightForWidth(m0PushButton->sizePolicy().hasHeightForWidth());
        m0PushButton->setSizePolicy(sizePolicy);
        m0PushButton->setFont(font1);

        gridLayout_2->addWidget(m0PushButton, 0, 1, 1, 1);

        m8PushButton = new QPushButton(centralwidget);
        m8PushButton->setObjectName(QString::fromUtf8("m8PushButton"));
        sizePolicy.setHeightForWidth(m8PushButton->sizePolicy().hasHeightForWidth());
        m8PushButton->setSizePolicy(sizePolicy);
        m8PushButton->setFont(font1);

        gridLayout_2->addWidget(m8PushButton, 2, 3, 1, 1);

        m5PushButton = new QPushButton(centralwidget);
        m5PushButton->setObjectName(QString::fromUtf8("m5PushButton"));
        sizePolicy.setHeightForWidth(m5PushButton->sizePolicy().hasHeightForWidth());
        m5PushButton->setSizePolicy(sizePolicy);
        QPalette palette2;
        QBrush brush20(QColor(255, 0, 127, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush20);
        QBrush brush21(QColor(170, 85, 255, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush21);
        QBrush brush22(QColor(85, 170, 127, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush22);
        QBrush brush23(QColor(0, 85, 127, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush23);
        QBrush brush24(QColor(0, 255, 0, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush24);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush24);
        QBrush brush25(QColor(255, 170, 255, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush25);
        QBrush brush26(QColor(255, 85, 255, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush26);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush27(QColor(85, 85, 255, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush27);
        QBrush brush28(QColor(85, 170, 255, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush28);
        QBrush brush29(QColor(85, 170, 0, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush29);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette2.setBrush(QPalette::Active, QPalette::HighlightedText, brush26);
        palette2.setBrush(QPalette::Active, QPalette::Link, brush7);
        palette2.setBrush(QPalette::Active, QPalette::LinkVisited, brush8);
        QBrush brush30(QColor(170, 0, 255, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush30);
        palette2.setBrush(QPalette::Active, QPalette::NoRole, brush);
        QBrush brush31(QColor(255, 0, 0, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush31);
        QBrush brush32(QColor(85, 85, 127, 255));
        brush32.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush32);
        QBrush brush33(QColor(0, 255, 127, 128));
        brush33.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush33);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Link, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        QBrush brush34(QColor(0, 0, 0, 255));
        brush34.setStyle(Qt::NoBrush);
        palette2.setBrush(QPalette::Inactive, QPalette::NoRole, brush34);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush24);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush21);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush22);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush23);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush24);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush24);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush26);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush28);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush28);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Link, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        QBrush brush35(QColor(0, 0, 0, 255));
        brush35.setStyle(Qt::NoBrush);
        palette2.setBrush(QPalette::Disabled, QPalette::NoRole, brush35);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        m5PushButton->setPalette(palette2);
        m5PushButton->setFont(font1);

        gridLayout_2->addWidget(m5PushButton, 1, 3, 1, 1);

        m2PushButton = new QPushButton(centralwidget);
        m2PushButton->setObjectName(QString::fromUtf8("m2PushButton"));
        sizePolicy.setHeightForWidth(m2PushButton->sizePolicy().hasHeightForWidth());
        m2PushButton->setSizePolicy(sizePolicy);
        m2PushButton->setFont(font1);

        gridLayout_2->addWidget(m2PushButton, 0, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mOLabel = new QLabel(centralwidget);
        mOLabel->setObjectName(QString::fromUtf8("mOLabel"));
        QFont font2;
        font2.setPointSize(24);
        mOLabel->setFont(font2);

        horizontalLayout->addWidget(mOLabel);

        mTrunNowLabel = new QLabel(centralwidget);
        mTrunNowLabel->setObjectName(QString::fromUtf8("mTrunNowLabel"));
        mTrunNowLabel->setFont(font2);
        mTrunNowLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(mTrunNowLabel);

        mXLabel = new QLabel(centralwidget);
        mXLabel->setObjectName(QString::fromUtf8("mXLabel"));
        mXLabel->setFont(font2);
        mXLabel->setLayoutDirection(Qt::RightToLeft);
        mXLabel->setTextFormat(Qt::PlainText);
        mXLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(mXLabel);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);

        ShowWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ShowWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        ShowWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ShowWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ShowWindow->setStatusBar(statusbar);

        retranslateUi(ShowWindow);

        QMetaObject::connectSlotsByName(ShowWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ShowWindow)
    {
        ShowWindow->setWindowTitle(QCoreApplication::translate("ShowWindow", "ShowWindow", nullptr));
        m7PushButton->setText(QCoreApplication::translate("ShowWindow", ".", nullptr));
        m1PushButton->setText(QCoreApplication::translate("ShowWindow", ".", nullptr));
        m3PushButton->setText(QCoreApplication::translate("ShowWindow", ".", nullptr));
        m6PushButton->setText(QCoreApplication::translate("ShowWindow", ".", nullptr));
        m4PushButton->setText(QCoreApplication::translate("ShowWindow", ".", nullptr));
        m0PushButton->setText(QCoreApplication::translate("ShowWindow", ".", nullptr));
        m8PushButton->setText(QCoreApplication::translate("ShowWindow", ".", nullptr));
        m5PushButton->setText(QCoreApplication::translate("ShowWindow", ".", nullptr));
        m2PushButton->setText(QCoreApplication::translate("ShowWindow", ".", nullptr));
        mOLabel->setText(QCoreApplication::translate("ShowWindow", "0", nullptr));
        mTrunNowLabel->setText(QCoreApplication::translate("ShowWindow", "Now:", nullptr));
        mXLabel->setText(QCoreApplication::translate("ShowWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowWindow: public Ui_ShowWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWWINDOW_H
