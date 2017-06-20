#include<stdio.h>
#include<string.h>
char* reverseString(char* s) {
    char temp;
    int len=0;
    int i=0;
    len=strlen(s);
    for(i=0;i<len/2;i++)
    {
        temp=s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=temp;
    }
    return s;
}
void main()
{
char str[]="";
printf("%s",reverseString(str));
}