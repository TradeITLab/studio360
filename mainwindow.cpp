#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>
#include <vector>
#include <QVector3D>  // Qt's 3D vector class

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionOpen, &QAction::triggered, this, &MainWindow::onActionOpenTriggered);

    ui->openGLWidget->setMouseTracking(true); // Pour recevoir des événements de déplacement de souris

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::onActionOpenTriggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Point Cloud File"), "",
                                                    tr("Point Cloud Files (*.ply *.obj);;All Files (*)"));

    if (fileName.isEmpty())
        return;

    qDebug() << "Selected file:" << fileName;

}

