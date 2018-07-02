#include <iostream>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		char str[81];
		scanf("%s", str);
		int current = 0, count = 0, total = 0;

		while (str[current] != '\0'){
			if (str[current] == 'O')
				count++;
			else
				count = 0;
			total += count;
			current++;
		}
		printf("%d\n", total);
	}
	return 0;
}