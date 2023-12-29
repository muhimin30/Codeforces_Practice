#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

const int sz = 1e6 + 23;
int mx = 1e6;
bitset<sz> is_prime;

void prime(){
	for(int i = 3; i <= mx; i += 2){
		is_prime[i] = 1;
	}

	is_prime[2] = 1;
	for(int i = 3; i <= sqrt(mx); i += 2){
		for(int j = i * i; j <= mx; j += i){
			is_prime[j] = 0;
		}
	}

}

int main()
{
	bismillah();

	prime();

	int n; cin >> n;
	if(n < 3){
		cout << 1 << endl;
		for(int i = 1; i <= n; i++){
			cout << 1 << ' ';
		}
		cout << endl;
		return 0;
	}

	int val = 1;

	vector<int> ans;
	for(int i = 2; i <= n + 1; i++){
		if(is_prime[i]){
			ans.push_back(1);
		}
		else{
			ans.push_back(2);
		}
	}

	cout << 2 << endl;
	for(auto a: ans) cout << a << ' ';
	cout << endl; 

	return 0;
}
