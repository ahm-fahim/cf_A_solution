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
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> vb(n);
        vector<int> vc(m);

        for (int i = 0; i < n;i++)
            cin >> vb[i];

        for (int i = 0; i < m;i++)
            cin >> vc[i];

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m;j++){
                if(vb[i]+vc[j] <= k)
                    ans++;
            }
        }
        cout << ans << br;
    }

    return 0;
}