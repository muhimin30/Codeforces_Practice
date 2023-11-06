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
		vector<bool> num_check(n + 1);

		//num_check[0] = true;
		for(int j = 1; j <= n; j++){
			for(int i = j; i <= n; i *= 2){
				if(!num_check[i]){
					num.push_back(i);
					num_check[i] = true;
				}
				if(i * 2 <= n && !num_check[i * 2]){
					num.push_back(i * 2);
					num_check[i * 2] = true;
				}
			}
		}

		for(auto a: num) cout << a << ' ';
		cout << endl;
	}

 	 return 0;
}
