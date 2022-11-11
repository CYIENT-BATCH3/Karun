#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;
class car
{
public:
    car();
   ~car();
    car(int wheels,int tyres);
    void setWheel(int NumberOfWheel);
    int getWheel() const;
    void setDoors(int NumberOfDoors);
    int getDoor() const;
    void display();
private:
    int m_NumberOfWheels;
    int m_NumberOfDoors;
};

#endif // CAR_H
