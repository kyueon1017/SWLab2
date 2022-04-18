#include <iostream>
#include <cmath>
#include <fstream> // ofstream
#define PI 3.1415926535

using namespace std;


int main() {

	//ofstream으로 파일 생성. 

	//Sprint1
	ofstream file("sin.txt");

	float x = 0.0, y = 0.0, dx = 2. * PI / 20., dy = 2. * PI / 20.;
	float f = sin(x) * sin(y);


	float sumdx = 0, sumdy = 0;

	if (!file) {
		cout << "txt파일을 열 수 없습니다.\n";
		return -1;
	}

	//Sprint1_1.
	for (int i = 0; i < 20; i++) {
		file << " "; // 첫 라인 첫칸을 빈칸으로 설정. 
		file << sumdx << " ";
		cout << i << "dx : " << sumdx << endl;

		sumdx += dx; // dx=0부터 표현하기 때문에 0값 출력 이후 dx를 추가. 

	}

	cout << endl;
	file << endl;

	//이중 for문.
	for (int i = 0; i < 20; i++) {

		file << sumdy << " ";
		for (int j = 0; j < 20; j++) {
			f = sin(sumdx) * sin(sumdy);
			// file << sumdy << " ";

			file << f << " ";
			sumdx += dx;

			cout << "f(" << j << ", " << i << ") : " << f << endl;
		}

		sumdy += dy;
		file << endl;
	}

	file.close();
}
