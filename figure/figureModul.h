#pragma once
// Код создан Сапожниковым Ю.С.
// Используемые библиотеки

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// Имя класса Прямоугольник
class Rectangle {
public:
    float width,  // ширина
          height, // высота
          length; // длина

    //Конструктор без параметров
    Rectangle() : width(0), height(0), length(0) {}
    
    // Конструктор с параметрами
    Rectangle(float w, float h, float l) {
        setFigW(w);
        setFigH(h);
        setFigL(l);
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
};



// Вывод на экран
void printclass(const Rectangle* fig) {
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
void VText(const Rectangle* fig) {
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

void RecTest() {

    Rectangle* twotest = new Rectangle();
    Rectangle* treetest = new Rectangle();

    try{
    treetest->setFigW(-3); 
    treetest->setFigH(-4);  
    treetest->setFigL(-2);  

}
    catch (const invalid_argument& e) {}

    twotest->setFigW(5);
    twotest->setFigL(5);
    twotest->setFigH(0);
    
    treetest->setFigW(5);
    treetest->setFigH(5);
    treetest->setFigL(5);

    assert(twotest->GetTwod_Perimeter() == 20);
    assert(twotest->GetTwod_Area() == 25);

    assert(treetest->GetTreed_Perimeter() == 60);
    assert(treetest->GetTreed_Volume() == 125);

    delete twotest;
    delete treetest;
}