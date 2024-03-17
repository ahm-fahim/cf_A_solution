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


int main()
{
    make_fast();
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector < pair <int, int> > vp;

        for (int i = 0; i < n;i++){
            int a, b;
            cin >> a >> b;
            vp.push_back({a,b});
        }

        int ans = INT_MAX;

        for (int i = 0; i < vp.size(); i++)
            ans = min(vp[i].first + (vp[i].second - 1) / 2, ans);

        cout << ans << br;

    }

    return 0;
}