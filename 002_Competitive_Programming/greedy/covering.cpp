#include <bits/stdc++.h>
using namespace std;

struct Interval {
    int start;
    int end;
};

bool compareIntervals(const Interval a, const Interval b) {
    return a.end < b.end;
}

int main() {
	
	int n;
	cin >> n;
	
	vector<Interval> intervals(n);
	
	for(int i=0; i<n; ++i) {
	    cin >> intervals[i].start >> intervals[i].end;
	}
	
	sort(intervals.begin(), intervals.end(), compareIntervals);
	
	int count =1;
	int lastCovered = intervals[0].end;
	
	for(int i=0; i<n; ++i) {
	    if(intervals[i].start > lastCovered) {
	        count++;
	        lastCovered = intervals[i].end;
	    }
	}
	
	cout << count << endl;
}
