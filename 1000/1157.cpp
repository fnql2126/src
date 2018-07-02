#include <iostream>

using namespace std;

int main(){
	char str[1000001];
	scanf("%s", str);
	int i = 0, count[26] = { 0 };
	while (str[i] != '\0'){
		if (str[i] < 97)
			count[(int)str[i] - 65]++;
		else
			count[(int)str[i] - 97]++;
		i++;
	}

	int max = 0, max_s = -1;
	for (int i = 1; i < 26; i++){
		if (count[i] > count[max])
			max = i;
		else if (count[i] == count[max] && count[max] > 0)
			max_s = i;
	}
	if (count[max] == count[max_s])
		printf("?\n");
	else
		printf("%c\n", 65 + max);
	return 0;
}