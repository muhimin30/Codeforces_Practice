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

		int num1_min = INT_MAX;
		int num2_min = INT_MAX;

		ll num1_sum = 0;
		ll num2_sum = 0;
		for(int i = 0; i < n; i++){
			cin >> num1[i];
			num1_sum += 1LL * num1[i];
			num1_min = min(num1_min, num1[i]);
		}
		for(int i = 0; i < n; i++){
			cin >> num2[i];
			num2_sum += 1LL * num2[i];
			num2_min = min(num2_min, num2[i]);
		}
		
		num2_sum += 1LL * num1_min * n;
		num1_sum += 1LL * num2_min * n;

		cout << min(num1_sum, num2_sum) << endl;


	}
	

	

	return 0;
}
