#include "patient.h"

Patient::Patient()
{
 cout << "patient constructor" << endl;
}
Patient:: Patient(string name,string age,string bloodgroup,string symptoms)
{
    cout << "patient para-constructor" << endl;
    m_PatientName = name;
    m_PatientAge = age;
    m_PatientBloodGroup = bloodgroup;
    m_PatientSymptoms = symptoms;
}
void Patient::setName(string name){
    m_PatientName = name;
}
string Patient::getName() const{
    return m_PatientName;
}
void Patient::setage(string age){
    m_PatientAge = age;
}
string Patient::getage() const{
    return m_PatientAge;
}
void Patient::setblood(string bloodgroup){
    m_PatientBloodGroup = bloodgroup;
}
string Patient::getblood() const{
    return m_PatientBloodGroup;
}
void Patient::setsymptoms(string name){
    m_PatientSymptoms = name;
}
string Patient::getsymptoms() const{
    return m_PatientSymptoms;
}
Patient::~Patient()
{
 cout << "patient destructor" << endl;
}
