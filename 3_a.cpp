
/****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****\
 |  Problems! Problems! Problems! I Don't Like It, I Avoid.             |
 |  But Problems Likes Me! I can't Avoid!                               |
 |                                                                      |
 |  A.H.M. Fahim Morshed                                                |
 |                                                                      |
 |  ```Is a competitive programming enthusiast who is deeply            |
 |  passionate about coding. Hailing from Bogura, Bangladesh,           |
 |  his coding journey started at a young age, driven by a              |
 |  fascination for solving intricate problems.                         |
 |                                                                      |
 |  Fahim has excelled in competitive programming, consistently         |
 |  ranking among the top participants in various                       |
 |  contests.Beyond competitions, he shares his                         |
 |  expertise by mentoring and assisting fellow                         |
 |  programmers on online forums.                                       |
 |                                                                      |
 |  His dedication to self-improvement, willingness to embrace new      |
 |  challenges, and effective teamwork make him a valuable              |
 |  asset to any project.                                               |
 |                                                                      |
 |  Fahim's love for coding, combined with his diverse interests,       |
 |  reflects his well-rounded personality, making him an inspiring      |
 |  figure in the programming community at Southeast University.```     |
 |                                                                      |
 |  Github   - ahm-fahim                                                |
 |  Linkedin - https://www.linkedin.com/in/md-fahim-morshed-5b2126233/  |
 |  Gmail    - contactahmfahim@gmail.com                                |
\****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
#define ll long long int
int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll odd = 0, even = 0;

        for (ll i = 1; i <= n; i++)
        {
            ll p;
            cin >> p;
            (p % 2) ? odd++ : even++;
        }

        if (!odd)
        {

            cout << "No" << endl;
        }
        else
        {
            k--;
            odd--;

            while (k > 0)
            {
                if (odd >= 2 && k >= 2)
                    odd -= 2, k -= 2;
                else if (even)
                    even--, k--;
                else
                    break;
            }
            (k) ? cout << "No\n" : cout << "Yes\n";
        }
    }

    return 0;
}
// Problem link
// https://codeforces.com/contest/1363/problem/A