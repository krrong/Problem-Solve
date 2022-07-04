// ���� 9012��: ��ȣ (S4)
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
				// '('�� ���µ� ')'�� ������ �̹� VPS ���ڿ��� �ƴ�
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

		// ����ִٸ� VPS ���ڿ�
		if (s.empty()) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}

	return 0;
}