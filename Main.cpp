#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <string>

using namespace std;

struct car {

	int year; //��� �������
	string model; //�������� ������
	int mileage; //������
	float average_fuel; //������� ������
};

void data_time() {
	SYSTEMTIME st;
	GetLocalTime(&st);
	cout << "�����: " << st.wHour << " " << st.wMinute << " " << st.wSecond << endl;
	cout << "����: " << st.wDay << " " << st.wMonth << " " << st.wYear << endl;
}

void media(bool bluetooth) {
	string name; 
	name = "My BMW 9779";
	if (bluetooth == true) { cout << "bluetooth ��� " << endl;	cout << "��� ����������:" << name << endl; }
	else { cout << "bluetooth ���� " << endl; }
}

void car_info() {
	car BMW;
	BMW.model = "BMW 3 �����";
	BMW.year = 2020;
	BMW.mileage = 60000;
	BMW.average_fuel = 10.5;
	cout << "������: " << BMW.model << "\n��� �������:" << BMW.year << endl;
	cout << "������: " << BMW.mileage << "��" <<"\n ������� ������� �������: " << BMW.average_fuel <<"�/100�� " << endl;
	float tire[4]{ 2.3, 2.3, 2.3, 2.3 }; //�������� � �����
	for (int k = 0; k < 4; k++) {
		
		if (tire[k] < 2.0) {
			cout << "� ������ " << k + 1 << "�������� ���� �����. ������ ��������� ������ " << endl;
		} 
		else { cout << "�������� � ������ " <<k+1<<" = "<< tire[k] << endl; }
	}
	char oil = 'Norm';
	if (oil == 'Max') { cout << "������� ������� �����, ������ ������� " << endl; }
	if (oil == 'Min') { cout << "������ ������� �����, �������� �� ����������� ������ " << endl; }
	else { cout << "������� ����� � ����� " << endl; }
}

void radio() {
	int station;
	cout << "�������� ������������: " << endl;
	cout << "1 - Hit FM" << endl;
	cout << "2 - Retro FM" << endl;
	cout << "3 - DFM FM" << endl;
	cout << "4 - Europa plus FM" << endl;
	cout << "5 - Energy" << endl;
	cout << "0 - ������� �����" << endl;
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
	cout << "����� ����������!"
		<< "\n1 - �����;"
		<< "\n2 - ���������� �� ����������;"
		<< "\n3 - ���������� � ��������;"
		<< "\n4 - ���������� ���� � �����;"
		<< "\n0 - ����������� ����;" << endl;
	
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