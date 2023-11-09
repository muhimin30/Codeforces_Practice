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
		map<int , int> num;

		int n; cin >> n;

		for(int i = 1; i <= n; i++){
			int temp; cin >> temp;
			
			num[temp] = i;
		}

		int cnt = 0;

		for(int i = 1; i < n; i++){
			if(num[i] > num[i + 1]){
				cnt++;
			}
		}

		cout << cnt << endl;
	}

 	 return 0;
}
