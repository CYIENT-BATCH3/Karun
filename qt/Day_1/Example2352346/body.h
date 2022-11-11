#ifndef BODY_H
#define BODY_H
#include <iostream>
using namespace std;

class body
{
public:
    body();
   ~body();
    body(int height,int weight);
    void setHeight(int height);
    int getHeight() const;
    void setWeight(int weight);
    int getWeight() const;
    void display();
private:
    int m_bodyheight;
    int m_bodyweight;
};

#endif // BODY_H
