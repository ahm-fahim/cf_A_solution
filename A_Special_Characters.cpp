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

        if(n%2 != 0){
            cout << "NO" << br;
            continue;
        }
        else
        {
            cout << "YES" << br;
            int i = 0;

            while(n){
                if(i%2==0){
                    cout << "AA";
                    i = 1;
                }else{
                    cout << "BB";
                    i = 0;
                }
                n -= 2;
            }
            cout << br;
        }
    }
    return 0;
}