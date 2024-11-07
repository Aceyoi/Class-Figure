// ��� ������ ������������ �.�.

#pragma once

#include "figure.Modul.h" 

// ��� ������ �������������
template <typename T>
class RectangleOrParallelepiped {
private:
    float width,  // ������
          height, // ������                   
          length; // �����

public:

    //����������� ��� ����������
    RectangleOrParallelepiped() : length(0), width(0), height(0)  {}

    // ����������� � �����������
    RectangleOrParallelepiped(float l, float w, float h) {
        setFigL(l);
        setFigW(w);
        setFigH(h);
    }

    // ����������� ���� ������
    // ����������� �������  
    // ����������
    virtual ~RectangleOrParallelepiped() {}

    // ����������� �����������
    RectangleOrParallelepiped(const RectangleOrParallelepiped& other)
        : width(other.width), height(other.height), length(other.length) {}

    // ����������� �����������
    RectangleOrParallelepiped(RectangleOrParallelepiped&& other) noexcept
        : width(other.width), height(other.height), length(other.length) {
        other.width = 0;
        other.height = 0;
        other.length = 0;
    }

    // ����� ���������� ������
    void setFigW(float w) {
        if (w > 0) {
            width = w;
        }
        else {
            cout << "������ ������ ���� �������������." << endl;
        }
    }

    // ����� ���������� ������
    void setFigH(float h) { 
        if (h >= 0) {
            height = h;
        }
        else {
            cout << "������ ������ ���� ���������������." << endl;
        }
    }

    // ����� ���������� �����
    void setFigL(float l) { 
        if (l > 0) {
            length = l;
        }
        else {
            cout << "����� ������ ���� �������������." << endl;
        }
    }

    // ����� ������ ������
    float Getwidth() const {
        return width;
    }

    // ����� ������ ������
    float Getheight() const {
        return height;
    }

    // ����� ������ �����
    float Getlength() const {
        return length;
    }

    // ����� ���������� ��������� ��������������
    float GetTwod_Perimeter() const { // const - ������ �� ����������
        return (length + width) * 2;
    }

    // ����� ���������� ������� ��������������
    float GetTwod_Area() const {
        return length * width;
    }

    // ����� ���������� ������� ��������������� 
    float GetTreed_Perimeter() const {
        return 4 * (length + width + height);
    }

    // ����� ���������� ������ ���������������
    float GetTreed_Volume() const {
        return width * length * height;
    }

    // ����� ������ ������ �� �����
    void printclass() {
        Print(this);
    }

    // ����� ������ ������ � ����
    void SaveFileSolutionClass() {
        SaveFileSolution(this);
    }

    // ����� ������ ��������� ������ � ����
    void SaveFileElementsClass() {
        SaveFileElements(this);
    }
};