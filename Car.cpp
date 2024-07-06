#include "Car.h"
#include <iostream>
using namespace std;

// Конструктор инициализирует все базовые классы
Car::Car(int wheels, double power, int doors)
: Wheels(wheels), Engine(power), Doors(doors){}

// Метод для отображения всех объектов
void Car::showCarDetails() const
{
    showWheels();
    showPower();
    showDoors();
}