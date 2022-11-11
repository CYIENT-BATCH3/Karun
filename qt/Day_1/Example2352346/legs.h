#ifndef LEGS_H
#define LEGS_H
#include <iostream>
using namespace std;
class legs
{
public:
    legs();
   ~legs();
    legs(int fingers);
protected:
    int m_NumberOfFingers = 10;
};

#endif // LEGS_H
