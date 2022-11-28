#ifndef HOSPITAL_H
#define HOSPITAL_H
#include <iostream>
#include "doctor.h"
#include "patient.h"
using namespace std;

class Hospital
{
public:
    Hospital();
   ~Hospital();
    Hospital(string location,string wards,string doctor,string patient);
    void setLocation(string location);
    string getLocation() const;
    void setward(string ward);
    string getward() const;
    void setdoctor(string doctor);
    string getdoctor() const;
    void setpatient(string patient);
    string getpatient() const;
private:
    string m_HospitalLocation;
    string m_NumberOfWards;
    string m_numberofdoctors;
    string m_numberofpatients;
    Doctor* m_doctor[5];
    Patient* m_patient[10];
};

#endif // HOSPITAL_H
