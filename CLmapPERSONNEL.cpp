#include "CLmapPERSONNEL.h"

// AFFICHER
System::String^ CLmapPERSONNEL::SelectAllPersonnel(void) {
	return "SELECT ID_prsn, ID_personnel, code_secu, date_embauche, ID_supp, admin_, nom_prsn, prenom_prsn, email_prsn, mdp_prsn, num_rue, nom_rue, adress_compl, ville_nom_reel, ville_code_postal, p.ID_adresse FROM dbo.personnel INNER JOIN(SELECT ID_adresse, num_rue, nom_rue, adress_compl, adresse.ville_id, ville_nom_reel, ville_code_postal FROM adresse INNER JOIN VilleCodePFrance ON adresse.ville_id = VilleCodePFrance.ville_id) as p ON personnel.ID_adresse = p.ID_adresse; ";
}
System::String^ CLmapPERSONNEL::SelectPersonnelID(void) {
	return "SELECT ID_prsn, ID_personnel, code_secu, date_embauche, ID_supp, admin_, nom_prsn, prenom_prsn, email_prsn, mdp_prsn, num_rue, nom_rue, adress_compl, ville_nom_reel, ville_code_postal, p.ID_adresse FROM dbo.personnel INNER JOIN(SELECT ID_adresse, num_rue, nom_rue, adress_compl, adresse.ville_id, ville_nom_reel, ville_code_postal FROM adresse INNER JOIN VilleCodePFrance ON adresse.ville_id = VilleCodePFrance.ville_id) as p ON personnel.ID_adresse = p.ID_adresse WHERE ID_prsn = '" + this->Id + "'; ";
}
// AJOUETR
System::String^ CLmapPERSONNEL::ajouterPersonne(void) {
	return "INSERT INTO Personne (nom_prsn, prenom_prsn, email_prsn, mdp_prsn) VALUES('" + this->nom + "', '" + this->prenom + "', '" + this->Email + "', '" + this->mdp +"'); ";
}
System::String^ CLmapPERSONNEL::ajouterAdresse(void) {
	return "INSERT INTO dbo.adresse (num_rue, nom_rue, ville_id, adress_compl) VALUES ( '" + this->num_rue + "', '" + this->nom_rue + "','" + this->id_ville + "','" + this->adresse_compl + "');";
}
System::String^ CLmapPERSONNEL::ajouterPersonnel(void) {
	return "INSERT INTO dbo.personnel (ID_prsn, code_secu, date_embauche, ID_supp, admin_, nom_prsn, prenom_prsn, email_prsn, mdp_prsn, ID_adresse) VALUES ('" + this->Id + "','" + this->Secu + "','" + this->DateEmbauche + "','" + this->id_supp + "','" + 0 + "','" + this->nom + "','" + this->prenom + "','" + this->Email + "','" + this->mdp + "','" + this->id_adresse + "');";
}
// MODIFIER
System::String^ CLmapPERSONNEL::supprimerPersonne(void) {
	return "UPDATE Personne SET nom_prsn = NULL, prenom_prsn = NULL, mdp_prsn = NULL WHERE ID_prsn = '" + this->Id + "'; ";
}
System::String^ CLmapPERSONNEL::supprimerPersonnel(void) {
	return "UPDATE personnel SET ID_supp = 0, admin_ = NULL, nom_prsn = NULL, prenom_prsn = NULL, mdp_prsn = NULL, ID_adresse = NULL WHERE ID_prsn = '" + this->Id + "'; ";
}


//SETER(S)
void CLmapPERSONNEL::setId(int tmp) {
	this->Id = tmp;
}
void  CLmapPERSONNEL::setNom(System::String^ tmp) {
	this->nom = tmp;
}
void CLmapPERSONNEL::setPrenom(System::String^ tmp) {
	this->prenom = tmp;
}
void  CLmapPERSONNEL::setDate(System::String^ tmp) {
	this->DateEmbauche = tmp;
}
void  CLmapPERSONNEL::setEmail(System::String^ tmp) {
	this->Email = tmp;
}
void CLmapPERSONNEL::setMdp(System::String^ tmp) {
	this->mdp = tmp;
}
void  CLmapPERSONNEL::setSecu(System::String^ tmp) {
	this->Secu = tmp;
}
void  CLmapPERSONNEL::setIdSupp(int tmp) {
	this->id_supp = tmp;
}
void  CLmapPERSONNEL::setNumRue(int tmp) {
	this->num_rue = tmp;
}
void  CLmapPERSONNEL::setNomRue(System::String^ tmp) {
	this->nom_rue = tmp;
}
void  CLmapPERSONNEL::setAdresseCompl(System::String^ tmp) {
	this->adresse_compl = tmp;
}
void  CLmapPERSONNEL::setNomVille(System::String^ tmp) {
	this->nom_ville = tmp;
}
void  CLmapPERSONNEL::setCodePostal(System::String^ tmp) {
	this->codepostal = tmp;
}
void CLmapPERSONNEL::setIdVille(int tmp) {
	this->id_ville = tmp;
}
void CLmapPERSONNEL::setAdmin(bool tmp) {
	this->admin_ = tmp;
}
void CLmapPERSONNEL::setIdAdresse(int tmp) {
	this->id_adresse = tmp;
}