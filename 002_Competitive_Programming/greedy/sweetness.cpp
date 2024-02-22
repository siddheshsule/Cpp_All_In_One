#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> songs(n);
        vector<int> orderedLength;

        for (int i = 0; i < n; i++)
        {

            cin >> songs[i].first >> songs[i].second;
        }
        sort(songs.begin(), songs.end());

        long long int sum = 0, total = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i == 0 || songs[i - 1].first < songs[i].first)
            {
                orderedLength.push_back(songs[i].second);
            }
            else
                total += songs[i].second;
        }

        sum += total * orderedLength.size();

        sort(orderedLength.begin(), orderedLength.end());

        for (int i = 0; i < orderedLength.size(); ++i)
        {
            sum += (long long int)(i + 1) * orderedLength[i];
        }
        cout << sum << endl;
    }
}