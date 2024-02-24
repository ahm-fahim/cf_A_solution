#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long findApocalypseYear(int n, const vector<int>& arr) {
    long long max_year = arr[0];

    for (int i = 1 ; i < n; ++i) {
        max_year = max(max_year, (long long)arr[i] * (i+1));
    }

    return max_year;
}

int main() {
    int t;
	cin>>t;
	while (t--){
        int p, x, n;
        
        cin >> n;
        cin>>p;
		n--;
		while (n--){
			cin>>x;
			p=p-p%x+x;
		}
		cout<<p<<endl;
	}

    return 0;
}
