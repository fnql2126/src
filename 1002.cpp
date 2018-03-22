#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;

	cin >> n;

	for (int i = 0; i < n; i++){
		int x1, y1, r1, x2, y2, r2;

		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

		int cnt = 0;
		if (x1 == x2 && y1 == y2 && r1 == r2)	cnt = -1;
		else if (r1 + r2 == d || abs(r1 - r2) == d)	cnt = 1;
		else if (r1 + r2 > d && abs(r1 - r2) < d)	cnt = 2;
		else cnt = 0;

		cout << cnt << endl;
	}

	return 0;
}