#include <QApplication>
#include "MainWindow.h"
#include "Window2.h"

int main(int argc, char **argv) {
      QApplication app (argc, argv);
      MainWindow test;
      test.show();
      Window2 test2;
      test2.show();

      return app.exec();
}
