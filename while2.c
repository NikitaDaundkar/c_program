#include<stdio.h>
int main()
{
    int i=0;
    int j=1;
    int n,a,start;
    printf("Enter a value: ");
    scanf("%d %d",&start,&n);
    a=1;
    while(a<=n)
    {
        i=j;
        j=a;
        if (a>=start)
        {
            printf(" %d ",a);
        }
        a=i+j;
       
    }
}