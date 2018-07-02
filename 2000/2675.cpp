#include <iostream>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		int m;
		char str[21];
		scanf("%d", &m);
		scanf("%s", str);
		int j = 0;
		while (str[j] != '\0'){
			for (int k = 0; k < m; k++)
				printf("%c", str[j]);
			j++;
		}
		printf("\n");
	}
	return 0;
}