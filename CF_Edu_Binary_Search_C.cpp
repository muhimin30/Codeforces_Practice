#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int n, k;
vector<int> num(1e5 + 123);

int ind(int m){
	int l = 1, r = n;
	int ans = 0;
	while(l <= r){
		int mid = (l + r) / 2;

		if(num[mid] >= m){
			ans = mid;
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}

	return ans;
}
int main()
{
	bismillah();

	cin >> n >> k;

	for(int i = 1; i <= n; i++){
		cin >> num[i];
	}

	while(k--){
		int temp; cin >> temp;

		if(temp <= num[1]){
			cout << 1 << endl;
		}
		else if(temp > num[n]){
			cout << n + 1 << endl;
		}
		else{
			cout << ind(temp) << endl;
		}
	}
	

	return 0;
}
