#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);

	char **str = new char*[n];
	for (int i = 0; i < n; i++)
		str[i] = new char[201];
	vector<pair<pair<int, int>, char*>> data(n);
	for (int i = 0; i < n; i++){
		scanf("%d %s", &data[i].first.first, str[i]);
		data[i].first.second = i;
		data[i].second = str[i];
	}

	sort(data.begin(), data.end());

	for (int i = 0; i < n; i++){
		printf("%d %s\n", data[i].first.first, data[i].second);
	}
	return 0;
}