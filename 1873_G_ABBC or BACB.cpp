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
		string s1 = s;
		int n = s.size();
		vector<int> num1(n);
		vector<int> num2(n);
		int cnt1 = 0, cnt2 = 0;
		for(int i = 0; i < s.size() - 1; i++){
			
			if((s[i] == 'A' && s[i + 1] == 'B')){
					s[i] = 'B';
					s[i + 1] = 'C';
					cnt1++;
					if(i > 0){
						if(s[i - 1] == 'A') cnt1++; 
					}
			}
			else if((s[i] == 'B' && s[i + 1] == 'A')){
					s[i] = 'C';
					s[i + 1] = 'B';
					cnt1++;			
			}

			num1[i + 1] = cnt1;
		}

		s = s1;
		for(int i = s.size() - 1; i > 0; i--){
			
				
			if((s[i - 1] == 'A' && s[i] == 'B')){
				s[i - 1] = 'B';
				s[i] = 'C';
				cnt2++;

			}
			else if((s[i - 1] == 'B' && s[i] == 'A')){
				s[i - 1] = 'C';
				s[i] = 'B';
				cnt2++;
				num2[i - 1] = cnt2;
				if(i < s.size()) i++;
				continue;
			}

			num2[i - 1] = cnt2;
		}

		// for(auto a: num1) cout << a << ' ';
		// cout << endl;
		// for(auto a: num2) cout << a << ' ';
		// cout << endl;
		int ans = max(cnt1, cnt2);

		for(int i = 0; i < n - 1; i++){
			int temp = num1[i] + num2[i + 1];
			ans = max(ans, temp);
		}
		cout << ans << endl;
	}
	

	return 0;
}
