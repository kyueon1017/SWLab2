#include <iostream>
#include <cmath>
#include <fstream> // ofstream
#define PI 3.1415926535

using namespace std;


int main() {

	//ofstream���� ���� ����. 

	//Sprint1
	ofstream file("sin.txt");

	float x = 0.0, y = 0.0, dx = 2. * PI / 20., dy = 2. * PI / 20.;
	float f = sin(x) * sin(y);


	float sumdx = 0, sumdy = 0;

	if (!file) {
		cout << "txt������ �� �� �����ϴ�.\n";
		return -1;
	}

	//Sprint1_1.
	for (int i = 0; i < 20; i++) {
		file << " "; // ù ���� ùĭ�� ��ĭ���� ����. 
		file << sumdx << " ";
		cout << i << "dx : " << sumdx << endl;

		sumdx += dx; // dx=0���� ǥ���ϱ� ������ 0�� ��� ���� dx�� �߰�. 

	}

	cout << endl;
	file << endl;

	//���� for��.
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
