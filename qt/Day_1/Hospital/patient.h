#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>
using namespace std;

class Patient
{
public:
    Patient();
   ~Patient();
    Patient(string name,string age,string bloodgroup,string symptoms);
    void setName(string name);
    string getName() const;
    void setage(string age);
    string getage() const;
    void setblood(string bloodgroup);
    string getblood() const;
    void setsymptoms(string name);
    string getsymptoms() const;
private:
    string m_PatientName;
    string m_PatientAge;
    string m_PatientBloodGroup;
    string m_PatientSymptoms;
};

#endif // PATIENT_H
