//
// Created by Utilisateur on 18/03/2020.
//

#include <QtWidgets/QVBoxLayout>
#include "MainWindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) {
      this->setWindowTitle("IHM");
      parent = new QWidget();
      QVBoxLayout* vertical = new QVBoxLayout();
      progression = new QProgressBar();
      myslider = new QSlider(Qt::Horizontal);
      myslider->setTickInterval(1);
      vertical->addWidget(progression);
      vertical->addWidget(myslider);
      parent->setLayout(vertical);
      this->setCentralWidget(parent);
      QObject::connect(myslider,SIGNAL(valueChanged(int)),progression,SLOT(setValue(int)));

}




