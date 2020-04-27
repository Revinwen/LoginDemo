#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextCodec>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    int get_sum(int x,int y){ return x+y;}

    void set_data(int nData){ m_nIndex = nData;}

private slots:
    void on_pushButton_clicked();

private:
    int m_nIndex = 0;
    QTextCodec *codec = QTextCodec::codecForName("GBK");//修改这两行
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
