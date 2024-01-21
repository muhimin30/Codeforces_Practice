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

	map<int, int> marker_diameter;
	map<int, int> cap_diameter;

	map<int, map<int, int>> marker_info;
	map<int, map<int, int>> cap_info;

	for(int i = 0; i < n; i++){
		int a, b; cin >> a >> b;

		marker_diameter[b]++;
		marker_info[b][a]++;
	}
	for(int i = 0; i < m; i++){
		int a, b; cin >> a >> b;

		cap_diameter[b]++;
		cap_info[b][a]++;
	}

	int closed = 0;
	for(auto a: marker_diameter){
		int marker = a.second;
		int cap = cap_diameter[a.first];
		//cout << a.first << ' ' << marker << ' ' << cap << endl;
		closed += min(marker, cap);
	}

	int beautiful = 0;
	for(auto a: marker_info){
		for(auto b: a.second){
			int marker = b.second;
			int cap = cap_info[a.first][b.first];
			beautiful += min(marker, cap);
		}
	}

	cout << closed << ' ' << beautiful << endl;

	return 0;
}
