#include <iostream>

using namespace std;

int main(){
	int num, num1;

	scanf("%d", &num);

	num1 = num;
	int count = 0;

	do{
		int num2 = num / 10 + num % 10;
		num = num % 10 * 10 + num2 % 10;
		count++;
	}while (num != num1);

	printf("%d\n", count);

	return 0;
}