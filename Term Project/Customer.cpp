#include "Customer.h"

void Customer::printInfo() {
	cout << "Name: " << fName << " " << lName << ", Address: " << address << ", Email: " << email << endl;
}

void Customer::setFName(string _fname) {
	fName = _fname;
}
void Customer::setLName(string _lname) {
	lName = _lname;
}
void Customer::setAddress(string _address) {
	address = _address;
}
void Customer::setEmail(string _email) {
	email = _email;
}
void Customer::setPhone(int _phone) {
	phone = _phone;
}

string Customer::getFName() {
	return fName;
}
string Customer::getLName() {
	return lName;
}
string Customer::getAddress() {
	return address;
}
string Customer::getEmail() {
	return email;
}
int Customer::getPhone() {
	return phone;
}

Customer::Customer() :Customer("", "", "", "", 0) {

}
Customer::Customer(string _fname, string _lname, string _address, string _email, int _phone) {
	fName = _fname;
	lName = _lname;
	address = _address;
	email = _email;
	phone = _phone;
}