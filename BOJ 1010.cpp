// ���� 1010��: �ٸ� ���� (�ǹ�V)
#include <iostream>
using namespace std;

int T, N, M;
double result;
int bridge[30][30];	// ���� ����Ʈ, ������ ����Ʈ ������ ���� ���� �� �ִ� �ٸ��� �� ����

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			// ���� ����Ʈ�� ������ �ٸ��� ���� �� ����
			if (i == 0) {
				bridge[i][j] = 0;
			}
			// ���� ����Ʈ�� �ϳ��� ���� �� �ִ� �ٸ��� ���� ������ ����Ʈ�� ������ ����
			else if (i == 1) {
				bridge[i][j] = j;
			}
			else {
				// ������ ����Ʈ�� ���ٸ� ���� �� �ִ� �ٸ��� ���� ����
				if (j == 0) {
					bridge[i][j] = 0;
				}
				// (i, j)�� ����Ʈ�� �ִ� ���¿��� ���� �� �ִ� �ٸ��� ���� 
				// (i-1, j-1) + (i, j-1)�� ����
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