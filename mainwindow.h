#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>   // Ajout pour gérer les événements de la souris
#include <QWheelEvent>   // Ajout pour gérer les événements de la roulette de la souris
#include <QPoint>        // Ajout pour QPoint

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:

private slots:
    void onActionOpenTriggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
