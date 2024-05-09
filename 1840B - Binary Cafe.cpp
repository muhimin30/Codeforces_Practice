//Muhimin
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
	int n, k; cin >> n >> k;

	vector<int> num;

	for(int i = 0; i < k; i++){
		if((1 << i) <= n){
			num.push_back(i);
		}
	}
	
}


int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);

 int t = 1;
 //cin >> t;
 while(t--){
		solve();
 }

}


