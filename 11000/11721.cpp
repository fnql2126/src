#include <iostream>

using namespace std;

int main(){
	char str[101] = { NULL };

	scanf("%s", str);

	for (int i = 0; i < 100; i = i + 10){
		for (int j = 0; j < 10; j++){
			if (str[i + j] == NULL){
				printf("\n");
				return -1;
			}
			printf("%c", str[i + j]);
		}
		printf("\n");
	}

	return 0;
}