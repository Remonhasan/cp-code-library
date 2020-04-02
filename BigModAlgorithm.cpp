
/* Author: Remon Hasan
   Algorithm: BigMod */

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll BigMod(ll base, ll power, ll mod)
{
    if(power==0)
        return 1;

    else if(power%2==1) // if power is odd
    {
        int a = base % mod;
        int b = (BigMod(base,power-1,mod))%mod;
        return (a*b)%mod;
    }
    else if(power%2==0) // if power is even
    {
        int a = (BigMod(base,power/2,mod))%mod;
        return (a*a)%mod;N
    }
}

int main ()
{

    ll base,power,mod;
    cin>>base>>power>>mod;
    cout<<BigMod(base,power,mod)<<endl;
    return 0;
}



