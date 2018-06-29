#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int cnt[10001] = { 0 };
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		int num;
		scanf("%d", &num);
		cnt[num]++;
	}

	for (int i = 0; i < 10001; i++){
		if (cnt[i] != 0)
			for (int j = 0; j < cnt[i]; j++)
				printf("%d\n", i);
	}
	return 0;
}