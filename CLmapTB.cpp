#include "CLmapTB.h"

System::String^ CLmapTB::Select(void)
{
	return "SELECT * FROM [BDD_POO_v5].[dbo].[Personne]";
}
System::String^ CLmapTB::Insert(void)
{
	return "INSERT INTO _client (nom_client, prenom_client) VALUES('" + this->nom + "','" + this->prenom + "');";
}
System::String^ CLmapTB::Delete(void)
{
	return "UPDATE _client SET nom_client = '', prenom_client = '' WHERE ID_client = '" + this->Id_prsn + "';";
}
System::String^ CLmapTB::UpdateNom(void)
{
	return "UPDATE _client SET nom_client = '" + this->nom + "' WHERE ID_client = '" + this->Id_prsn + "';";
}
System::String^ CLmapTB::UpdatePrenom(void) {
	return "UPDATE _client SET prenom_client = '" + this->prenom + "' WHERE ID_client = '" + this->Id_prsn + "';";
}

System::String^ CLmapTB::InsertPersonne(void) {
	return "INSERT INTO dbo.Personne (nom_prsn, prenom_prsn, email_prsn, mdp_prsn) VALUES ('" + this->nom + 
		"','" + this->prenom + "','" + this->Email + "','" + this->Mdp + "');";
}
System::String^ CLmapTB::InsertClient(void) {
	return "INSERT INTO dbo.client (ID_prsn, date_naissance ,nom_prsn, prenom_prsn, email_prsn, mdp_prsn) VALUES ('"
		+ this->Id_prsn + "','" + this->DateNaissance + "','" + this->nom + "','" + this->prenom + "','" 
		+ this->Email + "','" + this->Mdp + "');";
}

void CLmapTB::setId(int Id) { this->Id_prsn = Id; }
void CLmapTB::setNom(System::String^ nom){ this->nom = nom; }
void CLmapTB::setPrenom(System::String^ prenom){ this->prenom = prenom; }
void CLmapTB::setEmail(System::String^ email) { this->Email = email; }
void CLmapTB::setMdp(System::String^ mdp) { this->Mdp = mdp; }
void CLmapTB::setDate(System::String^ date) { this->DateNaissance = date;  }

int CLmapTB::getId(void) { return this->Id_prsn; }
System::String^ CLmapTB::getNom(void) { return this->nom; }
System::String^ CLmapTB::getPrenom(void) { return this->prenom; }