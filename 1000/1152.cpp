#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	getline(cin, str, '\n');
	int count = 1, current = 1, next = str.find(' ', current) + 1;
	while (current < next){
		count++;
		current = next;
		next = str.find(' ', current) + 1;
	}
	
	if (str[str.length()-1] == ' ')
		count--;

	printf("%d\n", count);
	return 0;
}