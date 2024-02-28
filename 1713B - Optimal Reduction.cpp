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

		deque<int> num;

		for(int i = 0; i < n; i++){
			int temp; cin >> temp;
			num.push_back(temp);
		}
		bool check = true;
		int x = 0;
		while(!num.empty()){

			int f = num.front(), b = num.back();

			if(f < x || b < x){
				//cout << f << ' ' << b << ' ' << x << endl;
				check = false;
				break;
			}
			if(f < b){
				num.pop_front();
				x = f;
			}
			else{
				num.pop_back();
				x = b;
			}
		}
		cout << ((check) ? "YES" : "NO") << endl;
	}

	return 0;
}
