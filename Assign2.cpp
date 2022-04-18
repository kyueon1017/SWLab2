#include <iostream>
#include "bmpNew.h"//sprint 2
using namespace std;

int main() {
	unsigned char* mybmp = new unsigned char[200 * 300 * 3];
	unsigned char red = 0;
	for (int i = 0; i < 60000; i++) {//sprint 1
		if (red < 255) {
			red = i / 200;
		}
		mybmp[i * 3] = 0;		//B
		mybmp[i * 3 + 1] = 0;	//G
		mybmp[i * 3 + 2] = red;	//R
	}

	WriteBmp("mybmp.bmp", mybmp, 200, 300);//sprint3 
	//for (int i = 0; i < 300; i++) {//mybmp의 red요소만 int로 출력해보기
	//	for (int j = 0; j < 200; j++) {
	//		cout << int(mybmp[i * 200 * 3 + j*3 + 2]) << " ";
	//	}
	//	cout << endl;
	//}

	int x, y;
	unsigned char* bmpB = ReadBmp("sunflower.bmp", &x, &y);//24bits bmp
	WriteBmp("another_sunflower.bmp", bmpB, x, y);//sprint 4

	return 0;
}
