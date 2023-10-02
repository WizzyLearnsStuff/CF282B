#include<iostream>
#include<sstream>

using namespace std;

int main() {
	int n;
	stringstream ss;

	int as = 0, gs = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int diff = as - gs;
		int ai, gi;
		cin >> ai >> gi;
		
		if (abs(ai + diff) <= abs(diff - gi)) { ss << 'A'; as += ai; }
		else { ss << 'G'; gs += gi; }
	}

	if (abs(as - gs) > 500) {
		cout << -1;
		return 0;
	}

	cout << ss.rdbuf();
}
