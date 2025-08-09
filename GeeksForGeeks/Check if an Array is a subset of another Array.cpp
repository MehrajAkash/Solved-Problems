#include <bits/stdc++.h>
using namespace std;

bool isSubset(vector<int>& a, vector<int>& b) {

    // Sort both arrays
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;

    // Traverse both arrays using two pointers
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            i++;
        }
        else if (a[i] == b[j]) {
            i++;
            j++;
        }
        else {
            // If element in b is not found in a
            return false;
        }
    }

    // If we have traversed all elements in b, it is a
    // subset
    return (j == b.size());
}

int main() {
    vector<int> a = { 11, 1, 13, 21, 3, 7 };
    vector<int> b = { 11, 3, 7, 1 };

    if (isSubset(a, b)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}

/**
Time Complexity: O(m log m + n log n)
Auxiliary Space: O(1)
**/
