#include "header.h"
#include <iostream>

// Конструктор
Address::Address(string c, string s, int h)
    : city(c), street(s), houseNumber(h) {}

// Установка нового города
void Address::setCity(string c) {
    city = c;
}

// Установка новой улицы
void Address::setStreet(string s) {
    street = s;
}

// Установка нового номера дома
void Address::setHouseNumber(int h) {
    houseNumber = h;
}


// Вывод полного адреса
void Address::printAddress() const {
    cout << "Адрес: " << city << ", " <<"улица " << street << ", " << houseNumber << endl;
}