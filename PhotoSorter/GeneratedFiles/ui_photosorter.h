/********************************************************************************
** Form generated from reading UI file 'photosorter.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHOTOSORTER_H
#define UI_PHOTOSORTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QMessageBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:

	QAction *actionBrowse_DestinationDirectory;
    QAction *actionRecent_Destination;
    QAction *actionBrowse_SourceDirectory;
    QAction *actionRecent_Source;
    QAction *actionStop;
    QAction *actionClose;
    QAction *actionFast_Sort;
    QAction *actionManual_Sort;
    QAction *actionSeries_Rename;
    QAction *actionPreferences;
    QAction *actionAbout;
	
    QAction *actionToolbar;
    QWidget *centralwidget;
    QMenuBar *menubar;

    QMenu *menuManual;
    QMenu *menuSource_s;
    QMenu *menuDestination_s;
	QMenu *menuWizards;
	QMenu *menuHelp;
    QMenu *menuWindow;

    //QToolBar *toolBar;
    QStatusBar *statusBar;
	

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
		MainWindow->setMinimumWidth ( 500 );
		MainWindow->setMinimumHeight ( 400 );
		MainWindow->setMaximumWidth ( 1800 );
		MainWindow->setMaximumHeight ( 900 );
		MainWindow->resize ( 950, 650 );

        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));

		actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
		actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        
        
		actionFast_Sort = new QAction(MainWindow);
		actionFast_Sort->setObjectName(QStringLiteral("actionFast_Sort"));
        actionManual_Sort = new QAction(MainWindow);
        actionManual_Sort->setObjectName(QStringLiteral("actionManual_Sort"));
        actionSeries_Rename = new QAction(MainWindow);
        actionSeries_Rename->setObjectName(QStringLiteral("actionSeries_Rename"));
        actionBrowse_DestinationDirectory = new QAction(MainWindow);
        actionBrowse_DestinationDirectory->setObjectName(QStringLiteral("actionBrowse_DestinationDirectory"));
        actionRecent_Destination = new QAction(MainWindow);
        actionRecent_Destination->setObjectName(QStringLiteral("actionRecent_Destination"));
        actionBrowse_SourceDirectory = new QAction(MainWindow);
        actionBrowse_SourceDirectory->setObjectName(QStringLiteral("actionBrowse_SourceDirectory"));
        actionRecent_Source = new QAction(MainWindow);
        actionRecent_Source->setObjectName(QStringLiteral("actionRecent_Source"));

        actionToolbar = new QAction(MainWindow);
        actionToolbar->setObjectName(QStringLiteral("actionToolbar"));

        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);

        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 950, 21));
        menuManual = new QMenu(menubar);

        menuManual->setObjectName(QStringLiteral("menuManual"));
        menuSource_s = new QMenu(menuManual);
        menuSource_s->setObjectName(QStringLiteral("menuSource_s"));
        menuDestination_s = new QMenu(menuManual);
        menuDestination_s->setObjectName(QStringLiteral("menuDestination_s"));
        menuWizards = new QMenu(menubar);
        menuWizards->setObjectName(QStringLiteral("menuWizards"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName(QStringLiteral("menuWindow"));
        MainWindow->setMenuBar(menubar);
        //toolBar = new QToolBar(MainWindow);
        //toolBar->setObjectName(QStringLiteral("toolBar"));
        //MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

		setupActions ( MainWindow );

        menubar->addAction(menuManual->menuAction());
        menubar->addAction(menuWizards->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menuHelp->menuAction());
		menuManual->addAction ( menuSource_s->menuAction () );
        menuManual->addAction(menuDestination_s->menuAction());
        menuManual->addSeparator();
        menuManual->addAction(actionStop);
        menuManual->addSeparator();
        menuManual->addAction(actionClose);
        menuSource_s->addAction(actionBrowse_SourceDirectory);
        menuSource_s->addAction(actionRecent_Source);
        menuDestination_s->addAction(actionBrowse_DestinationDirectory);
        menuDestination_s->addAction(actionRecent_Destination);
        menuWizards->addAction(actionFast_Sort);
        menuWizards->addAction(actionManual_Sort);
        menuWizards->addAction(actionSeries_Rename);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionPreferences);
        menuWindow->addAction(actionToolbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        
		actionBrowse_DestinationDirectory->setText(QApplication::translate("MainWindow", "Browse...", 0));
        actionRecent_Destination->setText(QApplication::translate("MainWindow", "Recent...", 0));
        actionBrowse_SourceDirectory->setText(QApplication::translate("MainWindow", "Browse...", 0));
        actionRecent_Source->setText(QApplication::translate("MainWindow", "Recent...", 0));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", 0));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0));

        actionFast_Sort->setText(QApplication::translate("MainWindow", "Fast Sort", 0));
        actionManual_Sort->setText(QApplication::translate("MainWindow", "Step-Through Sort", 0));
        actionSeries_Rename->setText(QApplication::translate("MainWindow", "Series Rename", 0));

		actionPreferences->setText(QApplication::translate("MainWindow", "Preferences", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));

        actionToolbar->setText(QApplication::translate("MainWindow", "Toolbar", 0));

        menuManual->setTitle(QApplication::translate("MainWindow", "Manual", 0));
        menuSource_s->setTitle(QApplication::translate("MainWindow", "Source(s)", 0));
        menuDestination_s->setTitle(QApplication::translate("MainWindow", "Destination(s)", 0));

        menuWizards->setTitle(QApplication::translate("MainWindow", "Wizards", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));

        menuWindow->setTitle(QApplication::translate("MainWindow", "Window", 0));

        //toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));

    } // retranslateUi


	//TODO: Figure out how actionName, menuName, and addAction all relate and how to setup the 
	//		menu options before having the Ui fully setup and displayed.

	void setupActions (QMainWindow *MainWindow)
	{

	actionAbout->setStatusTip ( "More Information about this Program" );
	actionPreferences->setStatusTip ( /*tr (*/"Edit Program Settings and Preferences" );//) );

	//Don't work yet.. idky?
	//menuSource_s->setStatusTip ( "Source Directories" );
	//menuManual->setStatusTip ( "Destination Directories" );
	actionBrowse_DestinationDirectory->setStatusTip ( "Set the desired destination directories for files" );
		actionBrowse_DestinationDirectory->setShortcut ( QKeySequence(Qt::CTRL + Qt::Key_O + Qt::Key_D ) );
		//TODO: Shortcuts are not being displayed properly
		actionRecent_Destination->setStatusTip ( "Recently opened destination directories" );
	actionBrowse_SourceDirectory->setStatusTip ( "Set the desired source directories for files" );
	actionBrowse_SourceDirectory->setShortcut ( QKeySequence ( Qt::CTRL + Qt::Key_O + Qt::Key_S ) );
		actionRecent_Source->setStatusTip ( "Recently opened source directories" );
	actionStop->setStatusTip ( "Stop currently active sort" );
		actionStop->setShortcut ( QKeySequence(Qt::Key_Escape) );
	actionClose->setStatusTip ( "Another way to exit the program!" );
	//actionClose->setShortcut ( QKeySequence ("Alt+F4","Close"));
	
	actionFast_Sort->setStatusTip ( "Moves selected files to selected directories" );
	actionManual_Sort->setStatusTip ( "Manually move and name files with help" );
	actionSeries_Rename->setStatusTip ( "Select a name and all selected files with be named as such with #'s" );


	}

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHOTOSORTER_H
