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
		int k, n; cin >> k >> n;

		vector<int> num;
		int value = 1;
		for(int i = 1; i <= k; i++){
			num.push_back(value);
			value += i;
		}
		value = n;
		for(int i = k - 1; i >= 0; i--){
			if(num[i] > value){
				num[i] = value;
				value--;
			}
		}

		for(auto a: num) cout << a << ' ';
		cout << endl;
	}

	return 0;
}
