// Код создан Сапожниковым Ю.С.
// Используемые библиотеки

#include <iostream>
#include <cassert>
#include <fstream> // Добавлено для работы с файлами
#include "figureModul.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    RecTest(); //Тесты

    float w, h, l;
    // Укажите длину, ширину и высоту
    cout << "Укажите длину: ";
    cin >> l; // длина
    cout << "Укажите ширину: ";
    cin >> w; // ширина
    cout << "Укажите высоту: ";
    cin >> h; // высота

    // Создаем экземпляр класса
    Rectangle* figure = new Rectangle();

    figure->setFigL(l);// Добавляем длину
    figure->setFigW(w);// Добавляем ширину
    figure->setFigH(h);// Добавляем высоту

    printclass(figure); // Передаем объект в функцию вывода
    VText(figure); // Передаем объект в функцию вывода в файл

    delete figure; // Очистка памяти
    return 0; // Завершение программы
}
