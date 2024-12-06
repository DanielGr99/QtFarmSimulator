/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelTitle;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_20;
    QHBoxLayout *horizontalLayout;
    QLabel *labelMoney;
    QLabel *labelMoney2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelAnimals;
    QLabel *labelAnimals2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelWeek;
    QLabel *labelWeek2;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelCow;
    QLabel *labelCowPrice;
    QPushButton *buttonBuyCow;
    QLabel *labelSellCow;
    QPushButton *buttonSellCow;
    QVBoxLayout *verticalLayout;
    QLabel *labelCow2;
    QLabel *labelCowPrice2;
    QSpinBox *spinBoxBuyCow;
    QLabel *labelSellCow2;
    QSpinBox *spinBoxSellCow;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelSheep;
    QLabel *labelSheepPrice;
    QPushButton *buttonBuySheep;
    QLabel *labelSellSheep;
    QPushButton *buttonSellSheep;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelSheep2;
    QLabel *labelSheepPrice2;
    QSpinBox *spinBoxBuySheep;
    QLabel *labelSellSheep2;
    QSpinBox *spinBoxSellSheep;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelChicken;
    QLabel *labelChickenPrice;
    QPushButton *buttonBuyChicken;
    QLabel *labelSellChicken;
    QPushButton *buttonSellChicken;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelChicken2;
    QLabel *labelChickenPrice2;
    QSpinBox *spinBoxBuyChicken;
    QLabel *labelSellChicken2;
    QSpinBox *spinBoxSellChicken;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_19;
    QLabel *labelFarmPrice;
    QLabel *labelFarmPrice2;
    QPushButton *buttonBuyFarmspace;
    QSpacerItem *verticalSpacer_3;
    QPushButton *buttonSkipWeek;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(550, 417);
        MainWindow->setMaximumSize(QSize(550, 417));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_8 = new QVBoxLayout(centralwidget);
        verticalLayout_8->setObjectName("verticalLayout_8");
        labelTitle = new QLabel(centralwidget);
        labelTitle->setObjectName("labelTitle");
        labelTitle->setFrameShape(QFrame::Shape::Box);
        labelTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8->addWidget(labelTitle);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelMoney = new QLabel(centralwidget);
        labelMoney->setObjectName("labelMoney");
        labelMoney->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        labelMoney->setFrameShape(QFrame::Shape::NoFrame);
        labelMoney->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(labelMoney);

        labelMoney2 = new QLabel(centralwidget);
        labelMoney2->setObjectName("labelMoney2");
        labelMoney2->setFrameShape(QFrame::Shape::NoFrame);

        horizontalLayout->addWidget(labelMoney2);


        horizontalLayout_20->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelAnimals = new QLabel(centralwidget);
        labelAnimals->setObjectName("labelAnimals");
        labelAnimals->setFrameShape(QFrame::Shape::NoFrame);
        labelAnimals->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(labelAnimals);

        labelAnimals2 = new QLabel(centralwidget);
        labelAnimals2->setObjectName("labelAnimals2");
        labelAnimals2->setFrameShape(QFrame::Shape::NoFrame);

        horizontalLayout_3->addWidget(labelAnimals2);


        horizontalLayout_20->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        labelWeek = new QLabel(centralwidget);
        labelWeek->setObjectName("labelWeek");
        labelWeek->setFrameShape(QFrame::Shape::NoFrame);
        labelWeek->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_5->addWidget(labelWeek);

        labelWeek2 = new QLabel(centralwidget);
        labelWeek2->setObjectName("labelWeek2");
        labelWeek2->setFrameShape(QFrame::Shape::NoFrame);

        horizontalLayout_5->addWidget(labelWeek2);


        horizontalLayout_20->addLayout(horizontalLayout_5);


        verticalLayout_8->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        verticalSpacer_5 = new QSpacerItem(20, 45, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_21->addItem(verticalSpacer_5);


        verticalLayout_8->addLayout(horizontalLayout_21);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        labelCow = new QLabel(centralwidget);
        labelCow->setObjectName("labelCow");
        labelCow->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_5->addWidget(labelCow);

        labelCowPrice = new QLabel(centralwidget);
        labelCowPrice->setObjectName("labelCowPrice");
        labelCowPrice->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_5->addWidget(labelCowPrice);

        buttonBuyCow = new QPushButton(centralwidget);
        buttonBuyCow->setObjectName("buttonBuyCow");

        verticalLayout_5->addWidget(buttonBuyCow);

        labelSellCow = new QLabel(centralwidget);
        labelSellCow->setObjectName("labelSellCow");
        labelSellCow->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_5->addWidget(labelSellCow);

        buttonSellCow = new QPushButton(centralwidget);
        buttonSellCow->setObjectName("buttonSellCow");

        verticalLayout_5->addWidget(buttonSellCow);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        labelCow2 = new QLabel(centralwidget);
        labelCow2->setObjectName("labelCow2");

        verticalLayout->addWidget(labelCow2);

        labelCowPrice2 = new QLabel(centralwidget);
        labelCowPrice2->setObjectName("labelCowPrice2");

        verticalLayout->addWidget(labelCowPrice2);

        spinBoxBuyCow = new QSpinBox(centralwidget);
        spinBoxBuyCow->setObjectName("spinBoxBuyCow");

        verticalLayout->addWidget(spinBoxBuyCow);

        labelSellCow2 = new QLabel(centralwidget);
        labelSellCow2->setObjectName("labelSellCow2");

        verticalLayout->addWidget(labelSellCow2);

        spinBoxSellCow = new QSpinBox(centralwidget);
        spinBoxSellCow->setObjectName("spinBoxSellCow");

        verticalLayout->addWidget(spinBoxSellCow);


        horizontalLayout_2->addLayout(verticalLayout);


        horizontalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        labelSheep = new QLabel(centralwidget);
        labelSheep->setObjectName("labelSheep");
        labelSheep->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_6->addWidget(labelSheep);

        labelSheepPrice = new QLabel(centralwidget);
        labelSheepPrice->setObjectName("labelSheepPrice");
        labelSheepPrice->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_6->addWidget(labelSheepPrice);

        buttonBuySheep = new QPushButton(centralwidget);
        buttonBuySheep->setObjectName("buttonBuySheep");

        verticalLayout_6->addWidget(buttonBuySheep);

        labelSellSheep = new QLabel(centralwidget);
        labelSellSheep->setObjectName("labelSellSheep");
        labelSellSheep->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_6->addWidget(labelSellSheep);

        buttonSellSheep = new QPushButton(centralwidget);
        buttonSellSheep->setObjectName("buttonSellSheep");

        verticalLayout_6->addWidget(buttonSellSheep);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        labelSheep2 = new QLabel(centralwidget);
        labelSheep2->setObjectName("labelSheep2");

        verticalLayout_2->addWidget(labelSheep2);

        labelSheepPrice2 = new QLabel(centralwidget);
        labelSheepPrice2->setObjectName("labelSheepPrice2");

        verticalLayout_2->addWidget(labelSheepPrice2);

        spinBoxBuySheep = new QSpinBox(centralwidget);
        spinBoxBuySheep->setObjectName("spinBoxBuySheep");

        verticalLayout_2->addWidget(spinBoxBuySheep);

        labelSellSheep2 = new QLabel(centralwidget);
        labelSellSheep2->setObjectName("labelSellSheep2");

        verticalLayout_2->addWidget(labelSellSheep2);

        spinBoxSellSheep = new QSpinBox(centralwidget);
        spinBoxSellSheep->setObjectName("spinBoxSellSheep");

        verticalLayout_2->addWidget(spinBoxSellSheep);


        horizontalLayout_4->addLayout(verticalLayout_2);


        horizontalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        labelChicken = new QLabel(centralwidget);
        labelChicken->setObjectName("labelChicken");
        labelChicken->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_7->addWidget(labelChicken);

        labelChickenPrice = new QLabel(centralwidget);
        labelChickenPrice->setObjectName("labelChickenPrice");
        labelChickenPrice->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_7->addWidget(labelChickenPrice);

        buttonBuyChicken = new QPushButton(centralwidget);
        buttonBuyChicken->setObjectName("buttonBuyChicken");

        verticalLayout_7->addWidget(buttonBuyChicken);

        labelSellChicken = new QLabel(centralwidget);
        labelSellChicken->setObjectName("labelSellChicken");
        labelSellChicken->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_7->addWidget(labelSellChicken);

        buttonSellChicken = new QPushButton(centralwidget);
        buttonSellChicken->setObjectName("buttonSellChicken");

        verticalLayout_7->addWidget(buttonSellChicken);


        horizontalLayout_6->addLayout(verticalLayout_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        labelChicken2 = new QLabel(centralwidget);
        labelChicken2->setObjectName("labelChicken2");

        verticalLayout_3->addWidget(labelChicken2);

        labelChickenPrice2 = new QLabel(centralwidget);
        labelChickenPrice2->setObjectName("labelChickenPrice2");

        verticalLayout_3->addWidget(labelChickenPrice2);

        spinBoxBuyChicken = new QSpinBox(centralwidget);
        spinBoxBuyChicken->setObjectName("spinBoxBuyChicken");

        verticalLayout_3->addWidget(spinBoxBuyChicken);

        labelSellChicken2 = new QLabel(centralwidget);
        labelSellChicken2->setObjectName("labelSellChicken2");

        verticalLayout_3->addWidget(labelSellChicken2);

        spinBoxSellChicken = new QSpinBox(centralwidget);
        spinBoxSellChicken->setObjectName("spinBoxSellChicken");

        verticalLayout_3->addWidget(spinBoxSellChicken);


        horizontalLayout_6->addLayout(verticalLayout_3);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_8->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(17, 78, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        labelFarmPrice = new QLabel(centralwidget);
        labelFarmPrice->setObjectName("labelFarmPrice");
        labelFarmPrice->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_19->addWidget(labelFarmPrice);

        labelFarmPrice2 = new QLabel(centralwidget);
        labelFarmPrice2->setObjectName("labelFarmPrice2");

        horizontalLayout_19->addWidget(labelFarmPrice2);


        verticalLayout_4->addLayout(horizontalLayout_19);

        buttonBuyFarmspace = new QPushButton(centralwidget);
        buttonBuyFarmspace->setObjectName("buttonBuyFarmspace");

        verticalLayout_4->addWidget(buttonBuyFarmspace);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 12, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);

        buttonSkipWeek = new QPushButton(centralwidget);
        buttonSkipWeek->setObjectName("buttonSkipWeek");

        verticalLayout_8->addWidget(buttonSkipWeek);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 550, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Farmsimulator", nullptr));
        labelTitle->setText(QCoreApplication::translate("MainWindow", "Farmsimulator", nullptr));
        labelMoney->setText(QCoreApplication::translate("MainWindow", "Geld:", nullptr));
        labelMoney2->setText(QCoreApplication::translate("MainWindow", "100000", nullptr));
        labelAnimals->setText(QCoreApplication::translate("MainWindow", "Tiere:", nullptr));
        labelAnimals2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelWeek->setText(QCoreApplication::translate("MainWindow", "Woche:", nullptr));
        labelWeek2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        labelCow->setText(QCoreApplication::translate("MainWindow", "K\303\274he:", nullptr));
        labelCowPrice->setText(QCoreApplication::translate("MainWindow", "Kaufpreis:", nullptr));
        buttonBuyCow->setText(QCoreApplication::translate("MainWindow", "Kaufen", nullptr));
        labelSellCow->setText(QCoreApplication::translate("MainWindow", "Verkaufspreis:", nullptr));
        buttonSellCow->setText(QCoreApplication::translate("MainWindow", "Verkaufen", nullptr));
        labelCow2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelCowPrice2->setText(QCoreApplication::translate("MainWindow", "10000", nullptr));
        labelSellCow2->setText(QCoreApplication::translate("MainWindow", "8000", nullptr));
        labelSheep->setText(QCoreApplication::translate("MainWindow", "Schafe:", nullptr));
        labelSheepPrice->setText(QCoreApplication::translate("MainWindow", "Kaufpreis:", nullptr));
        buttonBuySheep->setText(QCoreApplication::translate("MainWindow", "Kaufen", nullptr));
        labelSellSheep->setText(QCoreApplication::translate("MainWindow", "Verkaufspreis:", nullptr));
        buttonSellSheep->setText(QCoreApplication::translate("MainWindow", "Verkaufen", nullptr));
        labelSheep2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelSheepPrice2->setText(QCoreApplication::translate("MainWindow", "8000", nullptr));
        labelSellSheep2->setText(QCoreApplication::translate("MainWindow", "5000", nullptr));
        labelChicken->setText(QCoreApplication::translate("MainWindow", "H\303\274hner:", nullptr));
        labelChickenPrice->setText(QCoreApplication::translate("MainWindow", "Kaufpreis:", nullptr));
        buttonBuyChicken->setText(QCoreApplication::translate("MainWindow", "Kaufen", nullptr));
        labelSellChicken->setText(QCoreApplication::translate("MainWindow", "Verkaufspreis:", nullptr));
        buttonSellChicken->setText(QCoreApplication::translate("MainWindow", "Verkaufen", nullptr));
        labelChicken2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelChickenPrice2->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        labelSellChicken2->setText(QCoreApplication::translate("MainWindow", "300", nullptr));
        labelFarmPrice->setText(QCoreApplication::translate("MainWindow", "Preis:", nullptr));
        labelFarmPrice2->setText(QCoreApplication::translate("MainWindow", "100000", nullptr));
        buttonBuyFarmspace->setText(QCoreApplication::translate("MainWindow", "Farm vergr\303\266\303\237ern", nullptr));
        buttonSkipWeek->setText(QCoreApplication::translate("MainWindow", "Woche weiterschalten", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
