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

	int n, d; cin >> n >> d;

	vector<int> power(n);
	for(int i = 0; i < n; i++){
		cin >> power[i];
	}
	
	sort(power.rbegin(), power.rend());

	int remain = n, team = 0;

	for(int i = 0; i < n; i++){
		int min_member = ceil((double) d / power[i]);

		if(min_member * power[i] == d) min_member++;
		remain -= min_member;
		//cout << min_member << ' ' << remain << endl;

		if(remain >= 0){
			team++;
		}
		else{
			break;
		}
	}

	cout << team << endl;

	return 0;
}
