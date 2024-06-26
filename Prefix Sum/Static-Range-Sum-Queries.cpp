// author: remonHasan
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define VI vector < int > v;
#define PR pair < int, int >
#define RAB(i, a, b) for (int i = a; i < b; i++)
#define Brain for(auto &it:v)
#define PB push_back
#define IS getline(cin, s);
#define nl cout << "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAXN=4e5+5;
int cnt[MAXN];

const int N = 2e5 + 9;
long long pref_sum[N];
int a[N];

void prefixSum(int n, int q)
{
  for(int i=1;i<=n;i++) cin >> a[i];
  for(int i=1;i<=n;i++) pref_sum[i] = pref_sum[i-1] + a[i];
  while(q--){
    int l,r; cin>>l>>r;
    cout << pref_sum[r] - pref_sum[l-1] << endl;
  }
}

int main() {
  ios;
  int n,q; cin>>n>>q;
  prefixSum(n,q);
  return 0;
}
