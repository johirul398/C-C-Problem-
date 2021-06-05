void solve(){
	cin >> n >> d;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		if(a[i] >= 10 * d){
			deb1("YES")
			continue;
		}
		int f = 0;
		for(int j = d; j <= a[i]; j += 10){
			if((a[i] - j) % d == 0){
				deb1("YES")
				f = 1;
				break;
			}
		}
		if(!f) deb1("NO")
	}
}

int main(){
	GODSPEED;
	int test = 1;
	cin >> test;
	for(int i = 1; i <= test; i++){
		solve();
	}
}
