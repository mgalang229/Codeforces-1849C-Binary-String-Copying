#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void test_case(int& tc) {
	int n, m;
	string s;
	cin >> n >> m >> s;
	int lf[n], rg[n];
	// nearest 0 (from the left) 
	lf[0] = -1;
	for (int i = 0; i < n; i++) {
		if (i > 0) {
			lf[i] = lf[i-1];
		}
		if (s[i] == '0') {
			lf[i] = i;
		}
	}
	// nearest 1 (from the right)
	rg[n-1] = n;
	for (int i = n - 1; i >= 0; i--) {
		if (i + 1 < n) {
			rg[i] = rg[i+1];
		}
		if (s[i] == '1') {
			rg[i] = i;
		}
	}
	set<pair<int, int>> st;
	for (int i = 0; i < m; i++) {
		int l, r;
		cin >> l >> r;
		int ll = rg[l-1];
		int rr = lf[r-1];
		if (ll > rr) {
			st.insert({-1, -1}); // special segment (string does not change)
		} else {
			st.insert({ll, rr});
		}
	}
	cout << st.size() << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
