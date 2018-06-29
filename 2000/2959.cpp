#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> data(4);
	for (int i = 0; i < 4; i++)
		scanf("%d", &data[i]);
	sort(data.begin(), data.end());

	printf("%d\n", data[0] * data[2]);
	return 0;
}
