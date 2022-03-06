#include<stdio.h>
int main()
{
    int i, S1,S2;
    S1=0;
    S2=0;
    int A[10];
    printf("Enter 10 integers\n");
    for(i=0;i<10;i++)
    {
    scanf("%d", &A[i]);
    if(A[i]%2==0)
        S1=S1+A[i];
    else
        S2=S2+A[i];
    }
    printf("The sum of even number is:%d \n",S1);
    printf("The sum of odd number is:%d\n",S2);
    
    return 0;
}