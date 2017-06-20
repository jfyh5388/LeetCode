#include<stdio.h>
int myAtoi(char* str) {
    int i;
    long long int ans=0;
    int sign=1;
	int first=1;
	int sign_already=0;
	for(i=0;str[i]==' ';i++);
	if(str[i]=='+')
	{
		sign=1;
		i++;
	}
	else if(str[i]=='-')
	{
		sign=-1;
		i++;
	}
    for(;str[i]!='\0';i++)
    {
        if(str[i]<='9'&&str[i]>='0')
		{
			ans=ans*10+str[i]-'0';
			//first=0;
			if(sign==+1&&ans>(long long int)0x7fffffff)
			{
				ans=0x7fffffff;
				break;
			}
			if(sign==-1&&(-ans<(long long int)0xffffffff80000000))
			{
				ans=0x80000000;
				break;
			}
		}
		else
			break;
    }
    if(sign==-1)
    ans=-ans;
	/*if(ans>(long long int)0x7fffffff)
		ans=0x7fffffff;
	if(ans<(long long int)0xffffffff80000000)
		ans=0x80000000;*/
    return (int)ans;
}
void main()
{
	char *s="+-1";
	printf("%d",myAtoi(s));
	/*long long int a=0x7fffffff;
	long long int b=0xffffffff80000000;
	if(a>b)
		printf("a>b");
	if(a<b)
		printf("a<b");*/
}