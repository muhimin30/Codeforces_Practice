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
        int n, x; cin >> n >> x;

        int odd = 0, even = 0;
        for(int i = 0; i < n; i++){
            int temp; cin >> temp;

            if(temp % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }

        //cout << even << " " << odd << endl;
        if(!odd || (x % 2 == 0 && !even)){
            cout << "No" << endl;
            continue;
        }

        if(odd % 2 == 0){
            odd--;
        }
        int rem = x - odd;

        
        if(rem <= even){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}
