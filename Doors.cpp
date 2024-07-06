#include "Doors.h"
#include <iostream>
using namespace std;

// Устанавливаем кол-во дверей
Doors::Doors(int numDoors) : doorsCount(numDoors) {}

void Doors::showDoors() const
{
    cout << "Количество дверей автомобиля: " << doorsCount << endl;
}