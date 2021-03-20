/* Author: Remon Hasan
   Algorithm: Sieve of Eratosthense
   Problem: Find all primes within given range
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void sieve(ll N)
{
    bool prime[N+1];
    memset(prime,true,sizeof(prime));
    for(int i=2; i*i<=N; i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=N; j+=i)
            {
                prime[j]=false;
            }
        }
    }
    for(int i=2; i<=N; i++)
    {
        if(prime[i])
            cout<<i<<endl;
    }
}

int main ()
{
    ll a;
    cin>>a;
    sieve(a);
}
