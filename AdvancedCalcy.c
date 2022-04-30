#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long permutate();
long combinate();
long fact();
void addition()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The sum of the two numbers is: %d",a+b);
}
void subtraction()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The subtraction of the two numbers is: %d",a-b);
}
void multiplication()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The mmultiplicatiion of the two numbers is: %d",a*b);
}
void division()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    if(b!=0){
        printf("The division of the two numbers is: %d",a/b);
    }else
        printf("Denominator is zero and hence it goes upto infinity.");
}
void square()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("The square of the number is: %d",a*a);
}
void cube()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("The cube of the number is: %d",a*a*a);
}
void square_root()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    float res=sqrt(a);
    printf("The square root of the number is: %.2f",(float)res);
}
void factorial()
{
    int a,b=1;
    printf("Enter the number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
        b=b*i;
    printf("The factorial of the number is: %d",b);
}
void permutation()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The permutation of the two numbers is: %d",permutate(a,b));
}
long permutate(int a,int b)
{
    return fact(a)/fact(a-b);
}
    long fact(int num){
        long long fact = 1;
        while(num > 0)
        {
            fact *= num;
            num--;
        }
        return fact;
    }
void combination()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The combination of the two numbers is: %d",combinate(a,b));
}
    long combinate(int a,int b)
    {
        return permutate(a,b)/fact(b);
    }
int main()
{
    printf("\n\t\t\tAdvanced Calculator\n");
    printf("\t1.ADDITION\n");
    printf("\t2.SUBTRACTION\n");
    printf("\t3.MULTIPLICATION\n");
    printf("\t4.DIVISION\n");
    printf("\t5.SQUARE\n");
    printf("\t6.CUBE\n");
    printf("\t7.SQUARE ROOT\n");
    printf("\t8.FACTORIAL\n");
    printf("\t9.PERMUTATION\n");
    printf("\t10.COMBINATION\n");
    printf("\tPress 0 if you want to quit.\n");
    int option;
    while(1){
        printf("\n\tChoose the option for Operation: ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                square();
                break;
            case 6:
                cube();
                break;
            case 7:
                square_root();
                break;
            case 8:
                factorial();
                break;
            case 9:
                permutation();
                break;
            case 10:
                combination();
                break;
            case 0:
                exit(0);
        }
    }
    return 0;
}
