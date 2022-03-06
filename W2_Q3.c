#include<stdio.h>
int main()
{
    int ld,fd,md, n, p, x;
    scanf("%d",&n);
    ld=n%10;
    p=n/10;
    x=1;
    while(p>0)
    {
        x=x*10;
        p=p/10;
    }
    fd=n/x;
    md=(n%x)/10;
    printf("%d%d%d",ld,md,fd);
    return 0;
}