//
// Created by Utilisateur on 18/03/2020.
//

#ifndef QT_TP3_WINDOW2_H
#define QT_TP3_WINDOW2_H

#include <QMainWindow>
#include <QPushButton>
#include <QHBoxLayout>
#include <QApplication>
#include <string>
#include <iostream>
#include "MainWindow.h"
#include <QTextEdit>

class Window2 : public QMainWindow {
Q_OBJECT
private:
      QPushButton* bt1 = new QPushButton("fils");
      int compteur =0;
      QTextEdit* zone = new QTextEdit();
public:
    Window2(QMainWindow* fenetre = nullptr);
public slots :
    void changed();

};


#endif //QT_TP3_WINDOW2_H
