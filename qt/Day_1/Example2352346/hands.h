#ifndef HANDS_H
#define HANDS_H
#include <iostream>
using namespace std;
class hands
{
public:
    hands();
   ~hands();
    void display();
protected:
    int m_NumberOfFingers = 5;
};

#endif // HANDS_H
