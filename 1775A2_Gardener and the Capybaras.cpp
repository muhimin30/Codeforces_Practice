#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int main()
{
	bismillah();

	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = s.size();
		string a, b, c;
		a.push_back(s[0]);
		bool a_done = false, b_done = false;
		for(int i = 1; i < n; i++){
			//push to a
			if(s[i] >= a.front() && !a_done){
				b.push_back(s[i]);
				a_done = true;
			}
			else if(a_done && !b_done){
				if(b.front() > s[i]){
					c.push_back(s[i]);
					b_done = true;
				}
				else if(b.front() == s[i]){
					if(n - (i + 1) < b.size()){
						c.push_back(s[i]);
						b_done = true;
					}
					else{
						b.push_back(s[i]);
					}
				}
				else{
					b.push_back(s[i]);
				}
			}
			else if(a_done && b_done){
				c.push_back(s[i]);
			}
			else{
				a.push_back(s[i]);
			}
		}

		if(a <= b && b >= c && a.size() > 0 && b.size() > 0 && c.size() > 0){
			cout << a << ' ' << b << ' ' << c << endl;
		}
		else{
			string a1, b1, c1;
			a1.push_back(s[0]);
			a_done = false, b_done = false;
			for(int i = 1; i < n; i++){
				//push to a
				if(s[i] <= a1.front() && !a_done){
					b1.push_back(s[i]);
					a_done = true;
				}
				else if(a_done && !b_done){
					if(b1.front() <= s[i]){
						c1.push_back(s[i]);
						b_done = true;
					}
				}
				else if(a_done && b_done){
					c1.push_back(s[i]);
				}
				else{
					a1.push_back(s[i]);
				}
			}
			if(a1 >= b1 && b1 <= c1 && a1.size() > 0 && b1.size() > 0 && c1.size() > 0){
				cout << a1 << ' ' << b1 << ' ' << c1 << endl;
			}
			else{
				cout << ": (" << endl;
			}
		}
	}

	return 0;
}
