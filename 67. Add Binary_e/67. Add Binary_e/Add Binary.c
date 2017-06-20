#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* reverseString(char* s) 
{
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
char* addBinary(char* a, char* b)
{
    int lena=0;
    int lenb=0;
    int i=0,j=0;
    int lenlong=0;
    int lenshort=0;
    int jin=0;
    char *strl,*strs;
	char *c;
    lena=strlen(a);
    lenb=strlen(b);
    if(lena>=lenb)
    {
        lenlong=lena;
        lenshort=lenb;
		strl=(char *) malloc(sizeof(char)*(lenlong+1));
        strcpy(strl,a);
		strs=(char *) malloc(sizeof(char)*(lenshort+1));
        strcpy(strs,b);
    }
    else
    {
        lenlong=lenb;
        lenshort=lena;
		strl=(char *) malloc(sizeof(char)*(lenlong+1));
        strcpy(strl,b);
		strs=(char *) malloc(sizeof(char)*(lenshort+1));
        strcpy(strs,a);
    }
    c=(char *) malloc(sizeof(char)*(lenlong+2));
    j=lenshort-1;
    for(i=lenlong-1;i>=0;i--,j--)
    {
        if(j<0)
        {
            c[lenlong-i-1]=strl[i]+jin;
        }
        else
        {
            c[lenlong-i-1]=strl[i]-'0'+strs[j]+jin;
        }
        if(c[lenlong-i-1]-'0'>=2)
        {
            c[lenlong-i-1]=c[lenlong-i-1]-2;
            jin=1;
        }
        else
        {
            jin=0;
        }
    }
    if(jin==1)
    {
		c[lenlong]='1';
		c[lenlong+1]='\0';
	}
	else
	{
		c[lenlong]='\0';
	}
	reverseString(c);
	free(strl);
	strl=NULL;
	free(strs);
	strs=NULL;
    return c;
}
int main()
{
	char *str1="0";
	char *str2="0";
	printf("%s",addBinary(str1,str2));
	return 0;
}