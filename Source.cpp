#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//1
	/*int hp;
	cin >> hp;
	if (hp <= 0) {
		cout << "false" << endl;
	}
	else {
		cout << "true" << endl;
	} */
	//2
	/*int t;
	cin >> t;
	if (t > 20) {
		cout << "on" << endl;
	}
	else {
		cout << "off" << endl;
	}*/
	//4
	double x, y;
	cin >> x;
	if (x > 0) {
		int y = sqrt(x - 2);
		cout << y << endl;
	}
	if (x == 0) {
		y = 0;
		cout << y << endl;
	}
	else {
		y = abs(x);
		cout << y << endl;
	}
	//5
	/*int a;
	cin >> a;
	if (a == 1) {
		cout << "большой" << endl;
	}
	if (a == 2) {
		cout << "указательный" << endl;
	}
	if (a == 3) {
		cout << "средний" << endl;
	}
	if (a == 4) {
		cout << "безымянный" << endl;
	}
	if (a == 5) {
		cout << "мизинец" << endl;
	}
	if (a < 1 && a>5) {
		cout << "ошибка" << endl;
	}*/
	//3
	/*int t, v;
	int g = 25;
	cin >> t >> v;
	if (t > g && v <= 80) {
		cout << "on" << endl;
		
	}
	else {
		cout << "off" << endl;
	}*/
}