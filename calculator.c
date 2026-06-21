#include<stdio.h>
int main (){
    int a,b; 
    
    printf("enter value of two numbers");
    scanf("%d%d",&a,&b);


    char c;
    printf("enter operator (+,-,*,/)\n");
    scanf(" %c",&c);

switch(c){
 case '+' :
     printf("sum of two numbers =%d",a+b);
        break;

case '-' :
    printf("substraction of two numbers =%d",a-b);
        break ;

case '*' :
    printf("multiplication of two numbers =%d",a*b);
        break;

case '/' :
   printf("division of two numbers =%d",a/b);
        break ;

default :
    printf("invalid operator");
  }
  return 0;
}