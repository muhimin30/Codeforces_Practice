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

		map<int, int> freq;

		vector<int> num(n);
		for(int i = 0; i < n; i++){		   
			cin >> num[i];
		}

		int ind = 0;
		bool check1 = false, check2 = false;
		for(int i = 0; i < n; i++){		
			if(num[i] == num[0]){
				freq[num[0]]++;
			}   
			
			if(freq[num[0]] == k){			
				ind = i;
				check1 = true;
				break;
			}
		}
		if(ind == n - 1){
			cout << "YES" << endl;
			continue;
		}

		for(int i = ind + 1; i < n; i++){		   
			if(num[i] == num[n - 1]){
				freq[num[n - 1]]++;
			}
			if(freq[num[n - 1]] >= k){
				check2 = true;
				break;
			}
		}
		// for(auto a: freq){
		// 	cout << a.first << " " << a.second << endl;

		// }

		//cout << check1 << " " << check2 << endl;

		if(check1 && check2){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}



  return 0;
}
