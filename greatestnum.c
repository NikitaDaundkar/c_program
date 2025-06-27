#include<stdio.h>
void main()
{
    int Num1=12;
    int Num2=15;
    int Num3=7;
    int Greatest=(Num1>Num2)?(Num2>Num3?Num2:Num3):(Num1>Num2?Num1:Num2);
    printf("Greatest %d",Greatest);
}