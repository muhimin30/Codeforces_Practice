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
        int n; cin >> n;

        vector<int> num(n);
        vector<int> ans;

        for(int i = 0; i < n; i++){
            cin >> num[i];
        }

        int mx = num[0];

        bool neg = false, pos = false;
        if(mx < 0){
            neg = true;
        }
        else{
            pos = true;
        }

        for(int i = 1; i < n; i++){
            if(neg && num[i] < 0){
                mx = max(mx, num[i]);
            }
            else if(pos && num[i] > 0){
                mx = max(mx , num[i]);
            }
            else if(neg && num[i] > 0){
                ans.push_back(mx);
                mx = num[i];
                neg = false;
                pos = true;
            }
            else if(pos && num[i] < 0){
                ans.push_back(mx);
                mx = num[i];
                neg = true;
                pos = false;

                
            }


        }
        ans.push_back(mx);

        ll sum = 0;

        for(auto a: ans) sum += 1LL* a;
        
        cout << sum << endl;

    }

  return 0;
}
