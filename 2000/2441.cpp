#include <iostream>

using namespace std;

int main(){
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		for (int k = 0; k < i; k++)
			printf(" ");
		for (int j = 0; j < n - i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}