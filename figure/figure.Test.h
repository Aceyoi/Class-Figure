//Сапожников Юрий ИВТ-22
#pragma once

#include "figure.Class.h"
#include "figure.Modul.h"
#include <cassert>

void RecTest() {

    //Rectangle* twotest = new Rectangle();
    //Rectangle* treetest = new Rectangle();

    //try {
    //    treetest->setFigW(-3);
    //    treetest->setFigH(-4);
    //    treetest->setFigL(-2);

    //}
    //catch (const invalid_argument& e) {}
    try {
        Rectangle<float> bedtest(-3, -4, -2);
    }
    catch (const invalid_argument& e) {}

    Rectangle<float> twotest(5, 5, 0);
    Rectangle<float> treetest(5, 5, 5);


    //twotest->setFigW(5);
    //twotest->setFigL(5);
    //twotest->setFigH(0);

    //treetest->setFigW(5);
    //treetest->setFigH(5);
    //treetest->setFigL(5);

    //assert(twotest->GetTwod_Perimeter() == 20);
    //assert(twotest->GetTwod_Area() == 25);

    //assert(treetest->GetTreed_Perimeter() == 60);
    //assert(treetest->GetTreed_Volume() == 125);

    //system("cls");
}