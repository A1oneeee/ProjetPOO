#include "CLmapCOMMANDE.h"

void CLmapCOMMANDE::setRefCommande(System::String^ tmp) {
	this->refCommande = tmp;
}
void CLmapCOMMANDE::setDateLivraison(System::String^ tmp) {
	this->dateLivraison = tmp;
}
void CLmapCOMMANDE::setDateEmission(System::String^ tmp) {
	this->dateEmission = tmp;
}
void CLmapCOMMANDE::setPrixHT(double tmp) {
	this->prixHT = tmp;
}
void CLmapCOMMANDE::setPrixTTC(double tmp) {
	this->prixTTC = tmp;
}
void CLmapCOMMANDE::setMontantTVA(double tmp) {
	this->montantTVA = tmp;
}
void CLmapCOMMANDE::setRemise(double tmp) {
	this->remise = tmp;
}
void CLmapCOMMANDE::setIdPayement(int tmp) {
	this->ID_payement = tmp;
}
void CLmapCOMMANDE::setIdPrsn(int tmp) {
	this->ID_prsn = tmp;
}
void CLmapCOMMANDE::setIdClient(int tmp) {
	this->ID_client = tmp;
}
void CLmapCOMMANDE::setIdLivraison(int tmp) {
	this->ID_adresseLivr = tmp;
}
void CLmapCOMMANDE::setIdFacture(int tmp) {
	this->ID_adresseFact = tmp;
}
void CLmapCOMMANDE::setMoyenPayement(System::String^ tmp) {
	this->MoyenPayement = tmp;
}
void CLmapCOMMANDE::setDatePayement(System::String^ tmp) {
	this->datePayement = tmp;
}
void CLmapCOMMANDE::setDateCommande(System::String^ tmp) {
	this->dateCommande = tmp;
}


///////////////////////////// METHODES ////////////////////////
System::String^ CLmapCOMMANDE::creerPayement() {
	return "INSERT INTO Payement ( moyen_payement,date_payement ) VALUES ( NULL,  NULL);";
}
System::String^ CLmapCOMMANDE::creerCommande() {
	return "INSERT INTO commande (ref_commande, date_commande, prixHT_commande, prixTTC_commande, monant_TVA, remise, ID_payement, ID_prsn, ID_client, ID_adresse, ID_adresse_est_facture) VALUES( '" + this->refCommande +  "', GETDATE() , 0, 0, 0, 0, '" + this->ID_payement + "', '" + this->ID_prsn + "', '" + this->ID_client + "', '" + this->ID_adresseLivr + "', '" + this->ID_adresseFact + "'); ";
}
System::String^ CLmapCOMMANDE::afficherToutesCommandes() {
	return "SELECT * FROM commande;";
}
System::String^ CLmapCOMMANDE::afficherUneCommande() {
	return "SELECT * FROM commande WHERE ref_commande = '" + this->refCommande + "';";
}
System::String^ CLmapCOMMANDE::supprimerContenir() {
	return "DELETE FROM contenir WHERE ref_commande = '" + this->refCommande + "';";
}
System::String^ CLmapCOMMANDE::supprimerCommande() {
	return "UPDATE commande SET date_commande = NULL, date_livraison = NULL, date_emission = NULL, prixHT_commande = 0, prixTTC_commande = 0, monant_TVA = 0, remise = 0 WHERE ref_commande = '" + this->refCommande + "';";
}
System::String^ CLmapCOMMANDE:: modifierDateLivraison() {
	return "UPDATE commande SET date_commande = '" + this->dateLivraison + "' WHERE ref_commande = '" + this->refCommande + "';";
}
System::String^ CLmapCOMMANDE::modifierDateEmission() {
	return "UPDATE commande SET date_emission = '" + this->dateEmission  + "' WHERE ref_commande = '" + this->refCommande + "';";
}
System::String^ CLmapCOMMANDE::modifierDateePayement() {
	return "UPDATE Payement SET date_payement = '" + this->datePayement + "' WHERE ID_payement = '" + this->ID_payement + "';";
}
System::String^ CLmapCOMMANDE::modifierMoyenPayement() {
	return "UPDATE Payement SET moyen_payement = '" + this->MoyenPayement + "' WHERE ID_payement = '" + this->ID_payement + "'; ";
}
System::String^ CLmapCOMMANDE::modifierPrixHT() {
	return "UPDATE commande SET prixHT_commande = '" + this->prixHT + "' WHERE ref_commande = '" + this->refCommande + "'; ";
}
System::String^ CLmapCOMMANDE::modifierPrixTTC() {
	return "UPDATE commande SET prixTTC_commande = '" + this->prixTTC + "' WHERE ref_commande = '" + this->refCommande + "'; ";
}
System::String^ CLmapCOMMANDE::modifierRemise() {
	return "UPDATE commande SET remise = '" + this->remise + "' WHERE ref_commande = '" + this->refCommande + "'; ";
}
System::String^ CLmapCOMMANDE::modifierIdLiv() {
	return "UPDATE commande SET ID_adresse = '" + this->ID_adresseLivr + "' WHERE ref_commande = '" + this->refCommande + "'; ";
}