#ifndef RIGHT_HAND_H
#define RIGHT_HAND_H
#include <iostream>
#include "hands.h"
using namespace std;
class right_hand : public hands{
public:
    right_hand();
   ~right_hand();
    right_hand(int fingers);
    void print();
};
#endif // RIGHT_HAND_H
