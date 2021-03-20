/* Author: Remon Hasan
   University of Asia Pacific
*/

#include<iostream>
using namespace std;
#define ull unsigned int

int solve(int base,ull power,int mod)
{
	int ans=1;

	// if base is smaller than mod or equal, then update
	base = base % mod;
	if(base==0) return 0;

	while(power>0)
	{
		// if power is odd
		if(power&1){
			ans = (ans * base) % mod;
		}
		// otherwise power will be even
		power = power>>1;
		base = (base*base)%mod;

	}
	return ans;

}

int main ()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int base,power,mod;
	cin>>base>>power>>mod;
	cout<<solve(base,power,mod)<<endl;
}