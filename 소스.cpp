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
	// 2차원 배열 선언하고 값 대입하기

	int t;
	cin >> t; // 테스트 케이스 개수 

	while (t--) {
		int x1, x2, y1, y2;
		cin >> x1 >> x2 >> y1 >> y2;

		int s = 0; // sum을 0으로 초기화해준다
		for (int i = x1 - 1; i < y1;i++) {
			for (int j = x2 - 1; j < y2;j++) {
				s += arr[i][j];
			}
		}
		cout << s << endl;
	}
}