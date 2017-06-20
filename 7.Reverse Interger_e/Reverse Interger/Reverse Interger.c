#include<stdio.h>
int reverse(int x) {
    long long int result=0;
    int i;
    int m=x;
    for(;x;x=x/10)
		result=result*10+x%10;
    if(result>0&&result>(long long int)0x7FFFFFFF)
		result=0;
    if(result<0&&result<(long long int)0xFFFFFFFF80000000)//if(result<0&&result<(long long int)-2147483648)
		result=0;
    return (int)result;
}
void main()
{
int n=-123;
printf("%d",reverse(n));
}