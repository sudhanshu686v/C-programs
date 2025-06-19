#include <stdio.h>

int main(){
    int a=4,b=6,c=2,d=7;
    if(a>b && a>c && a>d){
        printf("the greatest number of all is %d",a);
    }
    else if(b>a && b>c && b>d){
        printf("the greatest number of all is %d",b);
    }
    else if(c>b && c>a && c>d){
        printf("the greatest number of all is %d",c);
    }
    else{
        printf("the greatest number of all is %d",d);
    }
    return 0;
}