#include "Wheels.h"
#include <iostream>
using namespace std;
// Реализуем конструктор
Wheels::Wheels(int numWheels) : count(numWheels) {}

// Метод, который отображает кол-во колес, const не позволяет модифициров. объект
void Wheels::showWheels() const
{
    cout << "Количество колес: " << count << endl;
}