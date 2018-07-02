#include <iostream>

using namespace std;

int main(){
	char str[101], pos[26];
	for (int i = 0; i < 26; i++)
		pos[i] = -1;
	scanf("%s", str);
	int i = 0;

	while (str[i] != '\0'){
		if (pos[(int)str[i] - 97] == -1)
			pos[(int)str[i] - 97] = i;
		i++;
	}

	for (int i = 0; i < 26; i++)
		printf("%d ", pos[i]);
	printf("\n");
	return 0;
}