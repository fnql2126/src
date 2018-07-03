#include <iostream>

using namespace std;

int main(){
	int n, total = 0;
	scanf("%d", &n);

	for (int j = 0; j < n; j++){
		char str[101], count[26] = { 0 };
		scanf("%s", str);

		int i = 1, flag = 1;
		char before, current = str[0];
		count[str[0] - 97]++;
		while (str[i] != '\0'){
			before = current;
			current = str[i];

			if (before != current){
				if (count[current - 97] > 0){
					flag = 0;
					break;
				}
				else
					count[current - 97]++;
			}
			else
				count[current - 97]++;
			i++;
		}
		if (flag == 1 || i == 1)	total++;
	}
	printf("%d\n", total);

	return 0;
}