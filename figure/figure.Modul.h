#pragma once
// ��� ������ ������������ �.�.
// ������������ ����������

#include <iostream>
#include <fstream>
#include "figure.Class.h"

using namespace std;

// ����� �� �����
template <typename T>
void print(T*  fig) {
    if (fig->height == 0) {  // �������� ������
        cout << endl << "� �������������� ������" << endl;
        cout << "�������� ������: " << fig->GetTwod_Perimeter() << endl;
        cout << "������� ������: " << fig->GetTwod_Area() << endl;
    }
    else {
        cout << endl << "� ��������������� ������" << endl;
        cout << "�������� ������: " << fig->GetTreed_Perimeter() << endl;
        cout << "����� ������: " << fig->GetTreed_Volume() << endl;
    }
}

// ����� � ����
template <typename T>
void VText(T* fig) {
    ofstream out;  // ����� ��� ������
    out.open("Text.txt"); // ��������� ���� ��� ������
    if (!out.is_open()) {
        throw runtime_error("������ �������� �����");
    }
        if (fig->height == 0) {  // �������� ������
            out << fig->GetTwod_Perimeter() << " " << fig->GetTwod_Area() << endl;
        }
        else {
            out << fig->GetTreed_Perimeter() << " " << fig->GetTreed_Volume() << endl;
        }
    out.close();
    cout << endl << "���� ��� �������" << endl;
}

