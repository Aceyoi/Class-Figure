// Код создан Сапожниковым Ю.С.

#pragma once

#include "figure.Modul.h" 

// Имя класса Прямоугольник
template <typename T>
class RectangleOrParallelepiped {
private:
    float width,  // ширина
          height, // высота                   
          length; // длина

public:

    //Конструктор без параметров
    RectangleOrParallelepiped() : length(0), width(0), height(0)  {}

    // Конструктор с параметрами
    RectangleOrParallelepiped(float l, float w, float h) {
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
    void setFigW(float w) {
        if (w > 0) {
            width = w;
        }
        else {
            cout << "Ширина должна быть положительной." << endl;
        }
    }

    // Метод заполнения высоты
    void setFigH(float h) { 
        if (h >= 0) {
            height = h;
        }
        else {
            cout << "Высота должна быть неотрицательной." << endl;
        }
    }

    // Метод заполнения длины
    void setFigL(float l) { 
        if (l > 0) {
            length = l;
        }
        else {
            cout << "Длина должна быть положительной." << endl;
        }
    }

    // Метод вывода ширины
    float Getwidth() const {
        return width;
    }

    // Метод вывода высоты
    float Getheight() const {
        return height;
    }

    // Метод вывода длины
    float Getlength() const {
        return length;
    }

    // Метод нахождения периметра прямоугольника
    float GetTwod_Perimeter() const { // const - объект не изменяется
        return (length + width) * 2;
    }

    // Метод нахождения площади прямоугольника
    float GetTwod_Area() const {
        return length * width;
    }

    // Метод нахождения площади параллелепипеда 
    float GetTreed_Perimeter() const {
        return 4 * (length + width + height);
    }

    // Метод нахождения объёма параллелепипеда
    float GetTreed_Volume() const {
        return width * length * height;
    }

    // Метод вывода ответа на экран
    void printclass() {
        Print(this);
    }

    // Метод записи ответа в файл
    void SaveFileSolutionClass() {
        SaveFileSolution(this);
    }

    // Метод записи элементов класса в файл
    void SaveFileElementsClass() {
        SaveFileElements(this);
    }
};