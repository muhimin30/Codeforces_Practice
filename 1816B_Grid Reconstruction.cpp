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

		vector<int> ans1(n + 1);
		vector<int> ans2(n + 1);

		int j1 = 2 * n;
		int j2 = n;
		for(int i = 1, j = n; i <= n, j >= 1; i += 2, j -= 2){
			ans1[i] = j1;
			j1--; 
			ans2[j] = j1; 
			j1--;
		}	

		j1 = 1;
		for(int i = 2, j = 1; i <= n, j <= n; i += 2, j += 2){
			ans2[j] = j1; 
			j1++;
			ans1[i] = j1;
			j1++; 
			
		}

		for(int i = 1; i <= n; i++){
			cout << ans1[i] << ' ';
		}
		cout << endl;
		for(int i = 1; i <= n; i++){
			cout << ans2[i] << ' ';
		}
		cout << endl;
	}

	return 0;
}
