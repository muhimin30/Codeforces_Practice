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
			map<int, int> num;
			int n; cin >> n;
			int cnt_zero = 0, cnt_one = 0;
			for(int i = 0; i < n; i++){
				int temp; cin >> temp;
				if(temp == 0){
					cnt_zero++;
				}
				else if(temp == 1){
					cnt_one++;
				}
			}
			
			if(cnt_zero == n){
				cout << 1 << endl;
			}
			else if(cnt_zero * 2 <= n + 1){
				cout << 0 << endl;
			}
			else if(cnt_zero + cnt_one == n){
				cout << 2 << endl;
			}
			else{
				cout << 1 << endl;
			}
		}

		return 0;
	}
