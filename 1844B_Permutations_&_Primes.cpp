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

		int one_pos = ceil(n/2.0);

		int num = 2;
		for(int i = 1; i <= n; i++){
			if(num == 3) num++;
			if(i == one_pos){
				cout << 1 << ' ';
			}
			else if(i == n && n > 2){
				cout << 3 << ' ';
			}
			else{
				cout << num << ' ';
				num++;
			}
			
		}
		
		cout << endl;
	}

	// int n; cin >> n;
	// vector<int> num(n);
	// for(int i = 0; i < n; i++){
	// 	cin >> num[i];
	// }

	// for(int l = 0; l < n; l++){
	// 	for(int r = l; r < n; r++){
	// 		for(int i = l; i <= r; i++){
	// 			cout << num[i] << ' ';
	// 		}
	// 		cout << endl;
	// 	}
	// }

  	return 0;
}
