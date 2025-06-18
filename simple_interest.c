#include <stdio.h>

int main(){
    float p,r,t,SI;
    p=10000;
    r=5;
    t=4;
    /*p is principal ammount
    r is rate of interest
    t is time in year*/
    SI=(p*r*t)/100;
    printf("simple interest is :%f",SI);

    return 0;
}