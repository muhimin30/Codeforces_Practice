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
		vector<int> num(n);

		for(int i = 0; i < n; i++){
			cin >> num[i];
		}
		
		priority_queue<int> st;

		ll ans = 0;
		for(int i = 0; i < n; i++){
			if(num[i] == 0){
				if(!st.empty()){
					ans += 1LL * st.top();
					st.pop(); 
				}
			}
			else{
				st.push(num[i]);
			}
		}

		cout << ans << endl;

	}

	return 0;
}
