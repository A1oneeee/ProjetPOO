#include "Client.h"

Client::Client () : Personne() { }

// -> SET / GET ID_client
void Client::setID_client(int tmp) { this->ID_client = tmp; }
int Client::getID_client() { return this->ID_client; }

// -> SET / GET date_naissance
void Client::setDate_naissance(System::DateTime^ tmp) { this->date_naissance = tmp; }
//System::DateTime^ Client::getDate_naissance() { return this->date_naissance; }