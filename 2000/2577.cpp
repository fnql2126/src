#include <iostream>

using namespace std;

int main(){
	int count[10] = { 0 }, num[3], total = 1;
	for (int i = 0; i < 3; i++){
		scanf("%d", &num[i]);
		total *= num[i];
	}
	

	while (total != 0){
		int a = total % 10;
		count[a]++;
		total = total / 10;
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", count[i]);

	return 0;
}