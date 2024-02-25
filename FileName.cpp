#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

struct Marks {
	unsigned int mark1 : 1;
	unsigned int mark2 : 1;
	unsigned int mark3 : 1;
	unsigned int mark4 : 1;
	unsigned int mark5 : 1;
	unsigned int mark6 : 1;
	unsigned int mark7 : 1;
	unsigned int mark8 : 1;
	unsigned int mark9 : 1;
	unsigned int mark10 : 1;
};

struct FullName {
	char surname[20], name[10], father[10];
	Marks mark;
};

void Full(FullName &man) {
	cin >> man.surname >> man.name >> man.father;
	man.mark.mark1 = rand() % 2;
	man.mark.mark2 = rand() % 2;
	man.mark.mark3 = rand() % 2;
	man.mark.mark4 = rand() % 2;
	man.mark.mark5 = rand() % 2;
	man.mark.mark6 = rand() % 2;
	man.mark.mark7 = rand() % 2;
	man.mark.mark8 = rand() % 2;
	man.mark.mark9 = rand() % 2;
	man.mark.mark10 = rand() % 2;
}

void PrintPeople(FullName man) {
	cout << "Surname -" << man.surname << endl;
	cout << "Name -" << man.name << endl;
	cout << "Futher -" << man.father << endl;
	cout << "Marks -" << man.mark.mark1 << ',' << man.mark.mark2 << ',' << man.mark.mark3 << ',' << man.mark.mark4 << ',' << man.mark.mark5 << ',' << man.mark.mark6 << ',' << man.mark.mark7 << ',' << man.mark.mark8 << ',' << man.mark.mark9 << ',' << man.mark.mark10 << endl;
}

int Arithmetic(FullName man) {
	return (man.mark.mark1 + man.mark.mark2 + man.mark.mark3 + man.mark.mark4 + man.mark.mark5 + man.mark.mark6 + man.mark.mark7 + man.mark.mark8 + man.mark.mark9 + man.mark.mark10) / 10;
}

void PrintArithmetic(FullName man) {
	cout << "Arithmetic mean =" << Arithmetic(man) << endl;
}

int main() {
	/*FullName people;
	bool choise;
	cout << "Are you want to full people? "; cin >> choise;
	if (choise == 1) {
		cout << "Enter surname, name and futher";
		Full(people);
	}

	int a = 1;
	while (a != 3) {
		cout << "Select\n1 - print information\n2 - arithmetic mean\n3 - leave"; cin >> a;
		switch (a) {
		case 1: {
			PrintPeople(people);
		}
		case 2: {
			PrintArithmetic(people);
		}
		}
	}*/

	FullName people[5];

	return 0;
}