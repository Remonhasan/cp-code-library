// Problem Link : https://codeforces.com/contest/1881/problem/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
void primeFector(int x, map<int, int>&factors){
    int i = 2;
    while(i * i <= x){
        while (x % i == 0){
            factors[i]++;
            x /= i;
        }
        i++;
    }
    if(x > 1) factors[x]++;
}
 
void solve(){
    int n;
    cin >> n;
    
    vector<int>a(n);
    map<int,int>factor;
    
    for(int i=0;i<n;i++){
        cin >> a[i];
        primeFector(a[i],factor);
    }
    
    bool isOk = true;
    for(auto it : factor){
        if(it.second % n != 0) isOk = false;
    }
    
    cout << (isOk ? "YES" : "NO") << '\n';
    
}
 
int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
 
}
