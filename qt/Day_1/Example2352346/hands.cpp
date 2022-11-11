#include "hands.h"

hands::hands()
{
  cout << " default constructor for hand" << endl;
}

void hands:: display(){
    cout  << "number of fingers " << m_NumberOfFingers << endl;
}
hands::~hands()
{
  cout << " default destructor for hand" << endl;
}
