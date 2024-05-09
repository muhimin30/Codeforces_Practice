#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 1e5+23;

ll arr[N], t[4 * N];

void build(int n, int b, int e){
	if(b == e){
		t[n] = arr[b];
		return;
	}
	int mid = (b + e) / 2;

	int l_c = 2 * n, r_c = 2 * n  + 1;

	build(l_c, b, mid);
	build(r_c, mid + 1, e);

	t[n] = t[l_c] + t[r_c];
}

ll query(int n, int b, int e, int i, int j){
	if(e < i || b > j) return 0;

	if(b >= i && e <= j){
		return t[n];
	}

	int mid = (b + e) / 2;

	int l_c = 2 * n, r_c = 2 * n + 1;

	return query(l_c, b, mid, i, j) + query(r_c, mid + 1, e, i , j);
}

void upd(int n, int b, int e, int i , int x){
	if(e < i || b > i) return;

	if(b == i && e == i){
		t[n] = x;
		return;
	}

	int mid = (b + e) / 2;

	int l_c = 2 * n, r_c = 2 * n + 1;
	upd(l_c, b, mid, i, x);
	upd(r_c, mid + 1, e, i, x);

	t[n] = t[l_c] + t[r_c];
}

void solve()
{
	int n, m; cin >> n >> m;

	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	} 

	build(1, 1, n);


	while(m--){
		int a, b, c; cin >> a >> b >> c;
		if(a == 1){
			upd(1, 1, n, b + 1, c);
		}
		else{
			ll ans = query(1, 1, n, b + 1, c);
			cout << ans << "\n";
		}
	}

}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc = 1;
    //cin >> tc;

    while(tc--){
    	solve();
    } 
}


