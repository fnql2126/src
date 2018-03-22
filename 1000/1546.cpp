#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int num;
	float data[1001];

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
		scanf("%f", &data[i]);

	sort(data, data + num);

	float sum = 0;
	for (int i = 0; i < num; i++){
		data[i] = data[i] / data[num - 1] * 100;
		sum += data[i];
	}

	printf("%.2f\n", sum / num);

	return 0;
}