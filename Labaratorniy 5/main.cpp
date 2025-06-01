#include "header.h"
#include <iostream>

int main() {
    
    setlocale(LC_ALL, "RU");// использование русского языка
    system("chcp 1251");
    
    Address orgAddress("Москва", "Ленина", 10);
    int choice;
    string newCity, newStreet;
    int newHouseNumber;

    do {
        cout << "\nМеню:\n";
        cout << "1. Показать адрес\n";
        cout << "2. Изменить город\n";
        cout << "3. Изменить улицу\n";
        cout << "4. Изменить номер дома\n";
        cout << "0. Выход\n";
        cout << "Выберите действие: ";
        
        cin >> choice;

        switch (choice) {
        case 1:
            orgAddress.printAddress();
            break;
        case 2:
            cout << "Введите новый город: ";
            cin >> newCity;
            orgAddress.setCity(newCity);
            cout << "Город изменён.\n";
            break;
        case 3:
            cout << "Введите новую улицу: ";
            cin >> newStreet;
            orgAddress.setStreet(newStreet);
            cout << "Улица изменена.\n";
            break;
        case 4:
            cout << "Введите новый номер дома: ";
            cin >> newHouseNumber;
            orgAddress.setHouseNumber(newHouseNumber);
            cout << "Номер дома изменён.\n";
            break;
        case 0:
            cout << "Выход из программы.\n";
            break;
        default:
            cout << "Неверный выбор! Попробуйте снова.\n";
        }
    } while (choice != 0);

    return 0;
}