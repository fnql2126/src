#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	stack<int> s;
	string str;
	getline(cin, str, '\n');

	for (int i = 0; i < n; i++){
		getline(cin, str, '\n');

		if (!str.find("push")){
			str.erase(0, 4);
			int n = stoi(str);
			s.push(n);
		}
		else if (!str.find("pop")){
			if (s.empty())
				printf("-1\n");
			else{
				printf("%d\n", s.top());
				s.pop();
			}
		}
		else if (!str.find("size"))
			printf("%d\n", s.size());
		else if (!str.find("empty")){
			printf("%d\n", s.empty());
		}
		else if (!str.find("top")){
			if (s.empty())
				printf("-1\n");
			else
				printf("%d\n", s.top());
		}
	}
	return 0;
}