#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        vec.push_back(num);
    }

    int q;
    cin >> q;

    int zize = vec.size();

    for (int j = 0; j < q; j++) {
        int query;
        cin >> query;
        
        auto it = lower_bound(vec.begin(), vec.end(), query);

        if (it != vec.end() && *it == query) {
            cout << "Yes " << (it - vec.begin() + 1) << endl;
        } else {
            cout << "No " << (it - vec.begin() + 1) << endl;
        }
    }
}