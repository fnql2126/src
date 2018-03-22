#include <iostream>

using namespace std;

int main(){
	int num;

	cin >> num;

	for (int i = 0; i < num; i++){
		int n;

		cin >> n;

		if (n == 0) cout << "1 0" << endl;
		else if (n == 1) cout << "0 1" << endl;
		else {
			int	last = 1; // j-2
			int before = 1; // j-1
			int result = 0; // j

			for (int j = 2; j < n; j++){
				result = last + before;
				last = before;
				before = result;
			}

			cout << last << " " << before << endl;
		}
	}

	return 0;
}