#ifndef PHOTOSORTER_H
#define PHOTOSORTER_H

#include <QtWidgets/QMainWindow>
#include "ui_photosorter.h"

class PhotoSorter : public QMainWindow
{
	Q_OBJECT

public:

	PhotoSorter(QWidget *parent = 0);
	~PhotoSorter();

	
	//protected:
	//void closeEvent ( QCloseEvent *event ) Q_DECL_OVERRIDE;

	private slots:
	void open ();
	void about ();

private:
	Ui::MainWindow ui;
	
	void createStatusBar ();
};

inline void PhotoSorter::createStatusBar ()
{
	statusBar ()->showMessage ( tr ( "Ready" ) );
}

//inline void PhotoSorter::closeEvent ( QCloseEvent *event )
//{
//
//}



#endif // PHOTOSORTER_H 
