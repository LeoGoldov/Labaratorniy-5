#include "header.h"
#include <iostream>

// �����������
Address::Address(string c, string s, int h)
    : city(c), street(s), houseNumber(h) {}

// ��������� ������ ������
void Address::setCity(string c) {
    city = c;
}

// ��������� ����� �����
void Address::setStreet(string s) {
    street = s;
}

// ��������� ������ ������ ����
void Address::setHouseNumber(int h) {
    houseNumber = h;
}


// ����� ������� ������
void Address::printAddress() const {
    cout << "�����: " << city << ", " <<"����� " << street << ", " << houseNumber << endl;
}