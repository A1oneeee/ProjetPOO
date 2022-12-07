#include "Personnel.h"
#include "Personne.h"

Personnel::Personnel() : Personne() { }

// -> SET / GET ID_personnel
void Personnel::setID_personnel(int tmp) { this->ID_personnel = tmp; }
int Personnel::getID_personnel() { return this->ID_personnel; }

// -> SET / GET code_secu
void Personnel::setCode_secu(System::String^ tmp) { this->code_secu = tmp; }
System::String^ Personnel::getCode_secu() { return this->code_secu; }

// -> SET / GET date_embauche
void Personnel::setDate_embauche(System::DateTime^ tmp) { this->date_embauche = tmp; }
//System::DateTime^ Personnel::getDate_embauche() { return this->date_embauche; };

// -> SET / GET ID_supp
void Personnel::setID_supp(int tmp) { this->ID_supp = tmp; }
int Personnel::getID_supp() { return this->ID_supp; }

// -> SET / GET admin_
void Personnel::setAdmin(bool tmp) { this->admin_ = tmp; }
bool Personnel::getAdmin() { return this->admin_; }

// -> SET / GET ID_adresse
void Personnel::setID_adresse(int tmp) { this->ID_adresse = tmp; }
int Personnel::getID_adresse() { return this->ID_adresse; }