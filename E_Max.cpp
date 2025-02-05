#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
int n;
    cin >> n; 

    int maxValue = -1e9; // Initialize to a very small number

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > maxValue) {
            maxValue = x; 
        }
    }

    cout << maxValue << endl;

    return 0;
}