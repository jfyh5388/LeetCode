#include<stdio.h>
#include<string.h>
bool isValid(char* s) {
    int len=0;
    int i=0;
    len=strlen(s);
	char s2[100]={0};
	char before[100]={0};
    char behind[100]="";
	strcpy(s2,s);
    if(len==0)return true;
    if(len%2!=0)return false;
	while(len)
	{
        for(i=0;i<len;i++)
        {
            if(s2[i]=='('&&s2[i+1]==')')break;    
            else if(s2[i]=='['&&s2[i+1]==']')break;
            else if(s2[i]=='{'&&s2[i+1]=='}')break;    
            else if(i==len-2)return false;			
        }
		strncpy(before,s2,i);
        strncpy(behind,s2+i+2,len-i-2);
        strcat(before,behind);
		strcpy(s2,before);
        len=strlen(s2);
		memset(before,0,100*sizeof(char));
		memset(behind,0,100*sizeof(char));	
	}       
	return true;
}
void main()
{
	char *st="[(])";
	printf("%s",isValid(st)==true?"true":"false");
}