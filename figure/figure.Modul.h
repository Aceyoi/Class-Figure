#pragma once
// Код создан Сапожниковым Ю.С.
// Используемые библиотеки

#include <iostream>
#include <fstream>
#include "figure.Class.h"

using namespace std;

// Вывод на экран
template <typename T>
void Print(T*  figure) {
    if (figure->Getheight() == 0) {  // проверка высоты
        cout << endl << "У прямоугольника найден" << endl;
        cout << "Периметр равный: " << figure->GetTwod_Perimeter() << endl;
        cout << "Площадь равная: " << figure->GetTwod_Area() << endl;
    }
    else {
        cout << endl << "У параллелепипеда найден" << endl;
        cout << "Периметр равный: " << figure->GetTreed_Perimeter() << endl;
        cout << "Объем равынй: " << figure->GetTreed_Volume() << endl;
    }
}

// Записи ответа в файл
template <typename T>
void SaveFileSolution(T* figure) {
    ofstream out;  // поток для записи
    out.open("Text-Solution.txt"); // Открываем файл для записи
    if (!out.is_open()) {
        throw runtime_error("Ошибка открытия файла");
    }
        if (figure->Getheight() == 0) {  // проверка высоты
            out << figure->GetTwod_Perimeter() << " " << figure->GetTwod_Area() << endl;
        }
        else {
            out << figure->GetTreed_Perimeter() << " " << figure->GetTreed_Volume() << endl;
        }
    out.close();
    cout << endl << "Файл был записан" << endl;
}

// Записи элементов класса в файл
template <typename T>
void SaveFileElements(T* figure) {
    ofstream out;  // поток для записи
    out.open("Text-Elements.txt"); // Открываем файл для записи
    if (!out.is_open()) {
        throw runtime_error("Ошибка открытия файла");
    }
    if (figure->Getheight() == 0) {  // проверка высоты
        out << figure->Getwidth() << " " << figure->Getlength() << endl;
    }
    else {
        out << figure->Getwidth() << " " << figure->Getlength() << " " << figure->Getheight() << endl;
    }
    out.close();
    cout << endl << "Файл был записан" << endl;
}