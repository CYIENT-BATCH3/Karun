#ifndef BONES_H
#define BONES_H
#include <iostream>
using namespace std;

class Bones
{
public:
    Bones();
   ~Bones();
    Bones(int NumberOfBones,int BoneWeight);
    void setNumber(int Bones);
    int getNumber() const;
    void setWeight(int Weight);
    int getWeight() const;
    void display();
private:
    int m_NumberOfBones;
    int m_BoneWeight;
};

#endif // BONES_H
