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
    int a, b , n; cin >> a >> b >> n;

    int c = a ^ b;

    if(n == 0){
      cout << a << endl;
    }
    else if(n == 1){
      cout << b << endl;
    }
    else{
      int cnt = (n - 1) % 3;
      if(cnt == 1){
        cout << c << endl
      }
      else if(cnt == 2){
        cout << a << endl;
      }
      else{
        cout << b << endl;
      }
    }
    
  }

  
  return 0;
}