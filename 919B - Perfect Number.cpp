#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

bool check(int i){
	int sum = 0;
	while(i > 0){
		sum += i % 10;
		i /= 10;
	}

	return (sum == 10);
}
int main()
{
	bismillah();

	int n; cin >> n;
	int cnt = 0;
	for(int i = 1; ; i++){
		if(check(i)) cnt++;
		if(cnt == n){
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}
