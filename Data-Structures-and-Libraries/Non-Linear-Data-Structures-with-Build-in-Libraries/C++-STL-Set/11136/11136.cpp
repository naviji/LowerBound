#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <string>
#include <stack>
#include <cmath>
#include <iostream>
using namespace std;
#define FOR(i,j,k) for(int i=j; i<k; i++)
#define FORD(i,j,k) for(int i=j; i>=k; i--)
#define ll long long
#define pii pair<int, int>
#define vi vector<int >
#define pb push_back
#define REP(i,n) FOR(i,0,n)
#define ld long double
const int INF = 1000000009;
const long long INFLL = (ll)INF * (ll)INF;
const ld EPS = 10e-9;

int main() {
	int t, k, x, n, cost;
	multiset<int, greater<int>> ms;

	while (scanf("%d", &n), n) {
		cost = 0;
		ms.clear();
		while (n--) {
			scanf("%d", &k);
			while (k--) {
				scanf("%d", &x);
				ms.insert(x);
			}

			int largest = *(ms.begin());
			int smallest = *(--ms.end());

			cost += largest-smallest;

			ms.erase(ms.begin());
			ms.erase(--ms.end());

		}
		printf("%d\n", cost);
	}
}



