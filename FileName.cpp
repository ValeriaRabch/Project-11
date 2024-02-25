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

FullName* AddNewPeople(FullName people[], int& size, char surname[], char name[], char father[]) {
	FullName* man = new FullName[size + 1];
	for (int i = 0; i < size; i++) {
		strcpy(man[i].surname, people[i].surname);
		strcpy(man[i].name, people[i].name);
		strcpy(man[i].father, people[i].father);
		man[i].mark = people[i].mark;
	}
	strcpy(man[size].surname, surname);
	strcpy(man[size].name, name);
	strcpy(man[size].father, father);
	size++;
	delete[] people;
	return man;
}

void PrintPeoples(FullName man[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Surname -" << man[i].surname << endl;
		cout << "Name -" << man[i].name << endl;
		cout << "Futher -" << man[i].father << endl;
		cout << "Marks -" << man[i].mark.mark1 << ',' << man[i].mark.mark2 << ',' << man[i].mark.mark3 << ',' << man[i].mark.mark4 << ',' << man[i].mark.mark5 << ',' << man[i].mark.mark6 << ',' << man[i].mark.mark7 << ',' << man[i].mark.mark8 << ',' << man[i].mark.mark9 << ',' << man[i].mark.mark10 << endl;
	}
}

FullName* AddMarks(FullName people[], int marks[], int index) {
	people[index].mark.mark1 = marks[0];
	people[index].mark.mark2 = marks[1];
	people[index].mark.mark3 = marks[2];
	people[index].mark.mark4 = marks[3];
	people[index].mark.mark5 = marks[4];
	people[index].mark.mark6 = marks[5];
	people[index].mark.mark7 = marks[6];
	people[index].mark.mark8 = marks[7];
	people[index].mark.mark9 = marks[8];
	people[index].mark.mark10 = marks[9];
	return people;
}

void PrintMarks(FullName man[], int index) {
	cout << "Marks: " << man[index].mark.mark1 << man[index].mark.mark2 << man[index].mark.mark3 << man[index].mark.mark4 << man[index].mark.mark5 << man[index].mark.mark6 << man[index].mark.mark7 << man[index].mark.mark8 << man[index].mark.mark9 << man[index].mark.mark10;
	cout << endl;
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

	int size = 0;
	FullName* people = new FullName[size];
	int a = 1, index; char surname[20], name[10], father[10]; int marks[10];
	while (a != 0) {
		cout << "Select\n1 - add new man\n2 - rate it \n3 - print peoples\n4 - print marks man"; cin >> a;
		if (a == 1) {
			cout << "Enter surname, name, father";
			cin >> surname >> name >> father;
			people = AddNewPeople(people, size, surname, name, father);
		}
		if (a == 2) {
			cout << "Which man?"; cin >> index;
			cout << "Enter marks(0 or 1)\n";
			for (int i = 0; i < 10; i++) {
				cout << "Enter - ";
				cin >> marks[i];
			}
			AddMarks(people, marks, index - 1);
		}
		if (a == 3) {
			PrintPeoples(people, size);
		}
		if (a == 4) {
			cout << " Which man?"; cin >> index;
			PrintMarks(people, index - 1);
		}

	}

	delete[] people;
	return 0;
}