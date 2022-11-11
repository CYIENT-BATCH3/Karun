#include "eyes.h"

eyes::eyes()
{
cout << "default constructor for eyes" << endl;
}
eyes::eyes(int NumberOfEyes,string EyeColour){
    cout << "parameterised constructor for eyes " <<endl;
    m_NumberOfEyes = NumberOfEyes;
    m_EyeColour = EyeColour;
}
void eyes::display(){
    cout << "number of eyes" << m_NumberOfEyes << endl << "eye colour"  << m_EyeColour<< endl;
}
eyes::~eyes()
{
cout << "default destructor for eyes" << endl;
}
