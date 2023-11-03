#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define endl '\n'
int main(){
    int n; cin >> n;

    vector<int> num(n);

    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> num[i];
        sum += 1LL * num[i];
    }

    int half = ceil((double) sum / 2);
    
    sum = 0;
    for(int i = 0; i < n; i++){
        sum += 1LL * num[i];

        if(sum >= half){
            cout << i + 1 << endl;
            return 0;
        }
    }
}