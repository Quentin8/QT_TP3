#include <iostream>
#include <QApplication>
#include "MainWindow.h"


int main(int argc, char **argv) {
      QApplication app (argc, argv);
      MainWindow test;
      test.show();

      return app.exec();
}
