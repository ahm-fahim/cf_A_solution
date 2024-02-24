
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

ll count(string s,string pat){
	ll k=0;
	for(ll i=0;i<s.length();i++)
		if(s.substr(i,pat.length())==pat)
			k++;
	return k;
}

int main()
{
    optimize();
    
    ll t;
	cin>>t;
	read:
	while(t--){
		ll n;
		cin>>n;
 
		string s,pat="abacaba";
		cin>>s;
 
		for(ll i=0;i+pat.size()<=n;i++){
			string ss=s;
			ll ok=1;
			for(ll j=0;j<pat.size();j++){
				if(ss[i+j]!='?' && ss[i+j]!=pat[j]){
					ok=0;
					break;
				}
				ss[i+j]=pat[j];
			}
			if(ok && count(ss,pat)==1){
				for(i=0;i<n;i++){
					if(ss[i]=='?') ss[i]='d';
				}
				cout<<"Yes \n"<< ss<<endl;
				goto read;
			}
		}
		cout<<"No"<<endl;
	}


    return 0;
}

