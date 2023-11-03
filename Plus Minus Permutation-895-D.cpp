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
        ll n, x, y; cin >> n >> x >> y;

        ll x_sum = 0, y_sum = 0;

        ll x_div = n / x;
        ll y_div = n / y;

        ll common = n / ((x * y) / __gcd(x, y));

        //cout << x_div << " " << y_div << endl;
        x_div -= common;
        y_div -= common;
        

        //cout << x_div << " " << y_div << endl;

        ll temp_x = n - x_div;
        //cout << temp_x << endl;
        x_sum = ((1LL * n * (n + 1)) / 2) - ((1LL * temp_x * (temp_x + 1)) / 2);
        y_sum = (y_div * (y_div + 1)) / 2;

        //cout << ((1LL * n * (n + 1)) / 2) << endl; 
        cout << x_sum - y_sum << endl;

    }
  return 0;
}
