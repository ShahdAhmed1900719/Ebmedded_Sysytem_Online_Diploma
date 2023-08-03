#include <stdio.h>
#include <stdlib.h>

//ex1
void print_sentence(char* s)
{
    printf(s);
}
//ex2
void print_int()
{
    int i;
    printf("Enter a integer:");
    scanf("%d",&i);
    printf("You entered: %d",i);

}
//ex3
void sum_two_int()
{
    int a,b;
    printf("Enter two integers:");
    scanf("%d" "%d",&a,&b);
    printf("sum: %d",a+b);

}
//ex4
void mul_two_float()
{
    float a,b;
    printf("Enter two integers:");
    scanf("%d" "%d",&a,&b);
    printf("sum: %d",a*b);

}
//ex5
void find_asci()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    printf("ASCII value of G =%d",c);

}
//ex6
void swap_two_num()
{
    float a,b,temp;
    printf("Enter value of a:");
    scanf("%f",&a);
    printf("Enter value of b:");
    scanf("%f",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping, value of a =%.2f\n",a);
    printf("After swapping, value of a =%.2f",b);

}
//ex7
void swap_two_num_withot_temp()
{
    float a,b,temp;
    printf("Enter value of a:");
    scanf("%f",&a);
    printf("Enter value of b:");
    scanf("%f",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping, value of a =%.2f\n",a);
    printf("After swapping, value of a =%.2f",b);

}


int main()
{
    swap_two_num_withot_temp();

    return 0;
}
