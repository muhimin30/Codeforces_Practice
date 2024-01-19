#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
int n;
vector<int> num;
bool is_available(int v){
	int l = 0, r = n - 1;	

	while(l <= r){
		int mid = (1LL * l + r) / 2;


		if(num[mid] == v){
			return true;
		}
		else if(num[mid] < v){
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}

	return false;
}


int main()
{
	bismillah();

	int k; cin >> n >> k;

	for(int i = 0; i < n; i++){
		int temp; cin >> temp;
		num.push_back(temp);
	}

	while(k--){
		int value; cin >> value;

		cout << ((is_available(value)) ? "YES" : "NO") << endl;
	}

	return 0;
}
