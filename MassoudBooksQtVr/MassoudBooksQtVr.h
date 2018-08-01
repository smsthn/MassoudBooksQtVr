#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MassoudBooksQtVr.h"

class MassoudBooksQtVr : public QMainWindow
{
	Q_OBJECT

public:
	MassoudBooksQtVr(QWidget *parent = Q_NULLPTR);

private:
	Ui::MassoudBooksQtVrClass ui;
};
