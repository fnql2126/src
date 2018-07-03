#include <iostream>

using namespace std;

int main(){
	int n1, n2, a, b;
	scanf("%d %d", &n1, &n2);
	n1 = (n1 % 10) * 100 + (n1 % 100) / 10 * 10 + n1 / 100;
	n2 = (n2 % 10) * 100 + (n2 % 100) / 10 * 10 + n2 / 100;
	
	if (n1 > n2)
		printf("%d\n", n1);
	else
		printf("%d\n", n2);
	return 0;
}