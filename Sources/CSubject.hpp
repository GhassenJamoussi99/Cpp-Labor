#ifndef CSUBJECT_H
#define CSUBJECT_H

#include <iostream>
#include "CStudy.hpp"
#include "CEvent.hpp"
#include <vector>


class CSubject
{
  public:
  CSubject() = default;
  CSubject(std::string m_Name,unsigned m_SubjNr,CStudy *m_Study);
  void addEvent(CEvent *m_Event);
  void print();
  friend class CBookings; // zu entfernen
  friend class CBooking;
  void load(std::ifstream& File);
  std::string getSubject(){return Name;}
  unsigned getSubjNr(){return SubjNr;} //override die virtuelle Funtkion
  ~CSubject()
  {std::cout<<"Studienfach " << Name <<" wird vernichtet."<<std::endl; }

  private:
   unsigned SubjNr;   
   std::string Name;
   CStudy *Study = new CStudy();
   std::vector<CEvent*> Events; 
   
};


#endif