#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int data[4];

	scanf("%d %d %d", &data[0], &data[1], &data[2]);
	sort(data, data + 3);
	printf("%d\n", data[1]);

	return 0;
}