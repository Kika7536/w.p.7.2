#include<iostream>
using namespace std;


void err() {
	cout << "������. �������� ����� ���� ������ � ��������� �� 0 �� 1." << endl;
	cout << "��������� �������." << endl << endl;
}


void main() {
	setlocale(LC_ALL, "rus");

	cout << "������� 2. Immolate Improved." << endl;
	cout << "--------------------------------" << endl << endl;

	float health, power, resistance;
	bool check = true;
	
	while (check) {
		cout << "������� ���������� ��������: ";
		cin >> health;
		if (health < 0 || health > 1) err();
		else check = false;
	}
	check = true;

	while (check) {
		cout << "������� ���������������� ����� ����";
		cin >> resistance;
		if (resistance < 0 || resistance > 1) err();
		else check = false;
	}
	check = true;

	while (check) {
		

		cout << "������� �������� �����";
		cin >> power;
		if (power < 0 || power > 1) err();
		continue;

		if ()



		if (health == 0) {
			cout << "��������� �����!!!" << endl;
			break;
		}
		


	}



}