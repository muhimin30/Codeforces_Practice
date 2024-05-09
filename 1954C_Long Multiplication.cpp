#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
#define ll long long

void solve()
{
    string a, b; cin >> a >> b;

    string gt, sm;

    int n = a.size();
    int i;
    for(i = 0; i < n; i++){
    	if(a[i] != b[i]){
    		if(a[i] > b[i]){
    			gt.push_back(a[i]);
    			sm.push_back(b[i]);
    		}
    		else{
    			gt.push_back(b[i]);
    			sm.push_back(a[i]);
    		}

    		break;
    	}
    	gt.push_back(a[i]);
    	sm.push_back(b[i]);

    }
    i++;
    //cout << gt << ' ' << sm << endl;
    for( ;i < n; i++){
    	gt.push_back(min(a[i], b[i]));
    	sm.push_back(max(a[i], b[i]));
    }


    cout << gt << "\n" << sm << "\n";

}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc = 1;
    cin >> tc;

    while(tc--){
    	solve();
    } 
}


