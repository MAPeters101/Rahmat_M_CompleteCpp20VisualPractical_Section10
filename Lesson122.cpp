#include <iostream>

using namespace std;

class Person {
public:
	Person();
	Person(const string& Name);

private:
	string ClassName{};

};

int main() {
	Person NewPerson;
	Person Finn{ "Finn" };

	return 0;
}

Person::Person() {
	ClassName = "DefaultClass";
}

Person::Person(const string& Name) {
	ClassName = Name;
}


