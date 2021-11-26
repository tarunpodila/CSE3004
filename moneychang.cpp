#include <bits/stdc++.h>
using namespace std;

int denominations[] = { 1, 2, 5, 10, 20,50, 100, 500, 1000 };
int n = sizeof(denominations) / sizeof(denominations[0]);

void findMin(int V)
{
	sort(denominations, denominations + n);
	vector<int> ans;

	for (int i = n - 1; i >= 0; i--) {
		while (V >= denominations[i]) {
			V -= denominations[i];
			ans.push_back(denominations[i]);
		}
	}
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i]  << " + ";
}


int main()
{
	int n;
    cin>>n;
	findMin(n);
	return 0;
}
