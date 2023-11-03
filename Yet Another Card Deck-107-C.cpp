#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int main()
{
  bismillah();

  int n, q; cin >> n >> q;

  deque<int> card;

  for(int i = 0; i < n; i++){
    int temp; cin >> temp;
    card.push_back(temp);
  }

  while(q--){
    int color; cin >> color;

    int ans = find(card.begin(), card.end(), color) - card.begin();

    card.erase(card.begin() + ans);
    card.push_front(color);

    cout << ans + 1 << " ";
  }

  return 0;
}
