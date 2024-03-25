
/****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****\
 |  Problems! Problems! Problems! I Don't Like It, I Avoid.             |
 |  But Problems Likes Me! I can't Avoid!                               |
 |                                                                      |
 |  * A.H.M. Fahim Morshed  *                                           |
 |  Github   - ahm-fahim                                                |
 |  Linkedin - https://www.linkedin.com/in/md-fahim-morshed-5b2126233/  |
 |  Gmail    - contactahmfahim@gmail.com                                |
\****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****/

#include <bits/stdc++.h>
using namespace std;
#define make_fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define br '\n';
#define all(x) x.begin(),x.end()
#define ll long long int
#define pb push_back

// input
void input(vector<ll>& arr, int n) {
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
// output
void output(vector<int>& arr, int n, int b) {
    if(b==1){
        for (int i = 0; i < n; i++)
        cout<< arr[i]<<" ";
    }else if(b==2){
        for (int i = 0; i < n; i++)
            cout<< arr[i]<<br;
    }
}

void Okay(bool x){
    cout << (x ? "YES" : "NO") << br;
}
//Solution 
void solution(){
    int n;
    cin >> n;

    vector<ll> a(n), b(n);
    input(a, n);
    input(b, n);

    ll x = *min_element(a.begin(), a.end());
    ll y = *min_element(b.begin(), b.end());

    ll sum1 = 0;
    ll sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        sum1 += a[i];
        sum2 += b[i];
    }
    cout << min(sum1+y*n,sum2+x*n)<<br;
}
int main()
{
    make_fast();
    int t;
    cin >> t;

    while(t--){
        solution();
    }

    return 0;
}