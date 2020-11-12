#include "CBooking.hpp"

using namespace std;

unsigned CBooking::BookingNr = 0;

CBooking::CBooking(CSubject *m_Subject, CStudent *m_Student, int m_Day, int m_Month, int m_Year,
                   int m_Hour, int m_Minute, int m_Second) : Subject(m_Subject), Student(m_Student),
                                                             BookingDate(m_Day, m_Month, m_Year), BookingTime(m_Hour, m_Minute, m_Second)
{}

void CBooking::print()
{   

    BookingNr++;

    cout << "Belegung Nr.  " << BookingNr << ":" << endl;

    cout << "Am ";
    BookingDate.print();
    cout << " um ";
    BookingTime.print();
    cout << endl;

    cout << "hat " << Student->getName() << "(* ";
    (Student->getBirthday()).print();
    cout << "; "
         << "MatrNr. " << Student->getMatrNr() << ")" << endl;

    cout << "das Fach '" << Subject->getSubject() << " (" << Subject->getSubjNr() << "; ";
    Student->getStudy();
    cout << ")' "<< "belegt.";
}