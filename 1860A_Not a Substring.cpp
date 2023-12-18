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
		string s; cin >> s;

		if(s == "()"){
			cout << "NO" << endl;
		}
		else{

			cout << "YES" << endl;
			if(s.size() == 2){
				string sub = s.substr(0, 2);
				if(sub == ")("){
					cout << "(())" << endl;
				}
				else{
					cout << "()()" << endl;
				}
			}
			else{
				string sub = s.substr(0,3);

				if(sub != "()(" && sub != ")()"){
					for(int i = 0; i < s.size(); i++){
						cout << "()";
					}
					cout << endl;
				}
				else{
					for(int i = 0; i < s.size(); i++){
						cout << "(";
					}
					for(int i = 0; i < s.size(); i++){
						cout << ")";
					}
					cout << endl;
				}
			}
		}	
	}

	return 0;
}
