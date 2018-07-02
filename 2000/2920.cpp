#include <iostream>

using namespace std;

int main(){
	int str[8];
	for (int i = 0; i<8; i++){
		scanf("%d", &str[i]);
	}
	int current = 1, before = 0, flag = 0;
	do{
		if (str[current] > str[before]){
			if (flag == -1){
				flag = 0;
				break;
			}
			flag = 1;
		}
		else if (str[current] < str[before]){
			if (flag == 1){
				flag = 0;
				break;
			}
			flag = -1;
		}
		current++, before++;
	} while (current<8);

	switch (flag){
	case 1: printf("ascending\n"); break;
	case 0: printf("mixed\n"); break;
	case -1: printf("descending\n"); break;
	}

	return 0;
}