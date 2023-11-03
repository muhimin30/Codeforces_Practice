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
        string a, b; cin >> a >> b;

        if(a == b){
            cout << "YES" << endl;
            continue;
        }

        vector<int> c_zero;
        vector<int> c_one;

        for(int i = 1; i < a.size() - 1; i++){
            if(a[i] == b[i] && a[i] == '1'){
                c_one.push_back(i);
            }
        }
        for(int i = a.size(); i > 0; i--){
            if(a[i] == b[i] && a[i] == '0'){
                c_zero.push_back(i);
            }
        }
        int one, zero;

        if(c_one.size() == 0){
            one = 0;
        }
        else{
            one = c_one[0];
        }
        if(c_zero.size() == 0){
            zero = 0;
        }
        else{
            zero = c_zero[0];
        }

        //cout << zero << " " << one << endl;
        if(one == 0  && zero == 0){
            cout << "NO" << endl;
            continue;
        }
        if(one == 1 || zero == a.size() - 2){
            cout << "YES" << endl;
            continue;
        }

        bool check = false;
        if(one != 0 && zero != 0){
            for(int i = 0; i < c_one.size(); i++){
                for(int j = 0; j < c_zero.size(); j++){
                    if(c_one[i] - c_zero[j] == 1){
                        check = true;
                    }
                }
            }
        }

        if(check){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

  return 0;
}
