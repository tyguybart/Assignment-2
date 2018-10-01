#ifndef contact_h
#define contact
#include <string>
using std::string;

class Contact
{
public:
	Contact();
	Contact(string fName, string lName, string phone, string email);
	~Contact();

	string getfName() { return this->fName; }
	void setfName(string update) { fName = update; }

	string getlName() { return this->lName; }
	void setlName(string update) { lName = update; }

	string getPhone() { return this->phone; }
	void setPhone(string update) { phone = update; }

	string getEmail() { return this->email; }
	void setEmail(string update) { email = update; }

private:
	string fName;
	string lName;
	string phone;
	string email;
};
#endif
