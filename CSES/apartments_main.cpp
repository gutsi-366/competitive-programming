#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		
	}
	vector<int> b(m);
	for (int i = 0;i < m;i++) {
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int j = 0;
	int i = 0;
	int result = 0;
	
	while (i < n && j < m) {
		if (b[j] < a[i] - k) {
			j++;
		}
		else if (b[j] > a[i] + k) {
			i++;
		}
		else {
			result++;
			i++;
			j++;
		}
	}
	cout << result << endl;
}