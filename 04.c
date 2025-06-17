#include<stdio.h>
int main(){
    int a,b,sum,sub,mul,rem,quo;
    printf("enter a no.:\n");
    scanf("%d",&a);
    printf("enter another no.:\n");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    rem=a%b;
    quo=a/b;
    printf("addition of these two no. is:%d\n",sum);
    printf("subtraction of these two no. is:%d\n",sub);
    printf("multiplication of these two no. is:%d\n",mul);
    printf("remainder of these two no. is:%d\n",rem);
    printf("quotient of these two no. is:%d\n",quo);
    return 0;



}