/*
	author: remonhasan
	problem: remove duplicates elements 
	complexity: O(n^2)
	optimize: using hash table we can optimize it. complexity will be O(n)
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int>a(n);
	    for(int i=0;i<n;i++) cin >> a[i];
	    
	    vector<int> final(0,n);
	    
	    for(int i=0;i<n;i++){   // loop 1 -> O(n) 
	        bool isUnique = true;
	        for(int j = i+1;j<n;j++){  // loop 2  -> O(n) 
	            if(a[i] == a[j]){
	                isUnique = false;
	                break;
	            }
	        }
	        
	        if(isUnique) final.push_back(a[i]);
	    }
	    
	    for(int i : final) cout << i << " ";
	    cout << endl;
	}
	
	return 0;

}
