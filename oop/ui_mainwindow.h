/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *filename;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_10;
    QFormLayout *formLayout_3;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_6;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_9;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_7;
    QLabel *label_12;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_8;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_3;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_4;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1050, 770);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(20, 20, 700, 700));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(730, 20, 301, 701));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout->addWidget(label_11);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);

        filename = new QLineEdit(verticalLayoutWidget);
        filename->setObjectName(QStringLiteral("filename"));

        horizontalLayout->addWidget(filename);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout->addWidget(label_10);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setHorizontalSpacing(1);
        formLayout_3->setVerticalSpacing(2);
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_6);

        doubleSpinBox_6 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_6->setObjectName(QStringLiteral("doubleSpinBox_6"));
        doubleSpinBox_6->setMinimum(-1000);
        doubleSpinBox_6->setMaximum(1000);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_6);


        verticalLayout->addLayout(formLayout_3);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_2);

        doubleSpinBox_2 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setMinimum(-1000);
        doubleSpinBox_2->setMaximum(1000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_2);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_5);

        doubleSpinBox_5 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_5->setObjectName(QStringLiteral("doubleSpinBox_5"));
        doubleSpinBox_5->setMinimum(-1000);
        doubleSpinBox_5->setMaximum(1000);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, doubleSpinBox_5);

        doubleSpinBox_7 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_7->setObjectName(QStringLiteral("doubleSpinBox_7"));
        doubleSpinBox_7->setMinimum(-1000);
        doubleSpinBox_7->setMaximum(1000);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, doubleSpinBox_7);

        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_12);


        verticalLayout->addLayout(formLayout_2);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        doubleSpinBox = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setMinimum(-1000);
        doubleSpinBox->setMaximum(1000);

        formLayout->setWidget(0, QFormLayout::FieldRole, doubleSpinBox);

        doubleSpinBox_3 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setMinimum(-1000);
        doubleSpinBox_3->setMaximum(1000);

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_3);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        doubleSpinBox_4 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));
        doubleSpinBox_4->setMinimum(-1000);
        doubleSpinBox_4->setMaximum(1000);

        formLayout->setWidget(3, QFormLayout::FieldRole, doubleSpinBox_4);


        verticalLayout->addLayout(formLayout);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1050, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \321\204\320\260\320\271\320\273\320\260 \320\264\320\273\321\217 \320\267\320\260\320\263\321\200\321\203\320\267\320\272\320\270", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\204\320\260\320\271\320\273\320\260: ", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\274\320\276\320\264\320\265\320\273\321\214", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\321\215\321\204\320\270\321\206\320\265\320\275\321\202 \320\274\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "K: ", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\321\202\321\214", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\321\215\321\204\320\270\321\206\321\206\320\265\320\275\321\202\321\213 \320\277\320\265\321\200\320\265\320\275\320\276\321\201\320\260:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "dx:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "dy:", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "dz:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\275\320\265\321\201\321\202\320\270", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\203\320\263\320\273\321\213 \320\264\320\273\321\217 \320\277\320\276\320\262\320\276\321\200\320\276\321\202\320\260", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "alphax", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "alphay", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "alphaz", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\321\214", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \320\274\320\276\320\264\320\265\320\273\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
