//Muhimin
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define print(a) cout << #a << " : " << a << endl
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n, m, k; cin >> n >> m >> k;

		ll sum = 0;
		int a_min = 1e9, b_max = 0;
		int b_min = 1e9, a_max = 0;
		for(int i = 0; i < n; i++){
			int temp; cin >> temp;
			sum += temp;
			a_min = min(a_min, temp);
			a_max = max(a_max, temp);
		}
		for(int i = 0; i < m; i++){
			int temp; cin >> temp;
			b_max = max(b_max, temp);
			b_min = min(b_min, temp);
		}
		//print(sum);
		
		ll first, second;

		if(a_min < b_max){
			sum += b_max;
			sum -= a_min;
			a_max = max(a_max, b_max);
			b_min = min(a_min, b_min);
		} 
		first = sum;

		if(b_min < a_max){
			sum -= a_max;
			sum += b_min;
		}
		second = sum;

		cout <<((k % 2)? first : second) << endl;

	}

	return 0;
}
