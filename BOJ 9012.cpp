// 백준 9012번: 괄호 (S4)
#include <iostream>
#include <stack>
using namespace std;

int T;
string command;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> T;
	while (T--) {
		stack<int> s;
		bool possible = true;

		cin >> command;

		for (int i = 0; i < command.size(); i++) {
			if (command[i] == '(') {
				s.push(1);
			}
			else if (command[i] == ')') {
				// '('이 없는데 ')'이 나오면 이미 VPS 문자열이 아님
				if (s.empty()) {
					possible = false;
				}
				else {
					s.pop();
				}
			}
		}

		if (possible == false) {
			cout << "NO" << '\n';
			continue;
		}

		// 비어있다면 VPS 문자열
		if (s.empty()) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}

	return 0;
}