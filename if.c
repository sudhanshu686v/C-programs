#include <stdio.h>

int main(){
    if(1){
        printf("this if is executed\n");
    }
    if(345){
        printf("this if is also executed\n");
    }
    if(34.56){
            printf("this if is also executed\n");
    }
    if('b'){
        printf("this if is also executed\n");
    }
    if(0){
        printf("this if is not executed\n");
    }
    return 0;
}