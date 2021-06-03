#include <bits/stdc++.h>
using namespace std;
int main() {
	int s;
	cin >> s;
	while(s--) {
		int n,y;
		int b[100];
		cin >> n;
		for(int i=0;i<n;i++) {
			cin>>b[i];
		}

		int ans = 0;
		for(int i=0;i<n-1;i++)
            {
                int x=max(b[i],b[i+1]);
                int y=min(b[i],b[i+1]);
                while(x>y*2)
                {
                    ans++;
                    y*=2;
                }
		}
		cout << ans <<endl;
	}
	return 0;
}
