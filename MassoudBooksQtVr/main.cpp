#include "MassoudBooksQtVr.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MassoudBooksQtVr w;
	w.show();
	return a.exec();
}
