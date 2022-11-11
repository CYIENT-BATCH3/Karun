#include "right_leg.h"

right_leg::right_leg()
{
  cout << "default constructor for right leg" << endl;
}

void right_leg:: print(){
    cout << "number of right_leg fingers " << m_NumberOfFingers << endl;
}
right_leg::~right_leg()
{
  cout << "default destructor for right leg" << endl;
}
