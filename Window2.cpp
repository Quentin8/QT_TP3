

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
      zone->setText("Text initial");
      //QObject::connect(bt1,SIGNAL(clicked()),qApp ,SLOT(quit())); quitter
      QObject::connect(bt1,SIGNAL(clicked()),this ,SLOT(changed()));

}
void Window2::changed(){
      compteur++;
      QString chaine = "Example" + QString::number(compteur) + "\n";
      QString prec = zone->toHtml();
      zone->setText(prec + chaine);
      bt1->setText("Example");
      MainWindow* test = new MainWindow();
      test->show();


}
