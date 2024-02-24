#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Passport {
protected:
	string firstName;
	string lastName;
	string passportNumber;
	string dateOfBirth;
	string nationality;
public:
	Passport(const string& firstName, const string& lastName, const string& passportNumber, const string& dateOfBirth, const string& nationality)
		: firstName(firstName), lastName(lastName), passportNumber(passportNumber), dateOfBirth(dateOfBirth), nationality(nationality) {}
	void display() const {
		cout << "Passport Details:" << endl;
		cout << "First Name: " << firstName << endl;
		cout << "Last Name: " << lastName << endl;
		cout << "Passport Number: " << passportNumber << endl;
		cout << "Date of Birth: " << dateOfBirth << endl;
		cout << "Nationality: " << nationality << endl;
	}
};
class ForeignPassport : public Passport {
private:
	string passportNumberForeign;
	string visaInformation;
public:
	ForeignPassport(const string& firstName, const string& lastName, const string& passportNumber, const string& dateOfBirth, const string& nationality, const string& passportNumberForeign, const string& visaInformation)
		: Passport(firstName, lastName, passportNumber, dateOfBirth, nationality), passportNumberForeign(passportNumberForeign), visaInformation(visaInformation) {}
	void display() const {
		Passport::display();
		cout << "Foreign Passport Details:" << endl;
		cout << "Foreign Passport Number: " << passportNumberForeign << endl;
		cout << "Visa Information: " << visaInformation << endl;
	}
};
int main()
{
   Passport ukrainianPassport("Ivan", "Ivanov", "1234567890", "01.06.2000", "Ukrainian");
   ukrainianPassport.display();
   cout << endl;
   ForeignPassport foreignPassport("Ivan", "Ivanov", "1234567890", "01.06.2000", "Ukrainian", "ABCDEFG", "Valid visas for countries Hungary, Austria, Germany");
   foreignPassport.display();
   return 0;
}
