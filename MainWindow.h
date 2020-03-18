//
// Created by Utilisateur on 18/03/2020.
//

#ifndef QT_TP3_MAINWINDOW_H
#define QT_TP3_MAINWINDOW_H

#include <QMainWindow>
#include <QProgressBar>
#include <QSlider>

class MainWindow : public QMainWindow {
Q_OBJECT
private:
      QProgressBar* progression;
      QSlider* myslider;
public:
      MainWindow(QWidget* parent = nullptr);

};


#endif //QT_TP3_MAINWINDOW_H
