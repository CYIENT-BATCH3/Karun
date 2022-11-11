#ifndef LEFT_HAND_H
#define LEFT_HAND_H
#include <iostream>
#include "hands.h"
using namespace std;

class left_hand : public hands{

public:
    left_hand();
   ~left_hand();
   left_hand(int fingers);
    void print();
};

#endif // LEFT_HAND_H
