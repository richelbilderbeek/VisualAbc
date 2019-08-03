



#include "about.h"
#include "qtaboutdialog.h"
#include "qtvisualabcmaindialog.h"
#include "qtvisualabcmenudialog.h"
#include "ui_qtvisualabcmenudialog.h"
#include "visualabcmenudialog.h"


ribi::QtVisualAbcMenuDialog::QtVisualAbcMenuDialog(QWidget *parent)
  : QtHideAndShowDialog(parent),
    ui(new Ui::QtVisualAbcMenuDialog)
{
  ui->setupUi(this);
}

ribi::QtVisualAbcMenuDialog::~QtVisualAbcMenuDialog() noexcept
{
  delete ui;
}

void ribi::QtVisualAbcMenuDialog::on_button_start_clicked()
{
  QtVisualAbcMainDialog d;
  this->ShowChild(&d);
}

void ribi::QtVisualAbcMenuDialog::on_button_about_clicked()
{
  About a = VisualAbcMenuDialog().GetAbout();
  QtAboutDialog d(a);
  this->ShowChild(&d);
}

void ribi::QtVisualAbcMenuDialog::on_button_quit_clicked()
{
  close();
}
