#include <bits/stdc++.h>
using namespace std;

class Heap {
    public:
        vector<int> v;
        void insert(int value) {
            v.emplace_back(value);
            int cur_index = v.size() - 1;

            while (cur_index != 0) {
                int parent_index = (cur_index - 1) / 2;

                if(v[parent_index] >v[cur_index]) {
                    swap(v[parent_index], v[cur_index]);
                }
                cur_index = parent_index;
            }           

        }
};