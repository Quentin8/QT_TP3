//
// Created by Utilisateur on 18/03/2020.
//

#include "Window2.h"
using namespace std;
Window2::Window2(QMainWindow *fenetre) {
      QWidget* parent = new QWidget();
      this->setWindowTitle("IHM");
      QHBoxLayout* horizontal = new QHBoxLayout();
      horizontal->addWidget(bt1);
      parent->setLayout(horizontal);
      this->setCentralWidget(parent);
      //QObject::connect(bt1,SIGNAL(clicked()),qApp ,SLOT(quit()));
      QObject::connect(bt1,SIGNAL(clicked()),this ,SLOT(changed()));

}
void Window2::changed(){
      compteur++;
      QString chaine = "Example" + QString::number(compteur) + "\n";
      bt1->setText(chaine);
      cout << "Example" << compteur <<endl;

}
