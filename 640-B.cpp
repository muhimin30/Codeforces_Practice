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
        int n, k; cin >> n >> k;

        if(n < k || (n % 2 == 1 && k % 2 == 0) || n + 1 == k){
            cout << "NO" << endl;
        }
        // n even, k odd;
        else if(n % 2 == 0 && k % 2 == 1){
            if(2 * k > n){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
                for(int i = 0; i < k - 1; i++){
                    cout << "2 ";
                }
                cout << n - ((k - 1) * 2) << endl;
            }
        }
        else{
            // n = k
            if(n == k){
                cout << "YES" << endl;
                for(int i = 0; i < n; i++){
                    cout << "1 ";
                }
                cout << endl;
            }
            // n even, k even
            else if(n % 2 == 0 && k % 2 == 0){
                cout << "YES" << endl;
                for(int i = 0; i < k - 1; i++){
                    cout << "1 ";
                }
                cout << n - ((k - 1)) << endl;
            }
            //n odd, k odd;
            else{
                cout << "YES" << endl;
                for(int i = 0; i < k - 1; i++){
                    cout << "1 ";
                }
                cout << n - ((k - 1)) << endl;
            }
        }
    }

  return 0;
}
