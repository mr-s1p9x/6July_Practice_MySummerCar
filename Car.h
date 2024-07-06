#ifndef INC_6JULY_CAR_CAR_H
#define INC_6JULY_CAR_CAR_H

#include "Wheels.h"
#include "Engine.h"
#include "Doors.h"

// Класс Car наследует функциональности Wheels, Engine, Doors
class Car : public Wheels, public Engine, public Doors
{
public:
    // Конструктор для инициализации всех компонентов
    Car(int wheels, double power, int doors);
    // Метод для вывода всех объектов машины
    void showCarDetails() const;
};

#endif //INC_6JULY_CAR_CAR_H
