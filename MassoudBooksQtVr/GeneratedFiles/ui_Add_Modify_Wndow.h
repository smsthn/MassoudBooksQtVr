/********************************************************************************
** Form generated from reading UI file 'Add_Modify_Wndow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_MODIFY_WNDOW_H
#define UI_ADD_MODIFY_WNDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_Modify_Wndow
{
public:
    QFrame *gridFrame;
    QGridLayout *gridLayout;
    QFrame *verticalFrameRight;
    QVBoxLayout *verticalLayout;
    QLineEdit *BookNameTxtBx;
    QComboBox *TagsComboBox;
    QComboBox *CatagoryComboBox;
    QComboBox *ReadingStatusComboBox;
    QSpinBox *PagesSpinBox;
    QFrame *verticalFrameLeft;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_5;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *CancelBtn;
    QPushButton *Add_Modiy_Btn;

    void setupUi(QWidget *Add_Modify_Wndow)
    {
        if (Add_Modify_Wndow->objectName().isEmpty())
            Add_Modify_Wndow->setObjectName(QStringLiteral("Add_Modify_Wndow"));
        Add_Modify_Wndow->resize(483, 282);
        Add_Modify_Wndow->setStyleSheet(QLatin1String("#Add_Modify_Wndow{\n"
"background-color: white;\n"
"}"));
        gridFrame = new QFrame(Add_Modify_Wndow);
        gridFrame->setObjectName(QStringLiteral("gridFrame"));
        gridFrame->setGeometry(QRect(0, -1, 481, 281));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gridFrame->sizePolicy().hasHeightForWidth());
        gridFrame->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(gridFrame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalFrameRight = new QFrame(gridFrame);
        verticalFrameRight->setObjectName(QStringLiteral("verticalFrameRight"));
        verticalFrameRight->setMinimumSize(QSize(0, 28));
        verticalLayout = new QVBoxLayout(verticalFrameRight);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        BookNameTxtBx = new QLineEdit(verticalFrameRight);
        BookNameTxtBx->setObjectName(QStringLiteral("BookNameTxtBx"));
        BookNameTxtBx->setMinimumSize(QSize(0, 28));
        BookNameTxtBx->setSizeIncrement(QSize(0, 0));
        BookNameTxtBx->setBaseSize(QSize(0, 0));

        verticalLayout->addWidget(BookNameTxtBx);

        TagsComboBox = new QComboBox(verticalFrameRight);
        TagsComboBox->setObjectName(QStringLiteral("TagsComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TagsComboBox->sizePolicy().hasHeightForWidth());
        TagsComboBox->setSizePolicy(sizePolicy1);
        TagsComboBox->setMinimumSize(QSize(0, 28));
        TagsComboBox->setSizeIncrement(QSize(0, 28));
        TagsComboBox->setBaseSize(QSize(0, 0));
        TagsComboBox->setAutoFillBackground(false);
        TagsComboBox->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(TagsComboBox);

        CatagoryComboBox = new QComboBox(verticalFrameRight);
        CatagoryComboBox->setObjectName(QStringLiteral("CatagoryComboBox"));
        CatagoryComboBox->setMinimumSize(QSize(0, 28));

        verticalLayout->addWidget(CatagoryComboBox);

        ReadingStatusComboBox = new QComboBox(verticalFrameRight);
        ReadingStatusComboBox->setObjectName(QStringLiteral("ReadingStatusComboBox"));
        ReadingStatusComboBox->setMinimumSize(QSize(0, 28));

        verticalLayout->addWidget(ReadingStatusComboBox);

        PagesSpinBox = new QSpinBox(verticalFrameRight);
        PagesSpinBox->setObjectName(QStringLiteral("PagesSpinBox"));
        PagesSpinBox->setMinimumSize(QSize(0, 28));
        PagesSpinBox->setSizeIncrement(QSize(0, 0));

        verticalLayout->addWidget(PagesSpinBox);


        gridLayout->addWidget(verticalFrameRight, 0, 1, 1, 1);

        verticalFrameLeft = new QFrame(gridFrame);
        verticalFrameLeft->setObjectName(QStringLiteral("verticalFrameLeft"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(verticalFrameLeft->sizePolicy().hasHeightForWidth());
        verticalFrameLeft->setSizePolicy(sizePolicy2);
        verticalFrameLeft->setMinimumSize(QSize(177, 0));
        verticalFrameLeft->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(verticalFrameLeft);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(verticalFrameLeft);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font.setPointSize(14);
        font.setBold(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("margin-left:30px;"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        label_4 = new QLabel(verticalFrameLeft);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("margin-right:37px;"));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setMargin(0);

        verticalLayout_2->addWidget(label_4);

        label_3 = new QLabel(verticalFrameLeft);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        label = new QLabel(verticalFrameLeft);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("margin-left:50px;"));
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(0);

        verticalLayout_2->addWidget(label);

        label_5 = new QLabel(verticalFrameLeft);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("margin-right:30px;"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_5);


        gridLayout->addWidget(verticalFrameLeft, 0, 0, 1, 1);

        horizontalFrame = new QFrame(gridFrame);
        horizontalFrame->setObjectName(QStringLiteral("horizontalFrame"));
        sizePolicy1.setHeightForWidth(horizontalFrame->sizePolicy().hasHeightForWidth());
        horizontalFrame->setSizePolicy(sizePolicy1);
        horizontalFrame->setMinimumSize(QSize(0, 57));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(197, -1, -1, -1);
        CancelBtn = new QPushButton(horizontalFrame);
        CancelBtn->setObjectName(QStringLiteral("CancelBtn"));

        horizontalLayout->addWidget(CancelBtn);

        Add_Modiy_Btn = new QPushButton(horizontalFrame);
        Add_Modiy_Btn->setObjectName(QStringLiteral("Add_Modiy_Btn"));

        horizontalLayout->addWidget(Add_Modiy_Btn);


        gridLayout->addWidget(horizontalFrame, 1, 0, 1, 2);


        retranslateUi(Add_Modify_Wndow);

        QMetaObject::connectSlotsByName(Add_Modify_Wndow);
    } // setupUi

    void retranslateUi(QWidget *Add_Modify_Wndow)
    {
        Add_Modify_Wndow->setWindowTitle(QApplication::translate("Add_Modify_Wndow", "Add_Modify_Wndow", nullptr));
        label_2->setText(QApplication::translate("Add_Modify_Wndow", "Book Name", nullptr));
        label_4->setText(QApplication::translate("Add_Modify_Wndow", "Tags", nullptr));
        label_3->setText(QApplication::translate("Add_Modify_Wndow", "Catagory", nullptr));
        label->setText(QApplication::translate("Add_Modify_Wndow", "Reading Status", nullptr));
        label_5->setText(QApplication::translate("Add_Modify_Wndow", "Pages", nullptr));
        CancelBtn->setText(QApplication::translate("Add_Modify_Wndow", "Cancel", nullptr));
        Add_Modiy_Btn->setText(QApplication::translate("Add_Modify_Wndow", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_Modify_Wndow: public Ui_Add_Modify_Wndow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_MODIFY_WNDOW_H
