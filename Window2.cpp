//
// Created by Utilisateur on 18/03/2020.
//

#include "Window2.h"
using namespace std;
Window2::Window2(QMainWindow *fenetre) {
      QWidget* parent = new QWidget();
      this->setWindowTitle("IHM");
      QVBoxLayout* horizontal = new QVBoxLayout();
      horizontal->addWidget(bt1);
      horizontal->addWidget(zone);
      parent->setLayout(horizontal);
      this->setCentralWidget(parent);
      //QObject::connect(bt1,SIGNAL(clicked()),qApp ,SLOT(quit()));
      QObject::connect(bt1,SIGNAL(clicked()),this ,SLOT(changed()));

}
void Window2::changed(){
      compteur++;
      QString chaine = "Example" + QString::number(compteur) + "\n";
      zone->setText(chaine);
      bt1->setText("Example");
      MainWindow* test = new MainWindow();//declarer en dynamique sinon PB
      test->show();


}
