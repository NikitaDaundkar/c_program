#include<stdio.h>
#include<conio.h>
int main()
{
    char ch1,ch2,ch3,ch4,ch5,ch6,decision;
    printf("Enter Your  Name :");
    ch1=getch();
    ch2=getch();
    ch3=getch();
    ch4=getch();
    ch5=getch();
    ch6=getch();
    printf("\n");
    printf("Enter Y for Yes or N for No :");
    decision=getch();
    printf("\n");
    'Y'==decision?printf("Hello %c%c%c%c%c%c",ch1,ch2,ch3,ch4,ch5,ch6):printf("Hie %c%c%c%c%c%c",ch1,ch2,ch3,ch4,ch5,ch6);
}