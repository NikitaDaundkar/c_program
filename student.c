#include<stdio.h>
int main()
{
    int SR_NO,STD;
    char STUDENT_NAME[10],ADDRESS[10];
    do
    {
     printf("Enter the SR_NO :",SR_NO);
     scanf("%d",&SR_NO);
     printf("Enter the STUDENT_NAME :");
     scanf("%s",&STUDENT_NAME);
     printf("Enter the STD:");
     scanf("%d",&STD); 
     printf("Enter the ADDRESS :");
     scanf("%s",&ADDRESS); 
     printf("STUDENT_SR_NO: %d\n",SR_NO);
     printf("STUDENT_NAME: %s\n",STUDENT_NAME);
     printf("STD: %d\n",STD);
     printf("STUDENT_ADDRESS: %s",ADDRESS);
    } while (0);
} 


