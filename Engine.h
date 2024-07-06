#ifndef INC_6JULY_CAR_ENGINE_H
#define INC_6JULY_CAR_ENGINE_H

class Engine {
protected:
    double horsepower; // Мощность двигателя

public:
    // Конструктор с параметром мощности
    Engine(double hp);
    // Метод для отображения мощности двигателя
    void showPower() const;
};

#endif //INC_6JULY_CAR_ENGINE_H
