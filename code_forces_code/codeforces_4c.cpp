#include<bits/stdc++.h>
using namespace std;
void solve() {
	int n;
	cin >> n;
	string s;
	unordered_map<string, int>mp;
	while (n--)
	{
		cin >> s;
		if (mp.find(s) == mp.end())
		{
			mp[s] = 1;
			cout << "OK\n";
		}
		else
		{
			cout << s << mp[s] << "\n";
			mp[s]++;
		}

	}

}


int main() {
	solve();

}
