#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* strlwr_my(char *s1)
{
    char *re=s1;
    if(s1==NULL)
    return s1;
    while(*s1)
    {
        if(*s1>='A'&&*s1<='Z')
        {
            *s1=*s1+32;
        }
        s1++;
    }
    return re;
}
bool isPalindrome(char* s) {
    int len=0,len2=0;
    int start=0;  
	int end=0;
	int compare1=0;
	int compare2=0;
	char ch_fom=0;
	char ch_lat=0;
	bool ans=true;
	len=strlen(s);
	end=len-1;
	if(s==NULL)
	return true;
	while(start<end)
	{
		if((s[start]>='a'&&s[start]<='z')||(s[start]>='0'&&s[start]<='9')||(s[start]>='A'&&s[start]<='Z'))
		{
			ch_fom=s[start];
			if(ch_fom>='A'&&ch_fom<='Z')
				ch_fom=ch_fom+32;
			compare1=1;
		}
		if((s[end]>='a'&&s[end]<='z')||(s[end]>='0'&&s[end]<='9')||(s[end]>='A'&&s[end]<='Z'))
		{
			ch_lat=s[end];
			if(ch_lat>='A'&&ch_lat<='Z')
				ch_lat=ch_lat+32;
			compare2=1;
		}
		if(compare1==1&&compare2==1)
		{
				if(ch_fom!=ch_lat)
				{
					ans=false;
					break;
				}
				else
				{
					compare1=0;
					compare2=0;
					start++;
					end--;
				}
		}
		else if(compare1==1&&compare2==0)
			end--;
		else if(compare1==0&&compare2==1)
			start++;
		else if(compare1==0&&compare2==0)
		{
			start++;
			end--;
		}
				
		
	}
    return ans;
}
int main()
{
	char *str="race a car";
	printf(isPalindrome(str)?"true":"false");	
}