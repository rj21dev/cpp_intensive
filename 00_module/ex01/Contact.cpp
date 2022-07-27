#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void Contact::setFirstName(std::string firstName) {

	this->firstName = firstName;
}
void Contact::setLastName(std::string lastName) {

	this->lastName = lastName;
}
void Contact::setNickname(std::string nickname) {

	this->nickname = nickname;
}
void Contact::setPhoneNumber(std::string phoneNumber) {

	this->phoneNumber = phoneNumber;
}
void Contact::setDarkestSecret(std::string darkestSecret) {

	this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() const {

	return this->firstName;
}
std::string Contact::getLastName() const {

	return this->lastName;
}
std::string Contact::getNickname() const {

	return this->nickname;
}
std::string Contact::getPhoneNumber() const {

	return this->phoneNumber;
}
std::string Contact::getDarkestSecret() const {
	
	return this->darkestSecret;
}
