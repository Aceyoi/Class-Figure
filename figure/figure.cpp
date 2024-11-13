// Код создан Сапожниковым Ю.С.
// Используемые библиотеки


#include "figure.Class.h"
#include "figure.Modul.h"
#include "figure.Test.h"

using namespace std;
const string SFS = "Text-Solution"; 
const string SFE = "Text-Elements";

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

    /*// Создаем экземпляр класса
    Rectangle* figure = new Rectangle();
    figure->setFigL(l);// Добавляем длину
    figure->setFigW(w);// Добавляем ширину
    figure->setFigH(h);// Добавляем высоту*/

    
    RectangleOrParallelepiped<float> figure(l, w, h); //конструктор с  параметрами длины, ширины, высоты

    Print(figure);
    SaveFileSolution(figure, SFS);
    SaveFileElements(figure, SFE);

    //print(figure); // Передаем объект в функцию вывода
    //VText(figure); // Передаем объект в функцию вывода в файл

    return 0; // Завершение программы
}
