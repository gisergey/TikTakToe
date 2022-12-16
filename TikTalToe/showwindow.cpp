#include "showwindow.h"
#include "./ui_showwindow.h"

ShowWindow::ShowWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ShowWindow)
{
    ui->setupUi(this);
    mPushButtonsList= QList<QPushButton*>();

    mPushButtonsList.append(ui->m0PushButton);
    mPushButtonsList.append(ui->m1PushButton);
    mPushButtonsList.append(ui->m2PushButton);
    mPushButtonsList.append(ui->m3PushButton);
    mPushButtonsList.append(ui->m4PushButton);
    mPushButtonsList.append(ui->m5PushButton);
    mPushButtonsList.append(ui->m6PushButton);
    mPushButtonsList.append(ui->m7PushButton);
    mPushButtonsList.append(ui->m8PushButton);
    QSignalMapper* mapper=new QSignalMapper(this);
    //mapper->mapp

    connect(mapper,SIGNAL(mappedInt(int)),this,SLOT(slotMakeMove(int)));
    for(int i=0;i<9;i++){
        connect(mPushButtonsList[i],SIGNAL(clicked()),mapper,SLOT(map()));
        mapper->setMapping(mPushButtonsList[i],i);
        mPushButtonsList[i]->setText(NullZnak);
    }
    mIsGameEnd=false;
    mTextButtons=QList<QString>(9,NullZnak);
    //mDeafultPalette=QPalette();
    mWinPalette=QPalette();
    mWinPalette.setColor(QPalette::ButtonText,Qt::yellow);
    mDeafultPalette=QPalette();

    mMoveCount=0;
    mCountOWin=0;
    mCountXWin=0;

    ui->mTrunNowLabel->setText("Now: "+(mMoveCount%2==1?OZnak:XZnak));

    mWinTimer=new QTimer();
    connect(mWinTimer,SIGNAL(timeout()),this,SLOT(slotNextAnimeFrame()));
    mCountBlinks=6;
    mIsGamePaused=false;
    mWinIndexs=QList<int>(3);
}
void ShowWindow::slotNextAnimeFrame(){
    if(mCountBlinks==0){
        for(int i=0;i<3;i++){
            mPushButtonsList[mWinIndexs[i]]->setPalette(mDeafultPalette);
        }
        mWinTimer->stop();
        mIsGamePaused=false;
        return ReStart();
    }
    if(mCountBlinks%2==0){
        for(int i=0;i<3;i++){
            mPushButtonsList[mWinIndexs[i]]->setPalette(mWinPalette);
        }
    }
    else{
        for(int i=0;i<3;i++){
            mPushButtonsList[mWinIndexs[i]]->setPalette(mDeafultPalette);
        }
    }
    mCountBlinks--;
}
bool ShowWindow::CheckWin(){

    for(int i=0;i<3;i++){
        if((NullZnak!=mTextButtons[i])&&(mTextButtons[i]==mTextButtons[3+i])&&(mTextButtons[6+i]==mTextButtons[3+i])){
            Win(i,3+i,6+i);
            return true;
        }
        if((NullZnak!=mTextButtons[i*3])&&(mTextButtons[i*3]==mTextButtons[1+i*3])&&(mTextButtons[1+i*3]==mTextButtons[2+i*3])){
            Win(i*3,1+3*i,2+3*i);
            return true;
        }
    }
    if((NullZnak!=mTextButtons[4])&&(mTextButtons[0]==mTextButtons[4])&&(mTextButtons[4]==mTextButtons[8])){
        Win(0,4,8);
        return true;
    }
    if((NullZnak!=mTextButtons[4])&&(mTextButtons[6]==mTextButtons[4])&&(mTextButtons[4]==mTextButtons[2])){
        Win(2,4,6);
        return true;
    }
    return false;
}
void ShowWindow::Win(int findex,int sindex,int tindex){
    if(mTextButtons[findex]==XZnak){
        mCountXWin++;
        ui->mXLabel->setText(QString::number(mCountXWin));
    }
    else{
        mCountOWin++;
        ui->mOLabel->setText(QString::number(mCountOWin));
    }
    mCountBlinks=6;
    mIsGamePaused=true;
    mWinIndexs[0]=findex;
    mWinIndexs[1]=sindex;
    mWinIndexs[2]=tindex;
    mWinTimer->start(250);
    //ReStart();
}
void ShowWindow::slotMakeMove(int index){
    if(mTextButtons[index]==NullZnak&&!mIsGamePaused){

        mMoveCount++;
        ui->mTrunNowLabel->setText("Now: "+(mMoveCount%2==1?OZnak:XZnak));
        mPushButtonsList[index]->setText(mMoveCount%2==1?XZnak:OZnak);
        mTextButtons[index]=(mMoveCount%2==1?XZnak:OZnak);
        if(CheckWin()){
            return;

        }
        if(CheckIsFull()){
            ReStart();
        }
    }

}
void ShowWindow::ReStart(){
    for(int i=0;i<9;i++){
        mPushButtonsList[i]->setText(NullZnak);
        mTextButtons[i]=NullZnak;
    }
}
bool ShowWindow::CheckIsFull(){
    for(int i=0;i<9;i++){
        if(mTextButtons[i]==NullZnak){
            return false;
        }
    }
    return true;
}
ShowWindow::~ShowWindow()
{
    delete ui;
}

