#include<stdio.h>
int main()
{
    int a, b, c,i;
    int N;
    printf("Enter the number of elements:");
    scanf("%d",&N);
    a=0;
    b=1;
    printf("\n%d %d ",a,b);
    for(i=2;i<N;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}

    