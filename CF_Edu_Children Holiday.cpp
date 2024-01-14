#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int m, n;
vector<vector<int>> num; 
int arr[1123]; 

bool check (int x){
	int cnt = 0;
	for(int i = 0; i < n; i++){
		int block = (num[i][0] * num[i][1]) + num[i][2];
		int total_block = (x /     ) + (x - floor(x * block));
		cnt += total_block;
	}
	cout << x << ' ' << cnt << endl;
	return (cnt >= m);
}


int main()
{
	bismillah();

	cin >> m >> n;	

	for(int i = 0; i < n; i++){
		int a, b, c; cin >> a >> b >> c;
		vector<int>temp;
		temp.push_back(a);
		temp.push_back(b);
		temp.push_back(c);
		num.push_back(temp);
	}

	// for(auto a: num){
	// 	for(auto b: a) cout << b << ' ';
	// 	cout << endl;
	// }
	
	int l = 0, r = 1e9;
	int ans = 0;
	while(l <= r){
		int mid = l + (r - l) / 2;
		if(check(mid)){
			ans = mid;
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}

	cout << ans << endl;
	return 0;
}
