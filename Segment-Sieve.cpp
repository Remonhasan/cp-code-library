/* Author: Remon Hasan
   Algorithm: Segment Sieve
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define SIZE 32000
#define pb push_back

vector<int>primes;

void SieveBrain(){
   bool isPrime[SIZE];
   for(int i=0;i<SIZE;i++) isPrime[i]=true;
   for(int i=3;i*i<=SIZE;i+=2){
    if(isPrime[i]){
        for(int j=i*i;j<=SIZE;j+=i){
            isPrime[j]=false;
        }
    }
   }
   primes.pb(2);
   for(int i=3;i<SIZE;i+=2){
    if(isPrime[i]) primes.pb(i);
   }
}

void SegSieve(ll left,ll right){
    bool isPrime[right-left+1];
    for(int i=0;i<right+left-1;i++) isPrime[i]= true;
    if(left == 1) isPrime[0] = false;
    for(int i=0;primes[i]*primes[i]<=right;i++){
        int nowPrime = primes[i];
        ll base = (left/nowPrime)*nowPrime;
        if(base < 1) base = base + nowPrime;
        for(ll j = base; j<=right ; j= j+nowPrime){
            isPrime[j-1] = false;
        }
        if(base == nowPrime) isPrime[base-1] = true;
    }
    for(int i=0; i<right-left+1;i++){
        if(isPrime[i]) cout<< (i+1) <<endl;
    }
    puts("");
}

int main (){

  SieveBrain();
  int t;
  cin>>t;
  while(t--){
    ll left,right;
    cin>>left>>right;
    SegSieve(left,right);
  }
  return 0;
}
