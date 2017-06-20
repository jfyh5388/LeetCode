#include<stdio.h>
#include<string.h>
int strStr(char* haystack, char* needle) 
{
    int i,j,m;
    int len1=0;
    int len2=0;
    int find=0;
    int index=0;	
    len1=strlen(haystack);
    len2=strlen(needle);
	if(len2==0)return 0;
	if(len1<len2)return -1;
    for(i=0;i<=len1-len2;i++)
    {
        for(j=0,m=i;j<len2;j++,m++)
        {
            if(needle[j]!=haystack[m])
            break;
            else if(j==len2-1)
            {
                find=1;
                index=m-len2+1;
            }
        }
        if(find==1)
        break;
    }
    return (find==1)?index:-1;        
}
int main()
{
	char *s1="";
	char *s2="";
	printf("%d",strStr(s1,s2));
}