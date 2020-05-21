#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;


class Person {
	char* name;
	int id;
public:
	Person(Person& c);
	Person(int id, const char* name);
	~Person();
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(Person& c) {
	this->id = c.id;
	int len = strlen(c.name);
	this->name = new char[len + 1];
	strcpy(this->name, c.name);
}

Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}

Person :: ~Person() {
	if (name)
		delete[]name;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae");
	Person daughter(father);

	cout << "daughter ��ü ���� ���� ----" << endl;
	father.show();
	daughter.show();
	daughter.changeName("Grace");
	cout << "daughter�� �̸��� Grace �� ���� �� �� ----" << endl;
	father.show();
	daughter.show();
	
	return 0;

}