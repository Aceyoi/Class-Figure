//Сапожников Юрий ИВТ-22
#pragma once

#include "figure.Class.h"
#include "figure.Modul.h"
#include <cassert>

void RecTest() {

    try {
        RectangleOrParallelepiped<float> bedtest(-3, -4, -2);
    }
    catch (const invalid_argument& e) {}

    RectangleOrParallelepiped<float> twotest(5, 5, 0);
    RectangleOrParallelepiped<float> treetest(5, 5, 5);

    RectangleOrParallelepiped<float> twotest1(3.5, 7.25, 0);
    RectangleOrParallelepiped<double > treetest1(4.37, 0.5, 1.9); // Используется double для большей точности 

    assert(twotest.Getwidth() == 5);
    assert(twotest.Getlength() == 5);
    assert(twotest.Getheight() == 0);

    assert(treetest.Getwidth() == 5);
    assert(treetest.Getheight() == 5);
    assert(treetest.Getlength() == 5);

    assert(twotest.GetTwod_Perimeter() == 20);
    assert(twotest.GetTwod_Area() == 25);

    assert(treetest.GetTreed_Perimeter() == 60);
    assert(treetest.GetTreed_Volume() == 125);

    assert(twotest1.Getlength() == 3.5);
    assert(twotest1.Getwidth() == 7.25);
    assert(twotest1.Getheight() == 0);

    assert(treetest1.Getlength() == 4.37);
    assert(treetest1.Getwidth() == 0.5);
    assert(treetest1.Getheight() == 1.9);


    assert(twotest1.GetTwod_Perimeter() == 21.5);
    assert(twotest1.GetTwod_Area() == 25.375);

    assert(treetest1.GetTreed_Perimeter() == 27.08);
    //assert(treetest1.GetTreed_Volume() == 4.1515);
    system("cls");
} 