//use of ASCII value
//prg to find whether the given character is lowercase or not
#include <stdio.h>

int main(){
    char ch;
    printf("enter a character :");
    scanf("%c",&ch);
    printf("the value is %d\n",ch);

    if(ch>=97 && ch<=122){
        printf("character is lowercase");
    }
    else if(ch>=65 && ch<=90){
        printf("character is uppercase");
    }
    else {
        printf("character not found");
    }
    

    return 0;
}