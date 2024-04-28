#include "myopenglwidget.h"
#include <QOpenGLShaderProgram>

MyOpenGLWidget::MyOpenGLWidget(QWidget *parent)
    : QOpenGLWidget(parent)
{
    // Vous pouvez initialiser des membres de la classe ici si nécessaire.
}

void MyOpenGLWidget::initializeGL()
{
    initializeOpenGLFunctions();

    // Définissez la couleur de fond et activez le Z-buffer.
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glEnable(GL_DEPTH_TEST);

    // Initialisation des shaders, textures, etc.
}

void MyOpenGLWidget::resizeGL(int width, int height)
{
    // Mettre à jour la vue OpenGL pour les dimensions de la fenêtre.
    glViewport(0, 0, width, height);
}

void MyOpenGLWidget::paintGL()
{
    // Nettoyer le tampon de couleur et de profondeur.
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Dessiner votre scène...
    // Vous allez dessiner votre nuage de points ici en utilisant les fonctions OpenGL.
}
