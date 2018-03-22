#include <iostream>

using namespace std;

int main(){
	char str[1001];
	
	for (int i = 0; i < 100; i++){
		cin.getline(str, 101);
		cout << str << endl;
	}
	
	return 0;
}