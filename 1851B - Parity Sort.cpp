//Muhimin
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
	int n; cin >> n;
	bool check = true;

	vector<int> a(n);
	vector<int> b(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}

	sort(b.begin(), b.end());

	for(int i = 0; i < n; i++){
		if((a[i] % 2 == 0 && b[i] % 2 == 1) || (a[i] % 2 == 1 && b[i] % 2 == 0)){
			check = false;
		}
	}

	cout << ((check) ? "YES" : "NO") << "\n";


}


int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);

 int t = 1;
 cin >> t;
 while(t--){
		solve();
 }

}


