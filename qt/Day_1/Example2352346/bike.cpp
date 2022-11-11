#include "bike.h"

bike::bike()
{
  cout << "default constructor for bike" << endl;
}
bike::bike(int NumberOfWheels,string BikeColour)
{
    cout << "parameterised constructor for bike" << endl;
    m_NumberOfWheels = NumberOfWheels;
    m_BikeColour = BikeColour;
}
void bike:: setWheel(int NumberOfWheels){
    m_NumberOfWheels = NumberOfWheels;
}
int bike:: getWheel() const{
    return m_NumberOfWheels;
}
void bike:: setColour(string colour){
    m_BikeColour = colour;
}
string bike:: getColour() const{
    return m_BikeColour;
}
void bike::display(){
    cout << "number of wheels = " << m_NumberOfWheels << endl << "colour of bike" << m_BikeColour << endl;
}
bike::~bike()
{
   cout << "defalt destructor for bike" << endl;
}
