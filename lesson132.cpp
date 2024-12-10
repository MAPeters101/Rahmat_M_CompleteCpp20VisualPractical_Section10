#include <iostream>
#include <vector>

using namespace std;

/*
class Person {
public:
	Person(const string& NameValue, int AgeValue) {
		Age = new int;
		*Age = AgeValue;
	}

	Person(Person&& Other) : Age{ Other.Age } {
		Other.Age = nullptr;
	}
	Person(const Person* Other) = delete;

	~Person() {
		delete Age;
	}

	string Name{};
	int* Age{};

private:

};


int main() {

	Person Finn{ "Finn", 21 };

	vector<Person> Persons{};
	Persons.push_back(std::move(Finn));

	//cout << Finn.Age << endl;
	//cout << *Finn.Age << endl;

	return 0;
}

*/
