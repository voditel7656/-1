#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
    int a, b, c, d, S;
	cout << "��������� � ���������� �����";
	cin >> a >> b >> c >> d;
	S = (a * c) + (b * d);
	cout << "����� ������� = " << S << endl;
}