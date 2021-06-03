#include <bits/stdc++.h>
using namespace std;
int main() {
	int s;
	cin >> s;
	while(s--) {
		int n,y;
		int b[3] = {};
		cin >> n;
		for(int i=0;i<n;i++) {
			cin>>y;
			b[y%3]++;
		}

		int ans = 0;
		for(int i=0;i<6;i++) {
			while(b[i%3] > n/3) {
				ans++;
				b[(i+1)%3]++;
				b[i%3]--;
			}
		}
		cout << ans <<endl;
	}
}
