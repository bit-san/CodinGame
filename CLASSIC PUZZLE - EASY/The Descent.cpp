#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	while (1) {
		int max = 0;
		int imax = 0;

		for (int i = 0; i < 8; i++) {
			int mountainH; //山の大きさ
			cin >> mountainH; cin.ignore();

			if (mountainH > max) {
				//一番大きな山の場所を取得する
				max = mountainH;
				imax = i;
			}
		}
		//出力
		cout << imax << endl;
	}
}