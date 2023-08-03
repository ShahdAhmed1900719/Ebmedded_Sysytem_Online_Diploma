#include <stdio.h>
#include <stdlib.h>
//ex1
void odd_or_even()
{
    printf("Enter an integer you want to check:");
    int i;
    scanf("%d",&i);
    if(i%2==0)
        printf("%d is even",i);
    else
        printf("%d is odd",i);

}
//ex2
void vowel_or_consonant()
{
    printf("Enter an alphabet:");
    char i;
    scanf("%c",&i);
    if(i=='a' || i=='A' || i=='e' ||i=='E' ||i=='i' || i=='I' ||i=='o' ||i=='O' ||i=='u' |i=='U')
        printf("%c is vowel",i);
    else
        printf("%c is consonant",i);

}
//ex3
void largest_number()
{
    float a,b,c;
    printf("Enter three numbers:");
    scanf("%f %f %f",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("Largest number = %.2f",a);
        else
            printf("Largest number = %.2f",c);
    }
    else
    {
        if(b>c)
            printf("Largest number = %.2f",b);
        else
            printf("Largest number = %.2f",c);
    }
}
//ex4
void pos_or_neg()
{
    float a;
    printf("Enter a number:");
    scanf("%f",&a);
    if(a>0)
    {

            printf("%.2f is positive",a);
    }
    else if(a<0)
    {

            printf("%.2f is negative",a);
    }
    else
        printf("You entered zero");
}
//ex5
void is_alphabet()
{
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    if((a<91 && a>64)|| (a<123 && a>96))
    {

            printf("%c is an alphabet",a);
    }

    else
        printf("%c is not an alphabet",a);
}
//ex6
void sum_of_natural_num()
{
    int a;
    int sum=0;
    printf("Enter an integer:");
    scanf("%d",&a);
    for(int i=1;i<a+1;i++)
    {
        sum+=i;
    }
    printf("sum = %d",sum);
}
//ex7
void factorial()
{
    int a;
    int fact=1;
    printf("Enter an integer:");
    scanf("%d",&a);
    if(a==0)
        printf("Factorial = %d",1);
    else if(a<0)
        printf("Error!!! Factorial of negative number dosen't exist.");
    else
    {
        for(int i=a;i>0;i--)
        {
            fact*=i;
        }
        printf("Factorial = %d",fact);

    }

}
//ex8
void calculator()
{
    char op;
    float a,b;
    printf("Enter operator either + or - or * or divide:");
    scanf("%c",&op);
    printf("Enter two operands:");
    scanf("%f %f",&a,&b);
    switch(op)
    {
    case'+':
    {
        printf("%.1f %c %.1f = %.1f",a,op,b,a+b);
        break;
    }
    case'-':
    {
        printf("%.1f %c %.1f = %.1f",a,op,b,a-b);
        break;
    }
    case'*':
    {
        printf("%.1f %c %.1f = %.1f",a,op,b,a*b);
        break;
    }
    case'/':
    {
        printf("%.1f %c %.1f = %.1f",a,op,b,a/b);
        break;
    }
    }
}



int main()
{
    calculator();
    return 0;
}
