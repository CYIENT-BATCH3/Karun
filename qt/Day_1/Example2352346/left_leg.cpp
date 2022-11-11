#include "left_leg.h"

left_leg::left_leg()
{
  cout << "default constructor" << endl;
}

void left_leg:: print(){
    cout << "number of left_leg fingers " << m_NumberOfFingers << endl;
}
left_leg::~left_leg()
{
  cout << "default destructor" << endl;
}

