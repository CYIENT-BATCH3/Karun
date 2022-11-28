#include "hospital.h"

Hospital::Hospital()
{
  cout << "hospital constructor" << endl;
  for(int i=0;i<5;i++){
      m_doctor[i] = new Doctor;
  }
 for(int i=0;i<10;i++){
      m_patient[i]= new Patient;
  }
}
Hospital::Hospital(string location,string wards,string doctor,string patient)
{
   cout << "hospital para-constructor" << endl;
   string m_HospitalLocation = location;
   string m_NumberOfWards = wards;
   string m_numberofdoctors = doctor;
   string m_numberofpatients = patient;
}
void Hospital::setLocation(string location){
    m_HospitalLocation = location;
}
string Hospital::getLocation() const
{
  return m_HospitalLocation;
}
void Hospital::setward(string ward){
    m_NumberOfWards = ward;
}
string Hospital::getward() const
{
 return m_NumberOfWards;
}
void Hospital::setdoctor(string doctor){
    m_numberofdoctors = doctor;
}
string Hospital::getdoctor() const{
    return m_numberofdoctors;
}
void Hospital::setpatient(string patient){
    m_numberofpatients = patient;
}
string Hospital::getpatient() const{
    return m_numberofpatients;
}
Hospital::~Hospital()
{
   cout << "hospital destructor" << endl;
}
