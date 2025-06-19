/*prg to determine Student has passed or failed . To pass,
 a student requires a total of 40 per cent and at least 33
 per cent in each subject. Assume there are three subjescts
 and take the marks as input from the user*/
 #include <stdio.h>
 
 int main(){
    int a,b,c;
    printf("enter marks of subject a :");
    scanf("%d", &a);
    printf("\nenter marks of subject b :");
    scanf("%d", &b);
    printf("\nenter marks of subject c :");
    scanf("%d", &c);

    if(a<33 || b<33 || c<33){
        printf("student is failed the exam\n");    
    }
    else if(((a+b+c)/3)<40){
        printf("student is failed the exam,,\n");    
    }
    else{
        printf("student passed the exam\n");
    }
    
     
    return 0;
 }