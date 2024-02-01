//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);

const int N = 1e5 + 23;
int n, m; 
vector<int> graph[N];
vector<bool> vis(N);
vector<bool> cats(N);
int cnt = 0;
int ans = 0;

void dfs(int vartex){
	
	vis[vartex] = true;
	if(cats[vartex]){
		cnt++;
	}
	else{
		cnt = 0;
	}
	cout << vartex << ' ' << cnt <<  endl;
	if(cnt > m) return;


	if(graph[vartex].size() == 1) ans++;
	for(auto a: graph[vartex]){

		if(vis[a]) continue;
		dfs(a);
	}
	if(cats[vartex])
}

int main()
{
	bismillah();
	cin >> n >> m;

	for(int i = 1; i <= n; i++){
		int a; cin >> a;
		if(a) cats[i] = true;
	}
	//cats[1] = false;

	for(int i = 0; i < n - 1; i++){
		int a, b; cin >> a >> b;

		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	dfs(1);

	cout << ans << '\n';


	

	return 0;
}
