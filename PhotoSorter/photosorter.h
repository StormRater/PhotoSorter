#ifndef PHOTOSORTER_H
#define PHOTOSORTER_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/qfiledialog.h>
#include "ui_photosorter.h"

class PhotoSorter : public QMainWindow
{
	Q_OBJECT

public:

	PhotoSorter(QWidget *parent = 0);
	~PhotoSorter();

	
	//protected:
	void closeEvent ( QCloseEvent *event ) Q_DECL_OVERRIDE;

private slots:
	QUrl open ();
	void about ();
	void ManualSortWizard ();
	void FastSortWizard ();
	void SeriesRenameWizard ();


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
