#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {

        long long col, row;
        cin >> col >> row;

        vector<long long> a(col);

        for (int i = 0; i < col; i++) {
            cin >> a[i];

        }
        sort(a.begin(), a.end());

        long long ans=0;

        for(int i=col-1,j=row; i>=0 && j>0; i--,j--){

                ans += a[i] * j;
                //cout<<a[i]*j<<endl;
        }
        cout << ans << "\n";
    }

    return 0;
}
