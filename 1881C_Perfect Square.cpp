#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

//char sq[1123][1123];
int main()
{
	bismillah();

	int t; cin >> t;
	while(t--){
		int n; cin >> n;

		vector<string> sq(n);
		for(int i = 0; i < n; i++){
			cin >> sq[i];
		}

		int cnt = 0;
		for(int i = 0; i < n; i++){
			for(int j = n - 1, k = 0; j >= 0, k < n ; j--, k++){
				if(sq[i][k] != sq[j][i]){
					cnt += abs(sq[i][k] - sq[j][i]);
					//cout << sq[i][k] << " " << sq[j][i] << endl;
					 

					if(sq[i][k] < sq[j][i]){
						sq[i][k] = sq[j][i];
						//cout << i << ' ' << k << endl;
					}
					else{
						sq[j][i] = sq[i][k];
						//cout << j << ' ' << i << endl;
					}


					
				}
				//cout << sq[i][k] << endl;
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = n - 1, k = 0; j >= 0, k < n ; j--, k++){
				if(sq[i][k] != sq[j][i]){
					cnt += abs(sq[i][k] - sq[j][i]);
					//cout << sq[i][k] << " " << sq[j][i] << endl;
					 

					if(sq[i][k] < sq[j][i]){
						sq[i][k] = sq[j][i];
						//cout << i << ' ' << k << endl;
					}
					else{
						sq[j][i] = sq[i][k];
						//cout << j << ' ' << i << endl;
					}


					
				}
				//cout << sq[i][k] << endl;
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = n - 1, k = 0; j >= 0, k < n ; j--, k++){
				if(sq[i][k] != sq[j][i]){
					cnt += abs(sq[i][k] - sq[j][i]);
					//cout << sq[i][k] << " " << sq[j][i] << endl;
					 

					if(sq[i][k] < sq[j][i]){
						sq[i][k] = sq[j][i];
						//cout << i << ' ' << k << endl;
					}
					else{
						sq[j][i] = sq[i][k];
						//cout << j << ' ' << i << endl;
					}


					
				}
				//cout << sq[i][k] << endl;
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = n - 1, k = 0; j >= 0, k < n ; j--, k++){
				if(sq[i][k] != sq[j][i]){
					cnt += abs(sq[i][k] - sq[j][i]);
					//cout << sq[i][k] << " " << sq[j][i] << endl;
					 

					if(sq[i][k] < sq[j][i]){
						sq[i][k] = sq[j][i];
						//cout << i << ' ' << k << endl;
					}
					else{
						sq[j][i] = sq[i][k];
						//cout << j << ' ' << i << endl;
					}


					
				}
				//cout << sq[i][k] << endl;
			}
		}

		cout << cnt << endl;
	}

  	return 0;
}
