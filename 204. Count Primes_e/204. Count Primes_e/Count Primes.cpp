#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int countPrimes(int n) {
    char *p=(char *)malloc(n*sizeof(char));
    memset(p,0,n*sizeof(char));
    int i=1;
    int j=0;
    int count=0;
    if(n==0||n==1||n==2)
    return 0;
    if(n==3)
    return 1;
    for(i=2;i*i<=n;i++)
    {
        if(p[i-1]==0)
        {
            j=i;
            while(j*i<=n)
            {
                p[j*i-1]=1;
				j++;
            }
        }
    }
    for(i=2;i<n;i++)
        if(p[i-1]==0)
            count++;
    return count;
}
int main()
{
int test=10;
printf("%d",countPrimes(test));
}