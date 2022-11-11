#include "mouth.h"

mouth::mouth()
{
  cout << "default constructor for mouth " << endl;
}
mouth::mouth(int NumberOfTeeth,string MouthShape)
{
  cout << "parameterised constructor for mouth " << endl;
  m_NumberOfTeeth = NumberOfTeeth;
  m_MouthShape = MouthShape;
}
void mouth::setTeeth(int teeth){
   m_NumberOfTeeth = teeth;
}
int mouth::getTeeth() const{
    return m_NumberOfTeeth;
}
void mouth::setShape(string shape){
    m_MouthShape = shape;
}
string mouth::  getShape() const{
    return  m_MouthShape;
}
void mouth:: display(){
   cout << "number of teeth " << m_NumberOfTeeth << endl << "mouth shape" << m_MouthShape << endl;
}
mouth::~mouth()
{
  cout << "default destructor for mouth " << endl;
}
