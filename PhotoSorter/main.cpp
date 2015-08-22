#include "photosorter.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PhotoSorter w;
	w.show();
	return a.exec();
}
