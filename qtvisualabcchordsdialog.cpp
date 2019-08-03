



#include "qtvisualabcchordsdialog.h"
#include "ui_qtvisualabcchordsdialog.h"


ribi::QtVisualAbcChordsDialog::QtVisualAbcChordsDialog(QWidget *parent)
  : QtHideAndShowDialog(parent),
    ui(new Ui::QtVisualAbcChordsDialog)
{
    ui->setupUi(this);
}

ribi::QtVisualAbcChordsDialog::~QtVisualAbcChordsDialog() noexcept
{
    delete ui;
}
