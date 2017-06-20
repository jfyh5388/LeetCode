#include<stdio.h>
bool huiwen(int x) 
{
    int len=0,i,m=0,n=0,di=1;
    if(x<0)
    return false;
    else
    {
        for(;x;x=x/10,len++);
        if(len==1) return true;
        while(len-1)
        {
            di=di*10;
            len--;
        }
        m=x%10;
        n=x/di;
        if(m!=n)return false;
        else
        {
            x=x%di/10;
            if(x==0)return true;
            else
            return huiwen(x);
        }
    }    
}
void main()
{
	int a=1234;
	bool t=true;
	printf("%s",huiwen(a)==t?"ture":"false");

}