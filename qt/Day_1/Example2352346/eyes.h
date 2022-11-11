#ifndef EYES_H
#define EYES_H
#include <iostream>
using namespace std;
class eyes
{
public:
    eyes();
   ~eyes();
    eyes(int NumberOfEyes,string EyeColour);
    void display();
private :
    int m_NumberOfEyes;
    string m_EyeColour;
};

#endif // EYES_H
