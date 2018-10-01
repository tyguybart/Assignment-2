#include "pch.h"
#include "Contact.h"


Contact::Contact()
{
	this->fName = "Stranger";
	this->lName = "Danger";
	this->phone = "(555)555-555";
	this->email = "NotAScam@PhishingDomain.net";
}

Contact::Contact(string fName, string lName, string phone, string email)
{
	this->fName = fName;
	this->lName = lName;
	this->phone = phone;
	this->email = email;
}

Contact::~Contact()
{
}
