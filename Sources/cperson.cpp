#include "CPerson.hpp"
using namespace std;

CPerson::CPerson(
    string m_Name,
    string m_Street,
    string m_HouseNr,
    unsigned m_Zipcode,
    string m_City,
    int m_Day, int m_Month, int m_Year) 
    :Address(m_Street,m_HouseNr,m_Zipcode,m_City),Birthday(m_Day,m_Month,m_Year)
{
    Name = m_Name;
    ID++;
}

void CPerson::print() const
{
    cout << Name << " (* " ;
    Birthday.print();
    cout << ")";
}

 CAddress &CPerson::getAddress()
{
    return this->Address;
}
