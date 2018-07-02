#include <iostream>

using namespace std;

int main(){
	int score[5];
	for (int i = 0; i < 5; i++)
		scanf("%d", &score[i]);
	int total = 0;
	for (int i = 0; i < 5; i++){
		if (score[i] < 40)
			score[i] = 40;
		total += score[i];
	}
	printf("%d\n", total / 5);
	return 0;
}