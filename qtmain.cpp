

#include <QApplication>
#include "qtvisualabcmenudialog.h"
#include "visualabccheckprerequisites.h"


int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  ribi::CheckPrerequisites();
  ribi::QtVisualAbcMenuDialog w;
  w.show();
  return a.exec();
}

