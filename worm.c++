#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
	cin >> n;
	vector<int> x(n);
	for (int i = 0; i < n; i++) cin >> x[i];
	for (int i = 1; i < n; i++) x[i] += x[i - 1];
	int m;
	cin >> m;
	sort(x.begin(), x.end());
	while (m--) {
		int temp;
		cin >> temp;
		int ans = lower_bound(x.begin(), x.end(), temp) - x.begin();
		cout << ans + 1 << "\n";
	}
return 0;	
}
