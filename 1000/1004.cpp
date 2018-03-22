#include <iostream>
#include <cmath>

using namespace std;


int main(){
	int n;

	cin >> n;

	for (int i = 0; i < n; i++){
		int x1, y1, x2, y2;
		int count = 0;

		cin >> x1 >> y1 >> x2 >> y2;

		int m;

		cin >> m;

		for (int j = 0; j < m; j++){
			int x, y, r;

			cin >> x >> y >> r;

			float d1 = sqrt(pow(x - x1, 2) + pow(y - y1, 2));
			float d2 = sqrt(pow(x - x2, 2) + pow(y - y2, 2));

			if (d1 < r){ // ������� �� �ȿ� ���� ��
				if (d2 > r) // �������� �� �ۿ� ���� ��
					count += 1;
			}
			else if (d1 > r){ // ������� �� �ۿ� ���� ��
				if (d2 < r)// �������� �� �ȿ� ���� ��
					count += 1;
			}
		}

		cout << count << endl;
	}

	return 0;
}