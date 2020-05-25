/* Author; Remon hasan
   University of Asia Pacific
   Algorithm : Extended Euclidean [ problem uva 10104 ]
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll eu(ll a, ll b, ll &x, ll &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    ll x1,y1;
    ll train=eu(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return train;
}


int main()
{
    ll a,b;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        ll x,y,z;
        z=eu(a,b,x,y);
        printf("%lld %lld %lld\n",x,y,z);
    }

    return 0;
}
