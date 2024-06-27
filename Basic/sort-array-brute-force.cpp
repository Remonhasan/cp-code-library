/*
 Author : remonhasan
 concept used : https://codeforces.com/problemset/problem/1896/A
*/
#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
using lli = long long int;
using vi = vector<int>;
using vl = vector<long long>;
#define pb push_back
#define nl '\n'
#define brain for(int i=0; i<n; i++)
#define IS getline(cin, s);
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void sortArray(vector<int>& a)
{
  int n = a.size();
  for(int i=0;i<n;i++) cin >> a[i];
  
  for (int i = 0; i < n - 1; ++i) {
    // Find the index of the minimum element in the unsorted part of the array
    int min_index = i;
    for (int j = i + 1; j < n; ++j) {
        if (a[j] < a[min_index]) {
            min_index = j;
        }
    }
    // Swap the found minimum element with the first element of the unsorted part
    int temp = a[i];
    a[i] = a[min_index];
    a[min_index] = temp;
  }

  for(int i : a) cout << i << " ";
}

signed main() {

  vector<int> a = {1,3,2,5,4};
  sortArray(a);

  return 0;
}