#include <bits/stdc++.h>
using namespace std;


typedef vector<int> vi;
typedef vector<long long> vii;
typedef pair<int,int> pii;
typedef double dl;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define tc int t; cin>>t; while(t--)
#define TC ll t; cin>>t; while(t--)

void solve()
{
    int n; cin >> n;

    map<string, int> fre;

    vector<string> str;
    vi s(n);

    while(n--){
      string temp; cin >> temp;      
      str.push_back(temp);
      fre[temp]++;
    }

    //for(auto a: fre) cout << a.first << " " << a.second << endl;

    for(int i = 0; i < str.size(); i++){
        //cout << "HELLO" << endl;

        for(int j = 0; j < str[i].size() - 1; j++){
          string temp1, temp2;
          for(int k = 0; k <= j; k++){
            temp1.push_back(str[i][k]);
          }
          for(int k = j + 1; k < str[i].size(); k++){
            temp2.push_back(str[i][k]);
          }

          //cout << temp1 << " " << temp2 << endl;

          if(fre[temp1] > 0 && fre[temp2] > 0){
            //cout << i << " Hello" << endl;
            s[i] = 1;
            continue;
            
          }
          
        }
        
      
    }

    for(auto a:s) cout << a;
    cout << endl;


}


int main()
{
    bismillah();

    tc
    {
        solve();
    }

}