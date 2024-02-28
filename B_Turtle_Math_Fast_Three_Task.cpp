#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int sum = 0, cnt = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        int rem = sum % 3;

        if (rem == 0) {
            cout << "0\n";
            continue;
        }else{
            int ans = 0;
            for (int i = 0; i < n; i++)
            {
                int rem = sum - arr[i];
                if (rem % 3 == 0)
                {
                    ans = 1;
                    break;
                }
            }
            if (ans == 1)
                cout << 1 << endl;
            else
            {
                int rem = 3 - (sum % 3);
                if (rem > 1)
                {
                    cout << 2 <<endl;
                }
                else
                {
                    cout << 1 << endl;
                }
            }
        }
    }

    return 0;
}
