#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <string>

using namespace std;

struct car {

	int year; //год выпуска
	string model; //название модели
	int mileage; //пробег
	float average_fuel; //средний расход
};

void data_time() {
	SYSTEMTIME st;
	GetLocalTime(&st);
	cout << "Время: " << st.wHour << " " << st.wMinute << " " << st.wSecond << endl;
	cout << "Дата: " << st.wDay << " " << st.wMonth << " " << st.wYear << endl;
}

void media(bool bluetooth) {
	string name; 
	name = "My BMW 9779";
	if (bluetooth == true) { cout << "bluetooth вкл " << endl;	cout << "Имя устройства:" << name << endl; }
	else { cout << "bluetooth выкл " << endl; }
}

void car_info() {
	car BMW;
	BMW.model = "BMW 3 серии";
	BMW.year = 2020;
	BMW.mileage = 60000;
	BMW.average_fuel = 10.5;
	cout << "Модель: " << BMW.model << "\nгод выпуска:" << BMW.year << endl;
	cout << "пробег: " << BMW.mileage << "км" <<"\n средний рассход топлива: " << BMW.average_fuel <<"л/100км " << endl;
	float tire[4]{ 2.3, 2.3, 2.3, 2.3 }; //Давление в шинах
	for (int k = 0; k < 4; k++) {
		
		if (tire[k] < 2.0) {
			cout << "В колесе " << k + 1 << "Давление ниже нормы. Срочно проверьте колесо " << endl;
		} 
		else { cout << "Давление в колесе " <<k+1<<" = "<< tire[k] << endl; }
	}
	char oil = 'Norm';
	if (oil == 'Max') { cout << "Высокий уровень масла, слейте излишек " << endl; }
	if (oil == 'Min') { cout << "Низкий уровень масла, добавьте до нормального уровня " << endl; }
	else { cout << "Уровень масла в норме " << endl; }
}

void radio() {
	int station;
	cout << "Выберите радиостанцию: " << endl;
	cout << "1 - Hit FM" << endl;
	cout << "2 - Retro FM" << endl;
	cout << "3 - DFM FM" << endl;
	cout << "4 - Europa plus FM" << endl;
	cout << "5 - Energy" << endl;
	cout << "0 - Закрыть радио" << endl;
	do {
	cin >> station;
	switch (station) {
	case 1: cout << "Hit FM" << endl; break;
	case 2: cout << "Retro FM" << endl; break;
	case 3: cout << "DFM FM" << endl; break;
	case 4: cout << "Europa plus FM" << endl; break;
	case 5: cout << "Energy" << endl; break;
	}
	} while (station != 0);
}

int main() {
	setlocale(LC_ALL, "RUS");
	
	data_time();
	cout << "Добро пожаловать!"
		<< "\n1 - Радио;"
		<< "\n2 - Информация об автомобиле;"
		<< "\n3 - Устройства и носители;"
		<< "\n4 - Посмотреть дату и время;"
		<< "\n0 - Выключитить меню;" << endl;
	
	int chouse;
	do {
		cin >> chouse;
		switch (chouse) {
		case 1: radio(); break;
		case 2: car_info(); break;
		case 3: media(1); break;
		case 4: data_time(); break;
		}
	}while (chouse != 0);

	return 0;
}