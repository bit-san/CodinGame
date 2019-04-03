#include "pch.h"
#include "bits/stdc++.h"

using namespace std;

int main() {
	/*
		n=気温の数
		x=値がプラスの時の最小値
		y=値がマイナスの時の最小値
		res=出力する値
	*/
	int n,x,y,res;
	cin >> n;

	vector<int> data(n);
	for (int i = 0; i < n; i++) { 
		cin >> data.at(i); 
	}

	//気温の数が0ではなかった時の処理
	if (n != 0) {
		/*
			sortで小さい順に並び替える
			例：1,-2,-5,3	=>	-5,-2,1,3
		*/
		sort(data.begin(), data.end());
		x = data.at(n - 1);
		y = data.at(0);
		res = data.at(n - 1);

		for (int i = 0; i < n; i++) {
			if (data.at(i) == 0) {
				res = 0;
				break;
			}
			//値がプラスの時の処理
			else if (data.at(i) > 0) {
				if (x > data.at(i)) {
					x = data.at(i);
				}
			}
			//値がマイナスの時の処理
			else {
				if (y < data.at(i)) {
					y = data.at(i);
				}
			}
		}

		//入力したときに0がなかった時の処理
		if (res != 0) {
			if (abs(x) > abs(y)) {
				res = y;
			}
			else if (abs(x) < abs(y)) {
				res = x;
			}
			//値がプラスの時の最小値と値がマイナスの時の最小値が同じだった場合
			else {
				res = x;
			}
		}
		cout << res << endl;
	}

	//気温の数が0だった場合
	else {
		cout << 0 << endl;
	}

	return 0;
}