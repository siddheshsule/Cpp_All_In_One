
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        long long n,q;
        cin >> n >> q;
        vector<long long> arr(q);
        for(int i=0; i< q; ++i) {
            cin >> arr[i];
        }        
        
        sort(arr.begin(), arr.end());

        long long low =0, high =n;

        long long mid;
        while (low < high) 
        {
            /* code */
            mid = (high +low)/2;

        }
         
    }

}
