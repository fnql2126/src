#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(){
	int n;
	vector<int> data;

	scanf("%d", &n);

	while (n / 10 != 0){
		data.push_back(n % 10);
		n = n / 10;
	}
	data.push_back(n);
	sort(data.begin(), data.end(), greater<int>());

	for (vector<int>::iterator iter = data.begin(); iter < data.end(); iter++)
		printf("%d", *iter);
	printf("\n");
	return 0;
}