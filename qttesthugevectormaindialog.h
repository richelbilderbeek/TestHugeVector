#ifndef QTTESTHUGEVECTORMAINDIALOG
#define QTTESTHUGEVECTORMAINDIALOG

#include <cln/cln.h>

#include "qthideandshowdialog.h"

namespace Ui {
  class QtTestHugeVectorMainDialog;
}

namespace ribi {

class QtTestHugeVectorMainDialog : public QtHideAndShowDialog
{
    Q_OBJECT

public:
    explicit QtTestHugeVectorMainDialog(QWidget *parent = 0);
    QtTestHugeVectorMainDialog(const QtTestHugeVectorMainDialog&) = delete;
    QtTestHugeVectorMainDialog& operator=(const QtTestHugeVectorMainDialog&) = delete;
    ~QtTestHugeVectorMainDialog();

private:
    Ui::QtTestHugeVectorMainDialog *ui;
};

} //~namespace ribi

#endif // QTTESTHUGEVECTORMAINDIALOG
