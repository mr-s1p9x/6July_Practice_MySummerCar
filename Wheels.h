#ifndef INC_6JULY_CAR_WHEELS_H
#define INC_6JULY_CAR_WHEELS_H

class Wheels {
protected:
    int count; // кол-во колес, благодаря protected позволяет получить доступ из наследуемых классов

public:
    // Конструктор для инициализации кол-ва колес
    Wheels(int numWheels);
    // Метод для отображения информации о колесах
    void showWheels() const;
};

#endif //INC_6JULY_CAR_WHEELS_H
