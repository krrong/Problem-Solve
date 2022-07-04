// 백준 1010번: 다리 놓기 (실버V)
#include <iostream>
using namespace std;

int T, N, M;
double result;
int bridge[30][30];	// 왼쪽 사이트, 오른쪽 사이트 개수에 따라 놓을 수 있는 다리의 수 저장

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			// 왼쪽 사이트가 없으면 다리를 놓을 수 없음
			if (i == 0) {
				bridge[i][j] = 0;
			}
			// 왼쪽 사이트가 하나면 놓을 수 있는 다리의 수는 오른쪽 사이트의 개수와 같음
			else if (i == 1) {
				bridge[i][j] = j;
			}
			else {
				// 오른쪽 사이트가 없다면 놓을 수 있는 다리의 수도 없음
				if (j == 0) {
					bridge[i][j] = 0;
				}
				// (i, j)의 사이트가 있는 상태에서 놓을 수 있는 다리의 수는 
				// (i-1, j-1) + (i, j-1)과 같음
				else {
					bridge[i][j] = bridge[i - 1][j - 1] + bridge[i][j - 1];
				}
			}
		}
	}

	cin >> T;
	while (T--) {
		cin >> N >> M;
		cout << bridge[N][M] << '\n';
	}
}