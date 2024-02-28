
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
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()

int main()
{
    optimize();
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n;i++)
            cin >> arr[i];

        int even=0, odd = 0;
        for (int i = 0; i < n; i++)
            (arr[i] % 2 == 0)?even++:odd++;
        
        int first_num = arr[0];

        if(even==n || odd==n){
            cout << "YES" << endl;
            continue;
        }

        if(even<=odd && first_num % 2 != 0){
            for (int i = 1; i <= n;i+=2)
                arr[i] += 1;
        }else{
            for (int i = 0; i < n;i+=2)
                arr[i] += 1;
        }

        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
            (arr[i] % 2 == 0)?cnt1++:cnt2++;
        
        cout << ((cnt1==n || cnt2==n) ? "YES" : "NO") << endl;
    }
    return 0;
}

