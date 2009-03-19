/*
    This file is part of Cute Chess.

    Cute Chess is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Cute Chess is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Cute Chess.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QMenu;
class QAction;
class QTextEdit;
class ChessboardView;
class ChessboardModel;
class QProcess;
class EngineConfigurationModel;
class ChessClock;

/**
 * MainWindow
*/
class MainWindow : public QMainWindow
{
	Q_OBJECT

	public:
		MainWindow();

	private slots:
		void newGame();
		void printGame();
		void manageEngines();
		void openConfigurationFile();

	private:
		void createActions();
		void createMenus();
		void createToolBars();
		void createDockWindows();
		void readSettings();

		QMenu* m_gameMenu;
		QMenu* m_viewMenu;
		QMenu* m_enginesMenu;
		QMenu* m_helpMenu;
		QMenu* m_debugMenu;

		ChessboardView* m_chessboardView;
		ChessboardModel* m_boardModel;
		ChessClock* m_chessClock[2];

		EngineConfigurationModel* m_engineConfigurations;

		QAction* m_quitGameAct;
		QAction* m_printGameAct;
		QAction* m_newGameAct;
		QAction* m_manageEnginesAct;
		QAction* m_openConfigurationFileAct;

		QTextEdit* m_engineDebugTextEdit;

};

#endif // MAINWINDOW_H
