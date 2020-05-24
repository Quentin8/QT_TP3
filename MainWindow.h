

#ifndef QT_TP3_MAINWINDOW_H
#define QT_TP3_MAINWINDOW_H

#include <QMainWindow>
#include <QProgressBar>
#include <QSlider>
#include <QTextEdit>

class MainWindow : public QMainWindow {
Q_OBJECT
private:
      QProgressBar* progression;
      QSlider* myslider;
public:
      MainWindow(QWidget* parent = nullptr);

};


#endif //QT_TP3_MAINWINDOW_H
