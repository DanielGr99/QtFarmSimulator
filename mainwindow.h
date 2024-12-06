#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "animal.h"
#include "farm.h"
#include "money.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    //Elemente der Klassen implementieren
    Farm farmOne;
    Animal cow;
    Animal sheep;
    Animal chicken;
    Money bank;
    int week = 1;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void buttonBuyCowClicked();
    void buttonSellCowClicked();
    void buttonBuySheepClicked();
    void buttonSellSheepClicked();
    void buttonBuyChickenClicked();
    void buttonSellChickenClicked();
    void buttonBuyFarmspaceClicked();
    void buttonSkipWeekClicked();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
