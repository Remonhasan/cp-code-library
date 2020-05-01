/* Author: Remon Hasan
   Algorithm: Prime Fectorization
*/
#include<bits/stdc++.h>
using namespace std;

void primefectors(int N)
{
    while(N%2==0)
    {
        cout<<2<<" ";
        N= N/2;
    }

    for(int i=3;i<=sqrt(N);i=i+2){
        while(N%i==0){
            cout<<i<<" ";
            N=N/i;
        }
    }
    if(N>2)
        cout<<N<<" ";
}

int main ()
{
    int N;
    cin>>N;
    primefectors(N);
    return 0;
}
