#ifndef BIKE_H
#define BIKE_H
#include <iostream>
using namespace std;
class bike
{
public:
    bike();
   ~bike();
    bike(int NumberOfWheels,string BikeColour);
    void setWheel(int NumberOfWheels);
    int getWheel() const;
    void setColour(string colour);
    string getColour() const;
    void display ();
private :
    int m_NumberOfWheels;
    string m_BikeColour;
};

#endif // BIKE_H
