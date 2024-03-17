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

        string s;
        cin >> s;

        string s1 = "pie", s2 = "map";

        int ans = 0;
        for (int i = 0; i < n - 2; i++)
            if ((s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') ||(s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e'))
                ++ans,s[i+2]='x';
        cout << ans<<br;
    }
    return 0;
}