#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float calcy(int first,char operator,int second){
    switch (operator)
    {
    case '+':
        return first+second;
    case '-':
        return (float)first-second;
    case '*':
        return first*second;
    case '/':
        return (float)first/second;
    case '%':
        return first%second;
    }
}
int main(){
    int a,b;
    char c;
    printf("CALCULATOR\n");
    printf("Enter the 1st Number: ");
    scanf("%d",&a);
    printf("Enter the Operation: ");
    scanf("%s",&c);
    printf("Enter the 2nd Number: ");
    scanf("%d",&b);
    printf("%d %c %d",a,c,b);
    float m=calcy(a,c,b);
    printf(" = ");
    printf("%f",m);
    return 0;
}