#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);

	vector<pair<int, int>> data(n);
	for (int i = 0; i < n; i++){
		scanf("%d %d", &data[i].first, &data[i].second);
	}

	sort(data.begin(), data.end());

	for (vector<pair<int, int>>::iterator iter = data.begin(); iter < data.end(); iter++)
		printf("%d %d\n", iter->first, iter->second);

	return 0;
}