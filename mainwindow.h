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

    int get_data(){ return m_nIndex;}

    int get_sumdata(){ return m_nIndex += 4;}
private slots:
    void on_pushButton_clicked();

private:
    int m_nIndex = 0;
    QTextCodec *codec = QTextCodec::codecForName("GBK");//�޸�������
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
