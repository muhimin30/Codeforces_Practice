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
        ll n, k; cin >> n >> k;

        if(((n - k) % 2 == 1) || (k * k) > n ){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }

    }
  return 0;
}
