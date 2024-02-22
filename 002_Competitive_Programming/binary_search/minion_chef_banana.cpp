#include <bits/stdc++.h>

using namespace std;

bool check(long long n, long long h, long long k, vector < long long > arr) {
    long long timeTaken = 0;
    for (long long i = 0; i < n; ++i) {
        timeTaken += (arr[i] + k - 1) / k;
    }
    return timeTaken <= h;
}


int main() {
    // your code goes here
    int t;
    cin >> t;

    const long long maxn = 1e5 + 25;

    while (t--) {
        long long n, h;
        cin >> n >> h;
        long long maxArr = 0;
        vector < long long > arr(maxn);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            maxArr = max(arr[i], maxArr);
        }
        long long l = 1, r = maxArr;
        long long ans = r;


        while (l <= r) {
            long long mid = (l + r) / 2;
            if (check(n, h, mid, arr)) {
                ans = min(ans, mid);
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }

}