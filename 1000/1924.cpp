#include <iostream>

using namespace std;

int main(){
	int x, y;

	scanf("%d %d", &x, &y);

	int total = 0;
	for (int i = 1; i < x; i++){
		if (i == 4 || i == 6 || i == 9 || i == 11)
			total += 30;
		else if (i == 2)
			total += 28;
		else
			total += 31;
	}

	total += y;

	switch (total % 7){
	case 1:
		printf("MON\n"); break;
	case 2:
		printf("TUE\n"); break;
	case 3:
		printf("WED\n"); break;
	case 4:
		printf("THU\n"); break;
	case 5:
		printf("FRI\n"); break;
	case 6:
		printf("SAT\n"); break;
	case 0:
		printf("SUN\n"); break;
	}

	return 0;
}