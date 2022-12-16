#ifndef SHOWWINDOW_H
#define SHOWWINDOW_H

#include <QMainWindow>
#include <QSignalMapper>
#include <QPushButton>
#include <QString>
#include <QList>
#include <QTimer>
#include <QPalette>
QT_BEGIN_NAMESPACE
namespace Ui { class ShowWindow; }
QT_END_NAMESPACE

class ShowWindow : public QMainWindow
{
    Q_OBJECT

public:
    ShowWindow(QWidget *parent = nullptr);
    ~ShowWindow();
public slots:
    void slotMakeMove(int);
    void slotNextAnimeFrame();
public:
    void Win(int mFirstIndex,int mSecondIndex,int mThirdIndex);
    QString NullZnak="._.";
    QString XZnak="X-X";
    QString OZnak="O-O";
    bool CheckWin();
private:
    void ReStart();
    bool CheckIsFull();
    bool mIsGamePaused;
    int mCountBlinks;
    int mCountXWin;
    int mCountOWin;
    bool mIsGameEnd;
    int mMoveCount;
    QList<int> mWinIndexs;
    QTimer* mWinTimer;
    QList<QString> mTextButtons;
    QList<QPushButton*> mPushButtonsList;
    Ui::ShowWindow *ui;
    QPalette mDeafultPalette;
    QPalette mWinPalette;
};
#endif // SHOWWINDOW_H
