#include "car.h"

car::car()
{
  cout << "defalt constructor for car" << endl;
  m_NumberOfWheels = 0;
  m_NumberOfDoors = 0;
}
car::car(int wheels,int tyres){
   cout << "parameterised constructor for car" << endl;
   m_NumberOfWheels = wheels;
   m_NumberOfDoors = tyres;
}
void car ::setWheel(int NumberOfWheel)
{
  m_NumberOfWheels = NumberOfWheel;
}
int car:: getWheel() const
{
return m_NumberOfWheels;
}
void car:: setDoors(int NumberOfDoor){
  m_NumberOfDoors =  NumberOfDoor;
}
int car:: getDoor() const
{
return m_NumberOfDoors;
}
void car:: display(){
    cout << "number of wheels = " << m_NumberOfWheels << endl << "number of doors = " << m_NumberOfDoors << endl;
}
car::~car()
{
   cout << "defalt destructor for car" << endl;
}

