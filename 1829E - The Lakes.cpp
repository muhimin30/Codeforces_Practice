//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int n, m;
const int N = 1e3 + 23;
int vis[N][N];
void dfs(int i, int j, vector<vector<int>> &arr, int &sum){

	if(i < 0 || j < 0 || i >= n || j >= m) return;
	 
	if(!arr[i][j] || vis[i][j]) return;
	vis[i][j] = 1;
	sum += arr[i][j];

	dfs(i + 1, j, arr, sum);
	dfs(i - 1, j, arr, sum);
	dfs(i, j + 1, arr, sum);
	dfs(i, j - 1, arr, sum);
}

int main()
{
	bismillah();

	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		vector<vector<int>> arr;

		for(int i = 0; i < n; i++){
			vector<int> temp;
			for(int j = 0; j < m; j++){
				int a; cin >> a;
				temp.push_back(a);
			}
			arr.push_back(temp);
		}

		int mx = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(arr[i][j]){
					int sum = 0;
					dfs(i, j, arr, sum);
					mx = max(mx, sum);
				}
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				vis[i][j] = 0;
			}
		}

		cout << mx << endl;
	}

	return 0;
}
