#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int lightX; // 雷のx座標
	int lightY; // 雷のy座標
	int initialTX; // トールの初期x座標
	int initialTY; // トールの初期y座標

	cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();

	int thorX = initialTX;
	int thorY = initialTY;

	while (1) {
		int remainingTurns; //残りのターン数
		cin >> remainingTurns; cin.ignore();
		string directionX = "";
		string directionY = "";

		if (lightX > thorX) {
			directionX = "E";	//東へ
			thorX++;
		}
		else if (lightX < thorX) {
			directionX = "W";	//西へ
			thorX--;
		}
		if (lightY > thorY) {
			directionY = "S";	//南へ
			thorY++;
		}
		else if (lightY < thorY) {
			directionY = "N";	//北へ
			thorY--;
		}
		cout << directionY << directionX << endl; //移動
	}
}