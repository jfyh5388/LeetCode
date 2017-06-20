#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compareVersion(char* version1, char* version2) {
    char delims[] = ".";
	char ss1[500]={0};
	char ss2[500]={0};
	char *result1=ss1;
	char *result2=ss2;
	char s1[500][10];
	char s2[500][10];
    int in1=0,in2=0;
	int count1=0,count2=0;
	int loop=0;
	int j=0;
	memset(s1,0,5000*sizeof(char));
	memset(s2,0,5000*sizeof(char));
	strcpy(ss1, version1 );
	strcpy(ss2, version2 );
    result1 = strtok( ss1, delims );
	for(; result1 != NULL ;count1++) 
	{
    strcpy(s1[count1], result1 );
	result1 = strtok( NULL, delims );
	}
	result2 = strtok( ss2, delims );
	for(;result2!=NULL;count2++)
	{
		strcpy(s2[count2], result2 );
		result2 = strtok( NULL, delims );
	}
	loop=(count1>count2)?count1:count2;
	for(;j<loop;j++)
	{
		in1=atoi(s1[j]);
		in2=atoi(s2[j]);
		if(in1>in2)
			return 1;
		else if(in1<in2)
			return -1;

	}
	return 0;
   
}
void main()
{
	char *str1="19.8.3.17.5.01.0.0.4.0.0.0.0.0.0.0.0.0.0.0.0.0.00.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.000000.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.000000";
	char *str2="19.8.3.17.5.01.0.0.4.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0000.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.000000";
	printf("%d",compareVersion(str1,str2));
}