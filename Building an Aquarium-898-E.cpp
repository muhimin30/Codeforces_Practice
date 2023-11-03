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
        ll n, w; cin >> n >> w;
        vector<int> num(n);

        for(int i = 0; i < n; i++){
            cin >> num[i];
        }

        sort(num.begin(), num.end());

        ll x = 0;

        bool check = false;
        int ind = 0, h = num[0];
        while(x <= w && ind < n - 1){
            x += 1LL *  (num[ind + 1] - num[ind]) * (ind + 1);
            ind++;

            //cout << x << endl;
            if(x >= w){
                if((num[ind] - num[ind - 1]) > 1){
                    x -= 1LL * (num[ind] - num[ind - 1]) * (ind);                    
                    h += (w - x) / (ind);
                    //cout << x << endl;
                }
                else if(x == w){
                    h += num[ind] - num[ind - 1];
                }
                check = true;
                break;                
            }
            h += num[ind] - num[ind - 1];
            
        }
        //cout << h << endl;

        if(!check){
            h += (w - x) / n;
        }

        cout << h << endl;

    }
  return 0;
}
