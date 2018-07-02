#include <iostream>

using namespace std;

bool func(int n){
	int a = n % 10;
	n = n / 10;
	int b = n % 10;
	int sub = b - a;
	int flag = 0;

	while (n / 10 != 0){
		a = b;
		n = n / 10;
		b = n % 10;
		if (b-a != sub){
			flag = 1;
			break;
		}
	}

	return flag;
}
int main(){
	int count = 0;
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		if (func(i) == 0)
			count++;

	printf("%d\n", count);
	return 0;
}