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

int main() {
	FullName people;

	return 0;
}