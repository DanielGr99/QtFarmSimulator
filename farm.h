#ifndef _farm_
#define _farm_

class Farm
{
private:
    unsigned int maxAnimals;				//max. Anzahl an Tieren die Platz haben
    unsigned int animals;					//Anzahl der Tiere auf dem Bauernhof
    unsigned long priceSpace;
public:
    //Konstruktor
    Farm(unsigned int manimals, unsigned int nanimals, unsigned long farmSpacePrice) { maxAnimals = manimals; animals = nanimals; priceSpace=farmSpacePrice; }
    //Maximale Tiere erhöhen
    void raiseMaxAnimals(unsigned int a) { maxAnimals += a; }
    //Maximale Tiere vermindern
    void reduceMaxAnimals(unsigned int a) { maxAnimals -= a; }
    //Tiere auf der Farm
    void setAnimals(unsigned int i) { animals = i; }
    //Tiere auf der Farm anzeigen
    unsigned int getAnimals() const { return animals; }
    //Maximale Tierkapazität anzeigen
    unsigned int getMaxAnimals() const { return maxAnimals; }
    //Preis für Farmplatz anzeigen
    unsigned long getFarmSpacePrice() const{return priceSpace;}
};

#endif
