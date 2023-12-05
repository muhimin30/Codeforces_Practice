#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int n, k;
vector<int> num(1e5 + 123);

int a_ind(int m){
	int l = 1, r = n;
	int ans;

	while(l <= r){
		int mid = (l + r) / 2;

		
		if(num[mid] < m){
			ans = mid;
			l = mid + 1;
		}
		else if(num[mid] == m){
			ans = mid;
			r = mid - 1;
		}
		else{
			r = mid - 1;
		}
	}

	if(num[ans] == m){
		return (ans - 1);
	}
	else{
		return ans;
	}
}

int b_ind(int m){
	int l = 1, r = n;

	int ans;
	while(l <= r){

		int mid = (l + r) / 2;

		if(num[mid] <= m){

			ans = mid;
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}

	return ans;
}



int main()
{
	bismillah();

	cin >> n;

	for(int i = 1; i <= n; i++){
		cin >> num[i];
	}



	sort(num.begin() + 1, num.begin() + n + 1);
	cin >> k;
	while(k--){
		int a, b; cin >> a >> b;
		//cout << a << ' ' << b << endl;
		if(a <= num[1]){
			a = 0;
		//	cout << "HELLO" << endl;
		}
		else{
			a = a_ind(a);
		}

		if(b >= num[n]){
			b = n;
		}
		else{
			b = b_ind(b);
		}

		cout << b - a << ' ';
	}

	cout << endl;



	return 0;
}
