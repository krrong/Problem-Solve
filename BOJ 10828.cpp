// 백준 10828번: 스택 (S4)
# include <iostream>
# include <stack>
using namespace std;

int N, t;
string command;
stack<int> s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	while (N--) {
		cin >> command;

		if (command == "push") {
			cin >> t;
			s.push(t);
		}
		else if (command == "top") {
			if (s.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << s.top() << '\n';
			}
		}
		else if (command == "size") {
			cout << s.size() << '\n';
		}
		else if (command == "pop") {
			if (s.empty()) {
				cout << -1 << '\n';
			}
			else {
				int tmp = s.top();
				s.pop();
				cout << tmp << '\n';
			}
		}
		else if (command == "empty") {
			if (s.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else {

		}
	}

	return 0;
}