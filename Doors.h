#ifndef INC_6JULY_CAR_DOORS_H
#define INC_6JULY_CAR_DOORS_H

class Doors {
protected:
    int doorsCount;

public:
    // Конструктор для инициализации дверей
    Doors (int numDoors);
    // Метод для отображения кол-ва дверей
    void showDoors() const;
};

#endif //INC_6JULY_CAR_DOORS_H
