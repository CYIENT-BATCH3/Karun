#include "bones.h"

Bones::Bones()
{
  cout << "default constructor for bones " << endl;
}
Bones::Bones(int NumberOfBones,int BoneWeight)
{
  cout << "parameterised constructor for bones " << endl;
  m_NumberOfBones = NumberOfBones;
  m_BoneWeight = BoneWeight;
}
void Bones::setNumber(int Bones){
     m_NumberOfBones =  Bones;
}
int Bones::getNumber() const{
    return  m_NumberOfBones;
}
void Bones::setWeight(int Weight){
    m_BoneWeight = Weight;
}
int Bones::getWeight() const{
    return  m_BoneWeight;
}
void Bones::display(){
    cout << " number of bones " << m_NumberOfBones << endl << "weight of the bone " << m_BoneWeight << endl;
}
Bones::~Bones()
{
  cout << "default destructor for bones " << endl;
}
