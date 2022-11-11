#include "body.h"

body::body()
{
  cout << "default constructor for body" << endl;
}
body::body(int height,int weight)
{
  cout << "parameterised constructor for body" << endl;
  m_bodyheight = height;
  m_bodyweight = weight;
}
void body:: setHeight(int height){
    m_bodyheight = height;;
}
int body:: getHeight() const{
    return m_bodyheight;
}
void body::setWeight(int weight){
     m_bodyweight = weight;
}
int body::getWeight() const{
    return  m_bodyweight;
}
void body::display(){
  cout << "height = " << m_bodyheight << endl << "weight = " <<  m_bodyweight << endl;
}
body::~body()
{
  cout << "default destructor for body" << endl;
}
