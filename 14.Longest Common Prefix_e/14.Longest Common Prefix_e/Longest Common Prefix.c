#include<stdio.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    char res[10000]={0};
    int i=0;
    int j=0;
    char ch=0;
	if(strsSize==0)return res;
    for(i;strs[0][i];i++)
    {
        
        ch=strs[0][i];
        for(j=1;j<strsSize;j++)
        {
            if(ch!=strs[j][i])
            return res;
        }
        res[i]=ch;
           
    }
    return res;
}
void main()
{
	char *strs_mn[]={"leets","leetcode","leet","leeds"};
	//char **strs_p=&strs_mn[0];
	int strsSize=4;
	printf("%s",longestCommonPrefix(strs_mn,strsSize));
}