/*
    In the Name of Allah
    Author: Remon Hasan
    University of Asia Pacific
    Problem: UVA-1230 - Binary Exponentiation
*/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

#define ll long long
#define lli long long int
#define ULL             unsigned long long
#define ff              first
#define ss              second
#define pb              push_back
#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)
#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())
#define MEM(a,x)        memset(a,x,sizeof(a))
#define E "\n"
#define pb              push_back
typedef vector<int> v;
typedef vector<bool>B;

ll mod;

ll solve(ll base,ll power)
{
    if(power == 0) return 1;
    if(power % 2 == 0)
        return ((solve(base, power / 2)) * (solve(base, power / 2))) % mod;
    else
        return (base * solve(base, power - 1)) % mod;
}

int main ()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
/*
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
*/
	int t;
	cin>>t;
	while(t--){

	ll base,power;
	cin>>base>>power>>mod;
	cout<<solve(base,power)<<endl;

	}	
}