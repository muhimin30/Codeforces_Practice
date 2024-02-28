//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int main()
{
	bismillah();
	int n, m; cin >> n >> m;
	vector<int> num(n);

	for(int i = 0; i < n; i++){
		cin >> num[i];
	}
	int r = 0;
	ll sum = 0;
	int ans = 1e5 + 123;	
	for(int i = 0; i < n; i++){
		while(r < n || sum > m){
			if(sum > m){
				ans = min(ans, r - i);
				//cout << i << ' ' << ans << endl;
				break;		
			}
			else if(r < n){
				sum += num[r];
				r++;
			}
			
		}	
		sum -= num[i];
	}
	if(ans == 1e5 + 123){
		cout << -1 << endl;
	}
	else{
		cout << ans << endl;
	}
	

	return 0;
}
