#include "photosorter.h"

PhotoSorter::PhotoSorter(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	createStatusBar();
	ui.setupActions(this);//moved to the inside of setupUi, method body is in ui_photosorter.h

}

PhotoSorter::~PhotoSorter()
{
	
}

void PhotoSorter::about ()
	{
	QMessageBox::about ( this, tr("About PhotoSorter"), 
						 tr ("<b>PhotoSorter</b> was coded by Nicholas Johnson. The purpose "
						  "of the program is to assist in sorting and renaming massive image "
						  "libraries.<br>Works with any computer that can run Qt5.5."));
	}

void PhotoSorter::closeEvent ( QCloseEvent *event )
	{
		
	}

QUrl PhotoSorter::open ()//I think this shouldn't return, but send the QUrl object value/string to where I am displaying them
	{
	return QFileDialog::getExistingDirectoryUrl ();
	}

void PhotoSorter::ManualSortWizard ()
	{

	}

void PhotoSorter::FastSortWizard ()
	{

	}

void PhotoSorter::SeriesRenameWizard ()
	{

	}