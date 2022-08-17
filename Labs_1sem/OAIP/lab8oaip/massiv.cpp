#include <iostream>

using namespace std;

void main() {
	char ms[5][5] = { {1,1,1,1,1},
					{1,1,1,1,1},
					{1,1,1,1,1},
					{1,1,1,1,1},
					{1,1,1,1,1} };
	const int x,y;
	x = 1;
	y = 5;
	ms[x][y] = "*";
	for (x = 0; x < 5; x++) {
		for (y = 0; y < 5; y++) {
			cout << ms[x][y];
		}
		cout << "\n";
	}
}