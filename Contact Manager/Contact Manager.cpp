// Contact Manager.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Contact.h"

#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;
#include <vector>
using std::vector;

using namespace std;

int main()
{
	Contact contact1;
	Contact contact2("Siemore", "Buts", "(123)456-789", "cmoreButs@gmai.com");
	Contact contact3("Harvee", "Daenger", "(911)420-6969", "kickstand12@gmail.com");

	vector<Contact> contacts;
	contacts.push_back(contact1);
	contacts.push_back(contact2);
	contacts.push_back(contact3);

	for (Contact c : contacts)
	{
		cout << "--------------------" << endl
			<< "First Name: " << c.getfName() << endl
			<< "Last Name: " << c.getlName() << endl
			<< "Phone Number: " << c.getPhone() << endl
			<< "Email: " << c.getEmail() << endl;
	}

	Contact contact4;
	contacts[0] = contact4;

	Contact * ptr1 = &contacts[1];

	Contact &ref1 = contacts[2];

	contact4.setEmail("changed");
	ptr1->setEmail("changed");
	ref1.setEmail("changed");

	//Only one value not changed, the email for contact4

	cout << "### Changes Below ###" << endl;
	for (Contact c : contacts)
	{
		cout << "--------------------" << endl
			<< "First Name: " << c.getfName() << endl
			<< "Last Name: " << c.getlName() << endl
			<< "Phone Number: " << c.getPhone() << endl
			<< "Email: " << c.getEmail() << endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
