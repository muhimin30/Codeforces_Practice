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
		int n; cin >> n;

		vector<int> num1(n);
		vector<int> num2(n);

		map<int , int> m1;
		map<int , int> m2;

		set<int>all;


		for(int i = 0; i < n; i++){
			cin >> num1[i];
			all.insert(num1[i]);
		}
		int cnt = 1;
		for(int i = 0; i < n - 1; i++){
			if(num1[i] == num1[i + 1]){
				cnt++;
			}
			else{
				if(m1[num1[i]] < cnt){
					m1[num1[i]] = cnt;
				}
				cnt = 1;
			}
		}
		if(m1[num1[n - 1]] < cnt){
					m1[num1[n - 1]] = cnt;
		}
		for(int i = 0; i < n; i++){
			cin >> num2[i];
			all.insert(num2[i]);
		}
		cnt = 1;
		for(int i = 0; i < n - 1; i++){
			if(num2[i] == num2[i + 1]){
				cnt++;
			}
			else{
				if(m2[num2[i]] < cnt){
					m2[num2[i]] = cnt;
				}
				cnt = 1;
			}
		}
		if(m2[num2[n - 1]] < cnt){
					m2[num2[n - 1]] = cnt;
		}
		int ans = 1;
		for(auto a: all){
			int sum = m1[a] + m2[a];

			ans = max(ans, sum);
		}


		cout << ans << endl;

		
	}

	return 0;
}
