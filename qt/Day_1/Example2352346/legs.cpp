#include "legs.h"

legs::legs()
{
  cout << "default constructor for legs" << endl;
}
legs::legs(int fingers)
{
  cout << "parameterised constructor for legs" << endl;
  m_NumberOfFingers = fingers;
}

legs::~legs()
{
  cout << "default destructor for legs" << endl;
}
