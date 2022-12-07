#include "User.h"

int User::getId_prsn() {
	return this->id_prsn;
}
void User::setId_prsn(int tmp) {
	this->id_prsn = tmp;
}
int User::getId_client() {
	return this->id_client;
}
void User::setId_client(int tmp) {
	this->id_client = tmp;
}
System::DateTime^ User::getDateNaissance() {
	return this->DateNaissance;
}
void User::setDateNaissance(System::DateTime^ tmp) {
	this->DateNaissance = tmp;
}
System::String^ User::getNom() {
	return this->nom;
}
void User::setNom(System::String^ tmp) {
	this->nom = tmp;
}
System::String^ User::getPrenom() {
	return this->prenom;
}
void User::setPrenom(System::String^ tmp) {
	this->prenom = tmp;
}
System::String^ User::getEmail() {
	return this->email;
}
void User::setEmail(System::String^ tmp) {
	this->email = tmp;
}
System::String^ User::getPassword() {
	return this->password;
}
void User::setPassword(System::String^ tmp) {
	this->password = tmp;
}
System::String^ User::SelectClient() {
	return "SELECT * FROM dbo.client WHERE email_prsn = '" + this->email + "' AND mdp_prsn = '" + this->password + "';";
}