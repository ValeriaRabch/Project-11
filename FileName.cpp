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

int main() {
	FullName people;
	bool choise;
	cout << "Are you want to full people? "; cin >> choise;
	if (choise == 1) {
		cout << "Enter surname, name and futher";
		Full(people);
	}

	

	return 0;
}