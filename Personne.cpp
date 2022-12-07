#include "Personne.h"

Personne::Personne() : ID_prsn(0), nom(""), prenom(""), email("") { }

// -> SET / GET ID_prsn
void Personne::setId_prsn(int tmpid) { this->ID_prsn = tmpid; }
int Personne::getID_prsn() { return this->ID_prsn; }

// -> SET / GET nom
void Personne::setNom(System::String^ tmpnom) { this->nom = tmpnom; }
System::String^ Personne::getNom() { return this->nom; }

// -> SET / GET prenom
void Personne::setPrenom(System::String^ tmpprenom) { this->prenom = tmpprenom; }
System::String^ Personne::getPrenom() { return this->prenom; }

// -> SET / GET email
void Personne::setEmail(System::String^ tmpemail) { this->email = tmpemail; }
System::String^ Personne::getEmail() { return this->email; }


/////////////////////////// Méthodes classe Client ///////////////////////////
// -> SET / GET ID_client
void Personne::setID_client(int tmp) { }
int Personne::getID_client() { return 0; }

// -> SET / GET date_naissance
void Personne::setDate_naissance(System::DateTime^ tmp) { }
/*
System::DateTime^ Personne::getDate_naissance() { return ; }
*/

/////////////////////////// Méthodes classe Personnel ///////////////////////////
// -> SET / GET ID_personnel
void Personne::setID_personnel(int tmp) { }
int Personne::getID_personnel() { return 0; }

// -> SET / GET code_secu
void Personne::setCode_secu(System::String^) { }
System::String^ Personne::getCode_secu() { return " "; }

// -> SET / GET date_embauche
void Personne::setDate_embauche(System::DateTime^ tmp){}
//System::DateTime^ Personne::getDate_embauche() { return; };

// -> SET / GET ID_supp
void Personne::setID_supp(int tmp){ }
int Personne::getID_supp() { return 0; }

// -> SET / GET admin_
void Personne::setAdmin(bool tmp){ }
bool Personne::getAdmin() { return 0; }

// -> SET / GET ID_adresse
void Personne::setID_adresse(int tmp){ }
int Personne::getID_adresse() { return 0; }