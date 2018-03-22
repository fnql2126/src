#include <iostream>

using namespace std;

int main(){
	int n;

	cin >> n;

	int a, b, c, d;

	a = n / 5;
	b = n % 5;
	c = b / 3;
	d = b % 3;

	if (d){
		while (d){
			a--;
			b = b + 5;
			c = b / 3;
			d = b % 3;

			if (a < 0){
				cout << -1 << endl;
				return -1;
			}
		}
	}

	cout << a + c << endl;

	return 0;
}