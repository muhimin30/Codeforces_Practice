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
		vector<int> num(n);

		cin >> num[0];
		int and_sum = num[0];
		for(int i = 1; i < n; i++){
			cin >> num[i];
			and_sum &= num[i];
		}

		int grp_cnt = 0;

		//if(n == 1) grp_cnt = 1;

		bool check = true;
		int temp_and;
		for(int i = 0; i < n; i++){
			if(check){
				temp_and = num[i];
			}
			check = false;
			temp_and &= num[i];

			if(temp_and == and_sum && temp_and == 0){
				//cout << "i " << i << endl;
				grp_cnt++;
				check = true;			
			}
			if(i == n - 1 && grp_cnt == 0){
				grp_cnt++;
			}
		}

		cout << grp_cnt << endl;
	}
  return 0;
}
