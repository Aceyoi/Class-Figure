#pragma once
// Код создан Сапожниковым Ю.С.
// Используемые библиотеки

#include <iostream>
#include <fstream>
#include "figure.Class.h"

using namespace std;

// Вывод на экран
template <typename T>
void print(T*  fig) {
    if (fig->height == 0) {  // проверка высоты
        cout << endl << "У прямоугольника найден" << endl;
        cout << "Периметр равный: " << fig->GetTwod_Perimeter() << endl;
        cout << "Площадь равная: " << fig->GetTwod_Area() << endl;
    }
    else {
        cout << endl << "У параллелепипеда найден" << endl;
        cout << "Периметр равный: " << fig->GetTreed_Perimeter() << endl;
        cout << "Объем равынй: " << fig->GetTreed_Volume() << endl;
    }
}

// Вывод в файл
template <typename T>
void VText(T* fig) {
    ofstream out;  // поток для записи
    out.open("Text.txt"); // Открываем файл для записи
    if (!out.is_open()) {
        throw runtime_error("Ошибка открытия файла");
    }
        if (fig->height == 0) {  // проверка высоты
            out << fig->GetTwod_Perimeter() << " " << fig->GetTwod_Area() << endl;
        }
        else {
            out << fig->GetTreed_Perimeter() << " " << fig->GetTreed_Volume() << endl;
        }
    out.close();
    cout << endl << "Файл был записан" << endl;
}

