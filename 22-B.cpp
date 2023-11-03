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
        vector<int> num(k);
        vector<int> def;

        for(int i = 0; i < k; i++){
            cin >> num[i];
        }

        def.push_back(num[0]);

        bool check = true;
        for(int i = 1; i < k; i++){
            int temp = num[i] - num[i - 1];
            
            def.push_back(temp);\

            if(temp < def[i - 1]){
                check = false;
            }
        }

        for(auto a: def) cout << a << " ";
        cout << endl;

        if(check){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
  return 0;
}
