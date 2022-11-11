#include <iostream>
#include "eyes.h"
#include "hands.h"
#include "bones.h"
#include "mouth.h"
#include "body.h"
#include "left_leg.h"
#include "right_leg.h"
#include "left_hand.h"
#include "right_hand.h"
using namespace std;

int main()
{
    cout << "Human body" << endl;
    eyes eye;
    eyes eye1(2,"black");
    eye1.display();
    Bones Bone;
    Bones Bone1(206,55);
    Bone1.display();
    mouth m;
    mouth m1(32,"vowel");
    m1.display();
    body b;
    body b1(6,52);
    b1.display();
    left_leg l1;
    l1.print();
    right_leg l2;
    l2.print();
    left_hand h1;
    h1.print();
    right_hand h2;
    h2.print();
    return 0;
}
