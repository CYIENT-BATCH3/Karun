6.Consider weights of 3 people as input , find heaviest among 3 people?

#include<stdio.h>
int main(){
    
    float sam=68.5;     //declaring the flaot variables
    float karun=48.7;
    float akhil=55.7;
    
   ((sam>karun))&&((sam>akhil))?puts("Sam is heaviest"):((karun>sam))&&((karun>akhil))?puts("karun is heaviest"):puts("akhil is heaviest");
}                           //Using logical,relational and conditional operators checking the heaviest weight person among three pepole
