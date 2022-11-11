#ifndef MOUTH_H
#define MOUTH_H
#include <iostream>
using namespace std;

class mouth
{
public:
    mouth();
   ~mouth();
    mouth(int NumberOfTeeth,string MouthShape);
    void setTeeth(int teeth);
    int getTeeth() const;
    void setShape(string shape);
    string getShape() const;
    void display();
private:
    int m_NumberOfTeeth;
    string m_MouthShape;
};

#endif // MOUTH_H
