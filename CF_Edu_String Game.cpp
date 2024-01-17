#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

string s, t;
vector<int>num;

bool check(int m){
	vector<bool> temp(s.size());

	for(int i = 0; i < m; i++){
		temp[num[i]] = true;
		//cout << "Num " << num[i] << endl;
	}

	string after_del;
	//cout << m << endl;
	//for(auto a: temp) cout << a.first << ' ' << a.second << endl;
	//cout << endl;
	for(int i = 0; i < s.size(); i++){
		//cout << s[i] << ' ' << temp[i] << endl;
		if(temp[i]){
			continue;
		}
		else{
			after_del.push_back(s[i]);
		}
	}

	int j = 0;
	for(int i = 0; i < after_del.size(); i++){
		if(after_del[i] == t[j]){
			j++;
		}
		if(j == t.size()) break;
	}

	return (j == t.size());

	

}


int main()
{
	bismillah();

	cin >> s >> t;
	for(int i = 0; i < s.size(); i++){
		int temp; cin >> temp;
		temp--;
		num.push_back(temp);
	}


	int l = 0, r = s.size() - t.size();

	int ans = 0;
	while(l <= r){
		int mid = l + (r - l) / 2;

		if(check(mid)){
			l = mid + 1;
			ans = mid;
		}
		else{
			r = mid - 1;
		}
	} 

	cout << ans << endl;

	return 0;
}
