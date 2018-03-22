#include <iostream>

using namespace std;

int main(){
	int num, condition;
	int data[10001];
	int count = 0;

	scanf("%d %d", &num, &condition);

	for (int i = 0; i < num; i++){
		int n;
		scanf("%d", &n);

		if (n < condition){
			data[count++] = n;
		}
	}

	for (int i = 0; i < count; i++)
		printf("%d ", data[i]);

	printf("\n");

	return 0;
}