#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int** arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
		for (int j = 0; j < m; j++) {
			int n;
			cin >> n;
			arr[i][j] = n;
		}
	} 
	// 2���� �迭 �����ϰ� �� �����ϱ�

	int t;
	cin >> t; // �׽�Ʈ ���̽� ���� 

	while (t--) {
		int x1, x2, y1, y2;
		cin >> x1 >> x2 >> y1 >> y2;

		int s = 0; // sum�� 0���� �ʱ�ȭ���ش�
		for (int i = x1 - 1; i < y1;i++) {
			for (int j = x2 - 1; j < y2;j++) {
				s += arr[i][j];
			}
		}
		cout << s << endl;
	}
}