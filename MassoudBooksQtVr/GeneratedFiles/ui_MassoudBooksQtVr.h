/********************************************************************************
** Form generated from reading UI file 'MassoudBooksQtVr.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASSOUDBOOKSQTVR_H
#define UI_MASSOUDBOOKSQTVR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MassoudBooksQtVrClass
{
public:
    QWidget *centralWidget;
    QFrame *GridFrame_Main;
    QGridLayout *MainGridLayout;
    QHBoxLayout *horizontalLayoutDown;
    QFrame *ButtonsVLayout;
    QVBoxLayout *verticalLayout_6;
    QPushButton *SafeSave_Btn;
    QPushButton *Add_Btn;
    QPushButton *Delete_Btn;
    QFrame *BooksVFrame;
    QVBoxLayout *verticalLayout_5;
    QFrame *verticalFrame_4;
    QVBoxLayout *BooksVLayout;
    QLabel *Books_Label;
    QLineEdit *BooksSearchTextBox;
    QListView *listView_4;
    QFrame *BookNotesVFrame;
    QVBoxLayout *Book_NotesVLayout;
    QLabel *BookNotes_Label;
    QListView *listView_5;
    QHBoxLayout *horizontalLayoutUp;
    QFrame *CatagoriesVFrame;
    QVBoxLayout *CatagoriesVLayout;
    QLabel *Catagories_Label;
    QListView *listView;
    QFrame *ReadingStatusVFrame;
    QVBoxLayout *ReadingStatusVLayout;
    QLabel *ReadingStatus_Label;
    QListView *listView_2;
    QFrame *TagsVFrame;
    QVBoxLayout *TagsVLayout;
    QLabel *Tags_Label;
    QListView *listView_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MassoudBooksQtVrClass)
    {
        if (MassoudBooksQtVrClass->objectName().isEmpty())
            MassoudBooksQtVrClass->setObjectName(QStringLiteral("MassoudBooksQtVrClass"));
        MassoudBooksQtVrClass->resize(752, 453);
        centralWidget = new QWidget(MassoudBooksQtVrClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("#centralWidget{\n"
"background-color: white;\n"
"}"));
        GridFrame_Main = new QFrame(centralWidget);
        GridFrame_Main->setObjectName(QStringLiteral("GridFrame_Main"));
        GridFrame_Main->setGeometry(QRect(9, -1, 741, 400));
        GridFrame_Main->setStyleSheet(QStringLiteral(""));
        MainGridLayout = new QGridLayout(GridFrame_Main);
        MainGridLayout->setSpacing(6);
        MainGridLayout->setContentsMargins(11, 11, 11, 11);
        MainGridLayout->setObjectName(QStringLiteral("MainGridLayout"));
        horizontalLayoutDown = new QHBoxLayout();
        horizontalLayoutDown->setSpacing(4);
        horizontalLayoutDown->setObjectName(QStringLiteral("horizontalLayoutDown"));
        horizontalLayoutDown->setContentsMargins(0, -1, 0, -1);
        ButtonsVLayout = new QFrame(GridFrame_Main);
        ButtonsVLayout->setObjectName(QStringLiteral("ButtonsVLayout"));
        ButtonsVLayout->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ButtonsVLayout->sizePolicy().hasHeightForWidth());
        ButtonsVLayout->setSizePolicy(sizePolicy);
        ButtonsVLayout->setMinimumSize(QSize(152, 0));
        verticalLayout_6 = new QVBoxLayout(ButtonsVLayout);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        SafeSave_Btn = new QPushButton(ButtonsVLayout);
        SafeSave_Btn->setObjectName(QStringLiteral("SafeSave_Btn"));

        verticalLayout_6->addWidget(SafeSave_Btn);

        Add_Btn = new QPushButton(ButtonsVLayout);
        Add_Btn->setObjectName(QStringLiteral("Add_Btn"));

        verticalLayout_6->addWidget(Add_Btn);

        Delete_Btn = new QPushButton(ButtonsVLayout);
        Delete_Btn->setObjectName(QStringLiteral("Delete_Btn"));

        verticalLayout_6->addWidget(Delete_Btn);


        horizontalLayoutDown->addWidget(ButtonsVLayout);

        BooksVFrame = new QFrame(GridFrame_Main);
        BooksVFrame->setObjectName(QStringLiteral("BooksVFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BooksVFrame->sizePolicy().hasHeightForWidth());
        BooksVFrame->setSizePolicy(sizePolicy1);
        BooksVFrame->setMinimumSize(QSize(0, 0));
        BooksVFrame->setSizeIncrement(QSize(0, 0));
        BooksVFrame->setBaseSize(QSize(0, 0));
        verticalLayout_5 = new QVBoxLayout(BooksVFrame);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_5->setContentsMargins(0, -1, -1, -1);
        verticalFrame_4 = new QFrame(BooksVFrame);
        verticalFrame_4->setObjectName(QStringLiteral("verticalFrame_4"));
        BooksVLayout = new QVBoxLayout(verticalFrame_4);
        BooksVLayout->setSpacing(6);
        BooksVLayout->setContentsMargins(11, 11, 11, 11);
        BooksVLayout->setObjectName(QStringLiteral("BooksVLayout"));
        Books_Label = new QLabel(verticalFrame_4);
        Books_Label->setObjectName(QStringLiteral("Books_Label"));
        Books_Label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        BooksVLayout->addWidget(Books_Label);

        BooksSearchTextBox = new QLineEdit(verticalFrame_4);
        BooksSearchTextBox->setObjectName(QStringLiteral("BooksSearchTextBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(BooksSearchTextBox->sizePolicy().hasHeightForWidth());
        BooksSearchTextBox->setSizePolicy(sizePolicy2);

        BooksVLayout->addWidget(BooksSearchTextBox);

        listView_4 = new QListView(verticalFrame_4);
        listView_4->setObjectName(QStringLiteral("listView_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(listView_4->sizePolicy().hasHeightForWidth());
        listView_4->setSizePolicy(sizePolicy3);

        BooksVLayout->addWidget(listView_4);


        verticalLayout_5->addWidget(verticalFrame_4);


        horizontalLayoutDown->addWidget(BooksVFrame);

        BookNotesVFrame = new QFrame(GridFrame_Main);
        BookNotesVFrame->setObjectName(QStringLiteral("BookNotesVFrame"));
        Book_NotesVLayout = new QVBoxLayout(BookNotesVFrame);
        Book_NotesVLayout->setSpacing(6);
        Book_NotesVLayout->setContentsMargins(11, 11, 11, 11);
        Book_NotesVLayout->setObjectName(QStringLiteral("Book_NotesVLayout"));
        BookNotes_Label = new QLabel(BookNotesVFrame);
        BookNotes_Label->setObjectName(QStringLiteral("BookNotes_Label"));
        BookNotes_Label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        Book_NotesVLayout->addWidget(BookNotes_Label);

        listView_5 = new QListView(BookNotesVFrame);
        listView_5->setObjectName(QStringLiteral("listView_5"));
        sizePolicy3.setHeightForWidth(listView_5->sizePolicy().hasHeightForWidth());
        listView_5->setSizePolicy(sizePolicy3);

        Book_NotesVLayout->addWidget(listView_5);


        horizontalLayoutDown->addWidget(BookNotesVFrame);


        MainGridLayout->addLayout(horizontalLayoutDown, 1, 0, 1, 1);

        horizontalLayoutUp = new QHBoxLayout();
        horizontalLayoutUp->setSpacing(6);
        horizontalLayoutUp->setObjectName(QStringLiteral("horizontalLayoutUp"));
        CatagoriesVFrame = new QFrame(GridFrame_Main);
        CatagoriesVFrame->setObjectName(QStringLiteral("CatagoriesVFrame"));
        CatagoriesVLayout = new QVBoxLayout(CatagoriesVFrame);
        CatagoriesVLayout->setSpacing(6);
        CatagoriesVLayout->setContentsMargins(11, 11, 11, 11);
        CatagoriesVLayout->setObjectName(QStringLiteral("CatagoriesVLayout"));
        Catagories_Label = new QLabel(CatagoriesVFrame);
        Catagories_Label->setObjectName(QStringLiteral("Catagories_Label"));
        Catagories_Label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        CatagoriesVLayout->addWidget(Catagories_Label);

        listView = new QListView(CatagoriesVFrame);
        listView->setObjectName(QStringLiteral("listView"));
        sizePolicy3.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy3);

        CatagoriesVLayout->addWidget(listView);


        horizontalLayoutUp->addWidget(CatagoriesVFrame);

        ReadingStatusVFrame = new QFrame(GridFrame_Main);
        ReadingStatusVFrame->setObjectName(QStringLiteral("ReadingStatusVFrame"));
        ReadingStatusVLayout = new QVBoxLayout(ReadingStatusVFrame);
        ReadingStatusVLayout->setSpacing(6);
        ReadingStatusVLayout->setContentsMargins(11, 11, 11, 11);
        ReadingStatusVLayout->setObjectName(QStringLiteral("ReadingStatusVLayout"));
        ReadingStatus_Label = new QLabel(ReadingStatusVFrame);
        ReadingStatus_Label->setObjectName(QStringLiteral("ReadingStatus_Label"));
        ReadingStatus_Label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        ReadingStatusVLayout->addWidget(ReadingStatus_Label);

        listView_2 = new QListView(ReadingStatusVFrame);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        sizePolicy3.setHeightForWidth(listView_2->sizePolicy().hasHeightForWidth());
        listView_2->setSizePolicy(sizePolicy3);

        ReadingStatusVLayout->addWidget(listView_2);


        horizontalLayoutUp->addWidget(ReadingStatusVFrame);

        TagsVFrame = new QFrame(GridFrame_Main);
        TagsVFrame->setObjectName(QStringLiteral("TagsVFrame"));
        TagsVLayout = new QVBoxLayout(TagsVFrame);
        TagsVLayout->setSpacing(6);
        TagsVLayout->setContentsMargins(11, 11, 11, 11);
        TagsVLayout->setObjectName(QStringLiteral("TagsVLayout"));
        Tags_Label = new QLabel(TagsVFrame);
        Tags_Label->setObjectName(QStringLiteral("Tags_Label"));
        Tags_Label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        TagsVLayout->addWidget(Tags_Label);

        listView_3 = new QListView(TagsVFrame);
        listView_3->setObjectName(QStringLiteral("listView_3"));
        sizePolicy3.setHeightForWidth(listView_3->sizePolicy().hasHeightForWidth());
        listView_3->setSizePolicy(sizePolicy3);

        TagsVLayout->addWidget(listView_3);


        horizontalLayoutUp->addWidget(TagsVFrame);


        MainGridLayout->addLayout(horizontalLayoutUp, 0, 0, 1, 1);

        MassoudBooksQtVrClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MassoudBooksQtVrClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 752, 21));
        MassoudBooksQtVrClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MassoudBooksQtVrClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MassoudBooksQtVrClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MassoudBooksQtVrClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MassoudBooksQtVrClass->setStatusBar(statusBar);

        retranslateUi(MassoudBooksQtVrClass);

        QMetaObject::connectSlotsByName(MassoudBooksQtVrClass);
    } // setupUi

    void retranslateUi(QMainWindow *MassoudBooksQtVrClass)
    {
        MassoudBooksQtVrClass->setWindowTitle(QApplication::translate("MassoudBooksQtVrClass", "MassoudBooksQtVr", nullptr));
        SafeSave_Btn->setText(QApplication::translate("MassoudBooksQtVrClass", "SafeSave", nullptr));
        Add_Btn->setText(QApplication::translate("MassoudBooksQtVrClass", "Add", nullptr));
        Delete_Btn->setText(QApplication::translate("MassoudBooksQtVrClass", "Delete", nullptr));
        Books_Label->setText(QApplication::translate("MassoudBooksQtVrClass", "Books", nullptr));
#ifndef QT_NO_WHATSTHIS
        BooksSearchTextBox->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        BooksSearchTextBox->setInputMask(QString());
        BooksSearchTextBox->setPlaceholderText(QApplication::translate("MassoudBooksQtVrClass", "Search Books", nullptr));
        BookNotes_Label->setText(QApplication::translate("MassoudBooksQtVrClass", "BookNotes", nullptr));
        Catagories_Label->setText(QApplication::translate("MassoudBooksQtVrClass", "Catagories", nullptr));
        ReadingStatus_Label->setText(QApplication::translate("MassoudBooksQtVrClass", "ReadingStatus", nullptr));
        Tags_Label->setText(QApplication::translate("MassoudBooksQtVrClass", "Tags", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MassoudBooksQtVrClass: public Ui_MassoudBooksQtVrClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASSOUDBOOKSQTVR_H
