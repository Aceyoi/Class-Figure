#pragma once
// ��� ������ ������������ �.�.
// ������������ ����������

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// ��� ������ �������������
class Rectangle {
public:
    float width,  // ������
          height, // ������
          length; // �����

    //����������� ��� ����������
    Rectangle() : width(0), height(0), length(0) {}
    
    // ����������� � �����������
    Rectangle(float w, float h, float l) {
        setFigW(w);
        setFigH(h);
        setFigL(l);
    }

    // ����������� ���� ������
    // ����������� �������  
    // ����������
    virtual ~Rectangle() {}

    // ����������� �����������
    Rectangle(const Rectangle& other)
        : width(other.width), height(other.height), length(other.length) {}

    // ����������� �����������
    Rectangle(Rectangle&& other) noexcept
        : width(other.width), height(other.height), length(other.length) {
        other.width = 0;
        other.height = 0;
        other.length = 0;
    }


     void setFigW(float w) { // ������������� ������
        if (w > 0) {
            width = w;
        }
        else {
            cout << "������ ������ ���� �������������." << endl;
        }
    }

    void setFigH(float h) { // ������������� ������
        if (h >= 0) {
            height = h;
        }
        else {
            cout << "������ ������ ���� ���������������." << endl;
        }
    }

    void setFigL(float l) { // ������������� �����
        if (l > 0) {
            length = l;
        }
        else {
            cout << "����� ������ ���� �������������." << endl;
        }
    }

    // ������� �������� ��������������
    float GetTwod_Perimeter() const { // const - ������ �� ����������
        return (length + width) * 2;
    }

    // ������� ������� ��������������
    float GetTwod_Area() const {
        return length * width;
    }

    // ������� ������� ��������������� 
    float GetTreed_Perimeter() const {
        return 4 * (length + width + height);
    }

    // ������� ����� ���������������
    float GetTreed_Volume() const {
        return width * length * height;
    }
};



// ����� �� �����
void printclass(const Rectangle* fig) {
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
void VText(const Rectangle* fig) {
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