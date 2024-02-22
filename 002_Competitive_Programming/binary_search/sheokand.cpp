#include <bits/stdc++.h>

using namespace std;

vector<long long> preCalculate() {
    vector<long long> validM;
    set<long long> s;
    for(long long x=0; x<=30; x++) {
        for(long long y=0; y<=30;++y) {
            if(x==y) continue;
            long long t=(1LL << x) + (1LL << y);
            s.insert(t);
        }
    }
    for(auto x: s) {
        validM.push_back(x);
    }
    return validM;
}

long long solve(vector<long long> validM, long long n) {
    auto next=lower_bound(validM.begin(), validM.end(), n);
    auto prev=upper_bound(validM.begin(), validM.end(), n);
    prev--;

    return min(abs(n-(*next)), abs(n-(*prev)));
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    vector<long long> validM = preCalculate();
    while (t--) {
        long long n;
        cin >> n;
        long long ans = solve(validM, n);
        cout << ans << endl;
    }
}