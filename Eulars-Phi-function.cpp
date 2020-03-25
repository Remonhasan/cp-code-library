
/* Author : Remon Hasan
   Problem : Finding coPrime */

#include<iostream>
#include<stdio.h>
using namespace std;

int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    else
        gcd(b,a%b);
}

int main ()
{
    int n,count=0; //concept- suppose , n=24 -> coPrime-> gcd[1 to 24]==1 -> coPrime
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if((gcd(i,n))==1)
            count++;
    }
    printf("phi(%d) = %d\n",n,count);

}
