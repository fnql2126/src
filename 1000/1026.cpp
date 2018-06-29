#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	
	vector<int> A, B;
	
	for (int i = 0; i < n; i++){
		int num;
		scanf("%d", &num);
		A.push_back(num);
	}
	for (int i = 0; i < n; i++){
		int num;
		scanf("%d", &num);
		B.push_back(num);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	int sum = 0;
	vector<int>::iterator a, b;
	for (int i = 0; i < n; i++){
		a = A.begin() + i;
		b = B.begin() + (n - i - 1);
		sum += (*a) * (*b);
	}

	printf("%d\n", sum);
	return 0;
}