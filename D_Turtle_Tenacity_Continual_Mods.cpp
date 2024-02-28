#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        
        bool ok = 0;

        for(int a:arr)
            if(a%arr[0])ok=1;
        if(arr[0]==arr[n-1] or (arr[0]==arr[1] and !ok))
            cout<<"NO\n";
        else
            cout<<"YES\n";

    }

    return 0;
}
