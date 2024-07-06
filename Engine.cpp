#include "Engine.h"
#include <iostream>
using namespace std;

// Конструктор для инициализации мощности
Engine::Engine(double hp) : horsepower(hp) {}

// Метод для отображения мощности
void Engine::showPower() const
{
    cout << "Мощность двигателя: " << horsepower << " (hp)" << endl;
}