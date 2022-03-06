#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    int len,i,temp;
    printf("Enter two string\n");
    gets(str1);
    gets(str2);
    strcat(str1,str2);
    len=strlen(str1);
    for(i=0;i<len/2;i++)
    {
        temp=str1[i];
        str1[i]=str1[len-i-1];
        str1[len-i-1]=temp;
    }
    printf("The reverse of string is:%s",str1);
    return 0;
}