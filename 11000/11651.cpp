#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);

	vector<pair<int, int>> data(n);
	for (int i = 0; i < n; i++){
		int num[2];
		scanf("%d %d", &data[i].second, &data[i].first);
	}

	sort(data.begin(), data.end());

	for (vector<pair<int, int>>::iterator iter = data.begin(); iter < data.end(); iter++)
		printf("%d %d\n", iter->second, iter->first);

	return 0;
}