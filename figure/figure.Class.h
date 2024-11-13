// Код создан Сапожниковым Ю.С.

#pragma once

#include "figure.Modul.h" 

// Имя класса Прямоугольник
template <typename T>
class RectangleOrParallelepiped {
private:
    double  width,  // ширина
            height, // высота                   
            length; // длина

public:

    //Конструктор без параметров
    RectangleOrParallelepiped() : length(0), width(0), height(0)  {}

    // Конструктор с параметрами
    RectangleOrParallelepiped(double  l, double  w, double  h) {
        setFigL(l);
        setFigW(w);
        setFigH(h);
    }

    // Абстрактные типы данных
    // Виртуальные функции  
    // Деструктор
    virtual ~RectangleOrParallelepiped() {}

    // Конструктор копирования
    RectangleOrParallelepiped(const RectangleOrParallelepiped& other)
        : width(other.width), height(other.height), length(other.length) {}

    // Конструктор перемещения
    RectangleOrParallelepiped(RectangleOrParallelepiped&& other) noexcept
        : width(other.width), height(other.height), length(other.length) {
        other.width = 0;
        other.height = 0;
        other.length = 0;
    }

    // Метод заполнения ширины
    void setFigW(double  w) {
        if (w > 0) {
            width = w;
        }
        else {
            cout << "Ширина должна быть положительной." << endl;
        }
    }

    // Метод заполнения высоты
    void setFigH(double  h) {
        if (h >= 0) {
            height = h;
        }
        else {
            cout << "Высота должна быть неотрицательной." << endl;
        }
    }

    // Метод заполнения длины
    void setFigL(double  l) {
        if (l > 0) {
            length = l;
        }
        else {
            cout << "Длина должна быть положительной." << endl;
        }
    }

    // Метод вывода ширины
    double  Getwidth() const {
        return width;
    }

    // Метод вывода высоты
    double  Getheight() const {
        return height;
    }

    // Метод вывода длины
    double  Getlength() const {
        return length;
    }

    // Метод нахождения периметра прямоугольника
    double  GetTwod_Perimeter() const { // const - объект не изменяется
        return (length + width) * 2;
    }

    // Метод нахождения площади прямоугольника
    double  GetTwod_Area() const {
        return length * width;
    }

    // Метод нахождения площади параллелепипеда 
    double  GetTreed_Perimeter() const {
        return 4 * (length + width + height);
    }

    // Метод нахождения объёма параллелепипеда
    double  GetTreed_Volume() const {
        return (width * length * height);
    }
};