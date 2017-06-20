#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int firstUniqChar(char* s) {
    int i=0;
    int j=0;
    int len=0;
   // int ans=0;
    len=strlen(s);
//	char *p=(char *)malloc(len*sizeof(char));
//	memset(p,0,len*sizeof(char));
	if(len==1)
		return 0;
	for(i;i<len;i++)
	    for(j=0;j<len;j++)
	    {
	        if(s[i]==s[j])
			{
				if(i!=j)
				break;
			}
            if(j==len-1)
                return i;
	    }
	return -1;
}
int main()
{
	char *str="s";
	printf("%d\n",firstUniqChar(str));
	return 0;
}