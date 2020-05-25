#include <bits/stdc++.h>

using namespace std;

void decode(){
	int n;
	cin >> n;
	if(n%4 == 0){
		cout << "YES\n";
		int t = 0, l, sum = 0;
		vector<int> v;
		for(int i = 0; i < n/2; i++){
			t += 2;
			cout << t << " ";
			v.push_back(t);
			sum += t;
		}
		l = t;
		int temp = 0, sum2 = 0;
		for(int i = 0; i <= (int)v.size()-2; i++){
			temp = v[i]-1;
			cout << temp << " ";
			sum2 += temp;
		}
		for(int i = l; i < sum; i++){
			if(i%2 != 0 && sum2+i == sum){
				cout << i << " ";
				break;
			}
		}
		cout << "\n";
	} else{
		cout << "NO\n";
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		decode();
	}
	return 0;
}
