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

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> num;

		int temp; cin >> temp;
		num.push_back(temp);

		for(int i = 1; i < n; i++){
			cin >> temp;
			if(num.back() != temp){
				num.push_back(temp);
			}
		}
		int sz = num.size();
		if(n == 1 || sz == 1){
			cout << "YES" << endl;
			continue;
		}

		int cnt = 0;

		if(num[0] < num[1]){
			cnt++;
		}
		if(num[sz - 1] < num[sz - 2]){
			cnt++;
		}
		// for(auto a: num) cout << a << ' ';
		// cout << endl;
		for(int i = 1; i < sz - 1; i++){
			if(num[i - 1] > num[i] && num[i] < num[i + 1]){
				cnt++;
			}
		}


		cout << ((cnt == 1) ? "YES" : "NO") << endl;

		

	
	}

	return 0;
}
