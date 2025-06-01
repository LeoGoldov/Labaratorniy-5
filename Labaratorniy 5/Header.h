// Address.h
#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
using namespace std;

class Address {
private:
    string city;    
    string street;  
    int houseNumber; 
public:
    
    // Конструктор (создание объекта)
    Address(string c, string s, int h);

    // Методы для изменения составных частей адреса
    void setCity(string c);
    void setStreet(string s);
    void setHouseNumber(int h);

    // Метод для вывода полного адреса
    void printAddress() const;
};

#endif 