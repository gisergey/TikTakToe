#ifndef SHOWWINDOW_H
#define SHOWWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ShowWindow; }
QT_END_NAMESPACE

class ShowWindow : public QMainWindow
{
    Q_OBJECT

public:
    ShowWindow(QWidget *parent = nullptr);
    ~ShowWindow();

private:
    Ui::ShowWindow *ui;
};
#endif // SHOWWINDOW_H
