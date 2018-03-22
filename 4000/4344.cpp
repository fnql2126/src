#include <iostream>

using namespace std;

int main(){
	int num1, num2;

	scanf("%d", &num1);

	for (int i = 0; i < num1; i++){
		scanf("%d", &num2);

		float data[1001];
		float sum = 0;

		for (int j = 0; j < num2; j++){
			scanf("%f", &data[j]);
			sum += data[j];
		}

		sum = sum / num2;

		int count = 0;
		for (int j = 0; j < num2; j++)
		{
			if (data[j] > sum)
				count++;
		}

		float result = ((float)count / (float)num2) * 100;
		printf("%.3f%%\n", result);

	}

	return 0;
}