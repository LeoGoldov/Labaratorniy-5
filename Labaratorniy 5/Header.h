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
    
    // ����������� (�������� �������)
    Address(string c, string s, int h);

    // ������ ��� ��������� ��������� ������ ������
    void setCity(string c);
    void setStreet(string s);
    void setHouseNumber(int h);

    // ����� ��� ������ ������� ������
    void printAddress() const;
};

#endif 