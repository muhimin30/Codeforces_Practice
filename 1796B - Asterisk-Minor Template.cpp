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
		bool check = true;
		string a, b; cin >> a >> b;
		if(a == b){
			cout << "YES" << endl;
			cout << a << endl;
			check = false;
		}
		else if(a[0] == b[0]){
			cout << "YES" << endl;
			cout << a[0] << '*' << endl;
			check = false;
		}
		else if(a.back() == b.back()){
			cout << "YES" << endl;
			cout << '*' << a.back() << endl;
			check = false;
		}
		else{
			for(int i = 0; i < a.size() - 1; i++){
				for(int j = 0; j < b.size() - 1; j++){
					if(a[i] == b[j] && a[i + 1] == b[j + 1]){
						cout << "YES" << endl;
						cout << '*' << a[i] << a[i + 1] << '*' << endl;
						check = false;
						break;
					}
				}
				if(!check) break;
			}
		}

		if(check) cout << "NO" << endl;
	}

	return 0;
}
