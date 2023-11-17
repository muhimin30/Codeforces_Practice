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
			vector<int> num_ans;
			string ans;

			ans.push_back('1');


			for(int i = 0; i < n; i++){
				cin >> num[i];
			}
			num_ans.push_back(num[0]);

			bool check = false;

			for(int i = 1; i < n; i++){


				if(num[i] >= num_ans.back()){
						if(check && num[i] > num[0]){
							ans.push_back('0');
						}
						else{
							ans.push_back('1');
							num_ans.push_back(num[i]);	
						}
									
				}
				else if(num[i] < num_ans.back() && !check && num[i] <= num[0]){
					ans.push_back('1');
					num_ans.push_back(num[i]);
					check = true;
				}
				//else if(num[i] == )
				else{
					ans.push_back('0');
				}

				// for(auto a: num_ans){
				// 	cout << a << ' ';
				// }
				// cout << endl;

				//cout << check << ' ' << num[i] << ' ' << num[0] << endl;

				//cout << check << endl;
				//cout << num[i] << "  " << num_ans.back() << endl; 
				// if(num[i] < num_ans[num_ans.size() - 2]){
				// 	check = true;
				// }
				
			}


			cout << ans << endl;

		}
		

		return 0;
}
