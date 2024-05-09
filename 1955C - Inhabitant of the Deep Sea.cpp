#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
#define ll long long

void solve()
{
  int n; ll k; cin >> n >> k;

  deque<ll> d;

  for(int i = 0; i < n; i++){
  	int temp; cin >> temp;

  	d.push_back(temp);
  }  


  ll second = k / 2;
  ll first;
  (k % 2) ? first = second + 1 : first = second;
  //cout << first << ' ' << second << "\n";

  int cnt = 0;
	int i = 0;
  while(!d.empty() && first){
  	ll temp = d.front();


  	if(temp <= first){
  		first -= temp;
  		d.pop_front();
  		cnt++;
  	}
  	else{
  		d[0] -= first;
  		break;
  	}
  }


  while(!d.empty() && second){
  	ll temp = d.back();

  	if(temp <= second){
  		second -= temp;
  		d.pop_back();
  		cnt++;
  	}
		else{
			break;
		}
  }

  cout << cnt << "\n";

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc = 1;
    cin >> tc;

    while(tc--){
    	solve();
    } 
}


