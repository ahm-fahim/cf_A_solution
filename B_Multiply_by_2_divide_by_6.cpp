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
	while (t--) {
		int n;
		cin >> n;
		int a = 0, b = 0;
		while (n % 2 == 0) {
			n /= 2;
			++a;
		}
		while (n % 3 == 0) {
			n /= 3;
			++b;
		}
		if (n == 1 && a <= b) {
			cout << 2 * b - a << br;
		} else {
			cout << -1 << br;
		}
	}

    return 0;
}