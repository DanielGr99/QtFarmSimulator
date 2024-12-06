#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),farmOne(100, 0,100000),cow(0, 7, 2, 10000,8000),sheep(0, 5, 2,8000,5000),chicken(0, 3, 3,500,300),bank(100000)
{
    ui->setupUi(this);

    //Buttons mit den Slots verbinden
    connect(ui->buttonBuyCow, &QPushButton::clicked, this, &MainWindow::buttonBuyCowClicked);
    connect(ui->buttonSellCow, &QPushButton::clicked, this, &MainWindow::buttonSellCowClicked);
    connect(ui->buttonBuySheep, &QPushButton::clicked, this, &MainWindow::buttonBuySheepClicked);
    connect(ui->buttonSellSheep, &QPushButton::clicked, this, &MainWindow::buttonSellSheepClicked);
    connect(ui->buttonBuyChicken, &QPushButton::clicked, this, &MainWindow::buttonBuyChickenClicked);
    connect(ui->buttonSellChicken, &QPushButton::clicked, this, &MainWindow::buttonSellChickenClicked);
    connect(ui->buttonBuyFarmspace, &QPushButton::clicked, this, &MainWindow::buttonBuyFarmspaceClicked);
    connect(ui->buttonSkipWeek, &QPushButton::clicked, this, &MainWindow::buttonSkipWeekClicked);
    //alle Label mit den Werten initialisieren
    ui->labelMoney2->setText(QString::number(bank.getMoney()));
    ui->labelAnimals2->setText(QString::number(farmOne.getAnimals())+" / "+QString::number(farmOne.getMaxAnimals()));
    ui->labelWeek2->setText(QString::number(week));
    ui->labelCow2->setText(QString::number(cow.getAnimal()));
    ui->labelSheep2->setText(QString::number(sheep.getAnimal()));
    ui->labelChicken2->setText(QString::number(chicken.getAnimal()));
    ui->labelCowPrice2->setText(QString::number(cow.getPriceBuy()));
    ui->labelSheepPrice2->setText(QString::number(sheep.getPriceBuy()));
    ui->labelChickenPrice2->setText(QString::number(chicken.getPriceBuy()));
    ui->labelSellCow2->setText(QString::number(cow.getPriceSell()));
    ui->labelSellSheep2->setText(QString::number(sheep.getPriceSell()));
    ui->labelSellChicken2->setText(QString::number(chicken.getPriceSell()));
    ui->labelFarmPrice2->setText(QString::number(farmOne.getFarmSpacePrice()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buttonBuyCowClicked()
{
    qDebug()<<"buttonBuyCowClicked";
    int spinBoxBuyCow = ui->spinBoxBuyCow->value();
   if (bank.getMoney() >= spinBoxBuyCow * cow.getPriceBuy()&&farmOne.getMaxAnimals() >= (farmOne.getAnimals()+spinBoxBuyCow))
    {
        cow.setnAnimal(spinBoxBuyCow);
        bank.reduceMoney(cow.getPriceBuy() * spinBoxBuyCow);
        farmOne.setAnimals(cow.getAnimal() + sheep.getAnimal() + chicken.getAnimal());
        ui->labelMoney2->setText(QString::number(bank.getMoney()));
        ui->labelAnimals2->setText(QString::number(farmOne.getAnimals())+" / "+QString::number(farmOne.getMaxAnimals()));
        ui->labelCow2->setText(QString::number(cow.getAnimal()));
        ui->spinBoxBuyCow->setValue(0);
    }

}
void MainWindow::buttonSellCowClicked()
{
    qDebug()<<"buttonSellCowClicked";
    int spinBoxSellCow = ui->spinBoxSellCow->value();
    if (cow.getAnimal()>=spinBoxSellCow)
    {
        cow.setnAnimal(-spinBoxSellCow);
        bank.raiseMoney(cow.getPriceSell() * spinBoxSellCow);
        farmOne.setAnimals(cow.getAnimal() + sheep.getAnimal() + chicken.getAnimal());
        ui->labelMoney2->setText(QString::number(bank.getMoney()));
        ui->labelAnimals2->setText(QString::number(farmOne.getAnimals())+" / "+QString::number(farmOne.getMaxAnimals()));
        ui->labelCow2->setText(QString::number(cow.getAnimal()));
        ui->spinBoxSellCow->setValue(0);
    }
}
void MainWindow::buttonBuySheepClicked()
{
qDebug()<<"buttonBuySheepClicked";
    int spinBoxBuySheep = ui->spinBoxBuySheep->value();
    if (bank.getMoney() >= spinBoxBuySheep * sheep.getPriceBuy()&&farmOne.getMaxAnimals() >= (farmOne.getAnimals()+spinBoxBuySheep))
    {
        sheep.setnAnimal(spinBoxBuySheep);
        bank.reduceMoney(sheep.getPriceBuy() * spinBoxBuySheep);
        farmOne.setAnimals(cow.getAnimal() + sheep.getAnimal() + chicken.getAnimal());
        ui->labelMoney2->setText(QString::number(bank.getMoney()));
        ui->labelAnimals2->setText(QString::number(farmOne.getAnimals())+" / "+QString::number(farmOne.getMaxAnimals()));
        ui->labelSheep2->setText(QString::number(sheep.getAnimal()));
        ui->spinBoxBuySheep->setValue(0);
    }

}
void MainWindow::buttonSellSheepClicked()
{
qDebug()<<"buttonSellSheepClicked";
    int spinBoxSellSheep = ui->spinBoxSellSheep->value();
    if (sheep.getAnimal()>=spinBoxSellSheep)
    {
        sheep.setnAnimal(-spinBoxSellSheep);
        bank.raiseMoney(sheep.getPriceSell() * spinBoxSellSheep);
        farmOne.setAnimals(cow.getAnimal() + sheep.getAnimal() + chicken.getAnimal());
        ui->labelMoney2->setText(QString::number(bank.getMoney()));
        ui->labelAnimals2->setText(QString::number(farmOne.getAnimals())+" / "+QString::number(farmOne.getMaxAnimals()));
        ui->labelSheep2->setText(QString::number(sheep.getAnimal()));
        ui->spinBoxSellSheep->setValue(0);
    }
}
void MainWindow::buttonBuyChickenClicked()
{
qDebug()<<"buttonBuyChickenClicked";
    int spinBoxBuyChicken = ui->spinBoxBuyChicken->value();
    if (bank.getMoney() >= spinBoxBuyChicken * chicken.getPriceBuy()&&farmOne.getMaxAnimals() >= (farmOne.getAnimals()+spinBoxBuyChicken))
    {
        chicken.setnAnimal(spinBoxBuyChicken);
        bank.reduceMoney(chicken.getPriceBuy() * spinBoxBuyChicken);
        farmOne.setAnimals(cow.getAnimal() + sheep.getAnimal() + chicken.getAnimal());
        ui->labelMoney2->setText(QString::number(bank.getMoney()));
        ui->labelAnimals2->setText(QString::number(farmOne.getAnimals())+" / "+QString::number(farmOne.getMaxAnimals()));
        ui->labelChicken2->setText(QString::number(chicken.getAnimal()));
        ui->spinBoxBuyChicken->setValue(0);
    }

}
void MainWindow::buttonSellChickenClicked()
{
qDebug()<<"buttonSellChickenClicked";
    int spinBoxSellChicken = ui->spinBoxSellChicken->value();
    if (chicken.getAnimal()>=spinBoxSellChicken)
    {
        chicken.setnAnimal(-spinBoxSellChicken);
        bank.raiseMoney(chicken.getPriceSell() * spinBoxSellChicken);
        farmOne.setAnimals(cow.getAnimal() + sheep.getAnimal() + chicken.getAnimal());
        ui->labelMoney2->setText(QString::number(bank.getMoney()));
        ui->labelAnimals2->setText(QString::number(farmOne.getAnimals())+" / "+QString::number(farmOne.getMaxAnimals()));
        ui->labelChicken2->setText(QString::number(chicken.getAnimal()));
        ui->spinBoxSellChicken->setValue(0);
    }
}
void MainWindow::buttonBuyFarmspaceClicked()
{
qDebug()<<"buttonBuyFarmspaceClicked";
    if (bank.getMoney() >= 100000)
    {
        farmOne.raiseMaxAnimals(10);
        bank.reduceMoney(100000);
        ui->labelMoney2->setText(QString::number(bank.getMoney()));
        ui->labelAnimals2->setText(QString::number(farmOne.getAnimals())+" / "+QString::number(farmOne.getMaxAnimals()));
    }
}
void MainWindow::buttonSkipWeekClicked()
{
qDebug()<<"buttonSkipWeekClicked";

farmOne.setAnimals(cow.getAnimal() + sheep.getAnimal() + chicken.getAnimal());
    cow.reproduce(farmOne.getAnimals(),farmOne.getMaxAnimals());
farmOne.setAnimals(cow.getAnimal() + sheep.getAnimal() + chicken.getAnimal());
    sheep.reproduce(farmOne.getAnimals(),farmOne.getMaxAnimals());
farmOne.setAnimals(cow.getAnimal() + sheep.getAnimal() + chicken.getAnimal());
    chicken.reproduce(farmOne.getAnimals(),farmOne.getMaxAnimals());
farmOne.setAnimals(cow.getAnimal() + sheep.getAnimal() + chicken.getAnimal());
    cow.death();
    sheep.death();
    chicken.death();
    ++week;
    ui->labelAnimals2->setText(QString::number(farmOne.getAnimals())+" / "+QString::number(farmOne.getMaxAnimals()));
    ui->labelWeek2->setText(QString::number(week));
    ui->labelCow2->setText(QString::number(cow.getAnimal()));
    ui->labelSheep2->setText(QString::number(sheep.getAnimal()));
    ui->labelChicken2->setText(QString::number(chicken.getAnimal()));
}
