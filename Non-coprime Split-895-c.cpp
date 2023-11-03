#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int const mx = 1e7+123;
vector<int> is_prime(mx, 1); 

//vector<int> devisor[mx];

void prime(){
    for(int i = 2; i <= mx; i++){
        if(is_prime[i]){
            for(int j = i * 2; j <= mx; j+= i){
                is_prime[j] = false; 
                //devisor[j].push_back(i);  
            }
        }
    }
}

int main()
{
  bismillah();

    prime();

    int t; cin >> t;
    while(t--){
        int l, r; cin >> l >> r;
        int a , b;

        if(r - l == 0){
            if(is_prime[r]){
                cout << - 1 << endl;
            }
            else{
                for(int i = 2; i <= r; i++){
                    if(r % i == 0){
                        a = r / i;
                        b = r - a;
                        cout << a << " " << b << endl;
                        break;
                    }
                }
 
            }
        }
        else if(r - l == 1){
            if(is_prime[r] && is_prime[l]){
                cout << - 1 << endl;
            }
            else{
                if(!is_prime[r]){
                    for(int i = 2; i <= r; i++){
                    if(r % i == 0){
                        a = r / i;
                        b = r - a;
                        cout << a << " " << b << endl;
                        break;
                    }
                } 
                }
                else{
                    for(int i = 2; i <= l; i++){
                    if(l % i == 0){
                        a = l / i;
                        b = l - a;
                        cout << a << " " << b << endl;
                        break;
                    }
                }
                }
            }
        }
        else{
            if(l == 1 && r == 3){
                cout << -1 << endl;
            }
            else{
                if(r % 2 == 0){
                    cout << 2 << " " << r - 2 << endl; 
                }
                else{
                    cout << 2 << " " << r - 3 << endl;;
                }
            }
        }
    }
  return 0;
}
