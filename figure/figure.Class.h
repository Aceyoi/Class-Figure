// Код создан Сапожниковым Ю.С.

#pragma once

#include "figure.Modul.h"

// Имя класса Прямоугольник
template <typename T>
class Rectangle {
public:
    float width,  // ширина
          height, // высота
          length; // длина

public:

    //Конструктор без параметров
    Rectangle() : length(0), width(0), height(0)  {}

    // Конструктор с параметрами
    Rectangle(float l, float w, float h) {
        setFigL(l);
        setFigW(w);
        setFigH(h);
    }

    // Абстрактные типы данных
    // Виртуальные функции  
    // Деструктор
    virtual ~Rectangle() {}

    // Конструктор копирования
    Rectangle(const Rectangle& other)
        : width(other.width), height(other.height), length(other.length) {}

    // Конструктор перемещения
    Rectangle(Rectangle&& other) noexcept
        : width(other.width), height(other.height), length(other.length) {
        other.width = 0;
        other.height = 0;
        other.length = 0;
    }


    void setFigW(float w) { // Устанавливаем ширину
        if (w > 0) {
            width = w;
        }
        else {
            cout << "Ширина должна быть положительной." << endl;
        }
    }

    void setFigH(float h) { // Устанавливаем высоту
        if (h >= 0) {
            height = h;
        }
        else {
            cout << "Высота должна быть неотрицательной." << endl;
        }
    }

    void setFigL(float l) { // Устанавливаем длину
        if (l > 0) {
            length = l;
        }
        else {
            cout << "Длина должна быть положительной." << endl;
        }
    }

    // Находим периметр прямоугольника
    float GetTwod_Perimeter() const { // const - объект не изменяется
        return (length + width) * 2;
    }

    // Находим площадь прямоугольника
    float GetTwod_Area() const {
        return length * width;
    }

    // Находим площадь параллелепипеда 
    float GetTreed_Perimeter() const {
        return 4 * (length + width + height);
    }

    // Находим объём параллелепипеда
    float GetTreed_Volume() const {
        return width * length * height;
    }

    void printclass() {
        print(Rectangle);
    }
};