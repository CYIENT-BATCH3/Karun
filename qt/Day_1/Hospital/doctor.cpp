#include "doctor.h"

Doctor::Doctor()
{
 cout << "doctor constructor" << endl;
}
void Doctor::setSpecialization(string Specialization){
    m_DoctorSpecialization =Specialization;
}
string Doctor::getSpecialization() const{
    return m_DoctorSpecialization;
}
void Doctor::setposition(string position){
    m_DoctorPosition = position;
}
string Doctor::getposition() const{
    return m_DoctorPosition;
}
void Doctor::setaname(string name){
    m_DoctorName = name;
}
string Doctor::getname() const{
    return m_DoctorName;
}
void Doctor::setnumber(string number){
    m_DoctorNumber = number;
}
string Doctor::getnumber() const{
    return m_DoctorNumber;
}
Doctor::~Doctor()
{
  cout << "doctor destructor" << endl;
}
