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
		int n, k; cin >> n >> k;
		int check = 1;
		for(int i = 1; i <= n; i++){
			int temp; cin >> temp;

			if(temp == check) check++;
		}

		check = (n - check) + 1;
		cout << ceil((double) check / k) << endl;
	}

	

	return 0;
}
