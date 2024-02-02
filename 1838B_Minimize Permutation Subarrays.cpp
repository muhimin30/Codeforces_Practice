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

		int ind = 0;
		int ind_one = 0, ind_two = 0;
		for(int i = 0; i < n; i++){
			int temp; cin >> temp;

			if(temp == n){
				ind = i + 1;
			}
			if(temp == 1){
				ind_one = i + 1;
			}
			if(temp == 2){
				ind_two = i + 1;
			}
		}
		if((ind > ind_one && ind < ind_two) || (ind > ind_two && ind < ind_one)){
			cout << ind << ' ' << ind << endl;
		}
		else if(ind > ind_one && ind > ind_two){
			cout << ind << ' ' << max(ind_one, ind_two) << endl;
		}
		else{
			cout << ind << ' ' << min(ind_one, ind_two) << endl;
		}
	}

	return 0;
}