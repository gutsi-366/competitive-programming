#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> events;
	for (int i = 0;i < n;i++) {
		int a, b;
		cin >> a >> b;
		events.push_back({ a,1 });
		events.push_back({ b,-1 });
	}
	
	sort(events.begin(), events.end());
	int count = 0, maxCount = 0;
	for (auto& e : events) {
		count += e.second;
		maxCount = max(maxCount, count);
	}
	cout << maxCount << endl;
}