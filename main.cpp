#include<iostream>
using namespace std;


void err() {
	cout << "Ошибка. Значение может быть только в диапазоне от 0 до 1." << endl;
	cout << "Повторите попытку." << endl << endl;
}


void main() {
	setlocale(LC_ALL, "rus");

	cout << "Задание 2. Immolate Improved." << endl;
	cout << "--------------------------------" << endl << endl;

	float health, power, resistance;
	bool check = true;
	
	while (check) {
		cout << "Введите количество здоровья: ";
		cin >> health;
		if (health < 0 || health > 1) err();
		else check = false;
	}
	check = true;

	while (check) {
		cout << "Введите сопротивляемость магии орка";
		cin >> resistance;
		if (resistance < 0 || resistance > 1) err();
		else check = false;
	}
	check = true;

	while (check) {
		

		cout << "Введите мощность удара";
		cin >> power;
		if (power < 0 || power > 1) err();
		continue;

		if ()



		if (health == 0) {
			cout << "Противник мертв!!!" << endl;
			break;
		}
		


	}



}