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

    system("cls");
} 