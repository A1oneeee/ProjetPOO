#include "CLmapCLIENT.h"

// AFFICHER
System::String^ CLmapCLIENT::SelectAllClient(void){
	return "SELECT * FROM [BDD_POO_v5].[dbo].[client]";
}
System::String^ CLmapCLIENT::SelectClientID(void) {
	return "SELECT * FROM [BDD_POO_v5].[dbo].[client] WHERE ID_prsn = '" + this->Id + "';";
}
// AJOUTER
System::String^ CLmapCLIENT::ajouterUnePersonne(void) {
	return "INSERT INTO Personne (nom_prsn, prenom_prsn, email_prsn, mdp_prsn) VALUES('" + this->nom + "','" + this->prenom + "','" + this->Email + "','" + this->mdp +"');";
}
System::String^ CLmapCLIENT::ajouterUnClient(void) {
	return "INSERT INTO dbo.client(ID_prsn, date_naissance, nom_prsn, prenom_prsn, email_prsn, mdp_prsn) VALUES('"
		+ this->Id + "','" + this->DateNaissance + "','" + this->nom + "','" + this->prenom + "','"
		+ this->Email + "','" + this->mdp + "');";
}
// SUPPRIMER
System::String^ CLmapCLIENT::supprimerPersonne(void) {
	return "UPDATE Personne SET nom_prsn ='', prenom_prsn = '',  mdp_prsn = '' WHERE  ID_prsn = '" + this->Id + "';";
}
System::String^ CLmapCLIENT::supprimerClient(void) {
	return "UPDATE client SET date_naissance = NULL, nom_prsn ='', prenom_prsn = '',  mdp_prsn = '' WHERE  ID_prsn = '" + this->Id + "';";
}
// MODIFIER
System::String^ CLmapCLIENT::UpdateNomPersonne(void) {
	return "UPDATE Personne SET nom_prsn = '" + this->nom + "' WHERE ID_prsn = '" + this->Id + "';";
}
System::String^ CLmapCLIENT::UpdatePrenomPersonne(void) {
	return "UPDATE Personne SET prenom_prsn = '" + this->prenom + "' WHERE ID_prsn = '" + this->Id + "';";
}
System::String^ CLmapCLIENT::UpdateEmailPersonne(void) {
	return "UPDATE Personne SET email_prsn = '" + this->Email + "' WHERE ID_prsn = '" + this->Id + "';";
}
System::String^ CLmapCLIENT::UpdateMdpPersonne(void) {
	return "UPDATE Personne SET mdp_prsn = '" + this->mdp + "' WHERE ID_prsn = '" + this->Id + "';";
}
System::String^ CLmapCLIENT::UpdateNomClient(void) {
	return "UPDATE client SET nom_prsn = '" + this->nom + "' WHERE ID_prsn = '" + this->Id + "';";
}
System::String^ CLmapCLIENT::UpdatePrenomClient(void) {
	return "UPDATE client SET prenom_prsn = '" + this->prenom + "' WHERE ID_prsn = '" + this->Id + "';";
}
System::String^ CLmapCLIENT::UpdateDateClient(void) {
	return "UPDATE client SET date_naissance = '" + this->DateNaissance + "' WHERE ID_prsn = '" + this->Id + "';";
}
System::String^ CLmapCLIENT::UpdateEmailClient(void) {
	return "UPDATE client SET email_prsn = '" + this->Email + "' WHERE ID_prsn = '" + this->Id + "';";
}
System::String^ CLmapCLIENT::UpdateMdpClient(void) {
	return "UPDATE client SET mdp_prsn = '" + this->mdp + "' WHERE ID_prsn = '" + this->Id + "';";
}


void CLmapCLIENT::setId(int tmp) {
	this->Id = tmp;
}
void CLmapCLIENT::setNom(System::String^ tmp) {
	this->nom = tmp;
}
void CLmapCLIENT::setPrenom(System::String^ tmp) {
	this->prenom = tmp;
}
void CLmapCLIENT::setDate(System::String^ tmp) {
	this->DateNaissance = tmp;
}
void CLmapCLIENT::setEmail(System::String^ tmp) {
	this->Email = tmp;
}
void CLmapCLIENT::setMdp(System::String^ tmp) {
	this->mdp = tmp;
}