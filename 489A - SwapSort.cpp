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

	int n; cin >> n;

	vector<int> num(n);

	for(int i = 0; i < n; i++){
		cin >> num[i];
	}

	vector<pair<int, int>> ans;

	for(int i = 0; i < n - 1; i++){
		int mn = num[i];
		int min_ind = i;
		for(int j = i + 1; j < n; j++){
			if(num[j] < mn){

				min_ind = j;
				mn = num[j];
			}
		}
		if(i != min_ind){
			swap(num[min_ind], num[i]);
			ans.push_back({i, min_ind});
		}

	}
	cout << ans.size() << endl;
	for(auto a: ans) cout << a.first << ' ' << a.second << endl;

	return 0;
}
