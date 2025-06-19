/*prg  to print first n natural no. in reverse order by
 using for loop*/

#include <stdio.h>

int main(){
    int i,n;
    printf("enter ther no. of natural numbers :");
    scanf("%d",&n);
    for(i=n;i;i--){
        printf("%d\n",i);
    }
    
    return 0;
}