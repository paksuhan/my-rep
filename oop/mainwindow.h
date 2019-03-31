#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include "io.h"
#include "process.h"

struct data
{
    const char *filename;
    struct
    {
        double alphax;
        double alphay;
        double alphaz;
    } pov;
    struct
    {
        double k;
    } mast ;
    struct
    {
        double dx;
        double dy;
        double dz;
    } per;
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_5_clicked();

    void on_filename_editingFinished();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    struct figure fig;
    void draw_figure();
    struct data dataaction;
};

#endif // MAINWINDOW_H