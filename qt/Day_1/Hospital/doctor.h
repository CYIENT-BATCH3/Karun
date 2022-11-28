#ifndef DOCTOR_H
#define DOCTOR_H
#include <iostream>

using namespace std;

class Doctor
{
public:
    Doctor();
   ~Doctor();
    void setSpecialization(string Specialization);
    string getSpecialization() const;
    void setposition(string position);
    string getposition() const;
    void setaname(string name);
    string getname() const;
    void setnumber(string number);
    string getnumber() const;
private:
    string m_DoctorSpecialization;
    string m_DoctorPosition;
    string m_DoctorName;
    string m_DoctorNumber;
};

#endif // DOCTOR_H
