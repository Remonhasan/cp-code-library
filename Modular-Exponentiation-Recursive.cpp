/* Author: Remon Hasan
   University of Asia Pacific
*/

#include<iostream>
using namespace std;
#define ull unsigned int

int solve(int base,int power,int mod)
{
	
    // Base Case
	if(base==0) return 0;
	if(power==0) return 1;

    long y;
    
    // if power is even
    if(power>>1){
    	y = solve(base,power/2,mod);
    	y = (y*y) % mod;
    }else{
    	// power is odd
    	y = base % mod;
    	y = (base*(solve(base,power-1,mod)) % mod);
    }
    return (int)((y+mod)%mod);

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