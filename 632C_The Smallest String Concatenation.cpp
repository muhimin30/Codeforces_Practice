//Muhimin
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int n; cin >> n;
	vector<string> s(n);

	for(int i = 0; i < n; i++){
		cin >> s[i];
	}

	sort(s.begin(), s.end(), [](string a, string b){
		return (a + b) < (b + a);
	});

	for(auto a: s) cout << a;
	cout << endl;
}