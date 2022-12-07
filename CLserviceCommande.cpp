#include "CLserviceCommande.h"

CLserviceCommande::CLserviceCommande() {
	this->oCad = gcnew CLcad();
	this->oMappTB = gcnew CLmapCOMMANDE();
}
void CLserviceCommande::CreerPayement() {
	System::String^ sql;

	sql = this->oMappTB->creerPayement();

	this->oCad->actionRows(sql);
}

void CLserviceCommande::CreerCommande(String^ refComm, int idpayement, int idprsn, int idclient, int idadrlivr, int idfactu) {
	System::String^ sql;

	this->oMappTB->setRefCommande(refComm);
	this->oMappTB->setIdPayement(idpayement);
	this->oMappTB->setIdPrsn(idprsn);
	this->oMappTB->setIdClient(idclient);
	this->oMappTB->setIdLivraison(idadrlivr);
	this->oMappTB->setIdFacture(idfactu);

	sql = this->oMappTB->creerCommande();

	this->oCad->actionRows(sql);
}
System::Data::DataSet^ CLserviceCommande::afficherLesCommandes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->afficherToutesCommandes();
	
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ CLserviceCommande::afficherUneCommande(System::String^ dataTableName, System::String^ ref) {
	System::String^ sql;

	this->oMappTB->setRefCommande(ref);
	sql = this->oMappTB->afficherUneCommande();

	return this->oCad->getRows(sql, dataTableName);
}
void CLserviceCommande::SupprimerCommande(String^ ref) {
	System::String^ sql;

	this->oMappTB->setRefCommande(ref);
	sql = this->oMappTB->supprimerContenir();
	this->oCad->actionRows(sql);

	sql = this->oMappTB->supprimerCommande();
	this->oCad->actionRows(sql);
}
void CLserviceCommande::ModifierDateLiv(String^ ref, String^ date) {
	System::String^ sql;

	this->oMappTB->setRefCommande(ref);
	this->oMappTB->setDateLivraison(date);
	sql = this->oMappTB->modifierDateLivraison();

	this->oCad->actionRows(sql);
}
void CLserviceCommande::ModifierDateEmi(String^ ref, String^ date) {
	System::String^ sql;

	this->oMappTB->setRefCommande(ref);
	this->oMappTB->setDateEmission(date);
	sql = this->oMappTB->modifierDateEmission();

	this->oCad->actionRows(sql);
}
void CLserviceCommande::ModifierDatePayement(String^ date, int idpayement) {
	System::String^ sql;

	this->oMappTB->setDatePayement(date);
	this->oMappTB->setIdPayement(idpayement);
	sql = this->oMappTB->modifierDateePayement();

	this->oCad->actionRows(sql);
}
void CLserviceCommande::ModifierMoyenPayement(String^ moyen, int idpayement) {
	System::String^ sql;

	this->oMappTB->setMoyenPayement(moyen);
	this->oMappTB->setIdPayement(idpayement);
	sql = this->oMappTB->modifierMoyenPayement();

	this->oCad->actionRows(sql);
}
void CLserviceCommande::ModifierPrixHT(String^ ref, double prixht) {
	System::String^ sql;

	this->oMappTB->setRefCommande(ref);
	this->oMappTB->setPrixHT(prixht);
	sql = this->oMappTB->modifierPrixHT();

	this->oCad->actionRows(sql);
}
void CLserviceCommande::ModifierPrixTTC(String^ ref, double prixttc) {
	System::String^ sql;

	this->oMappTB->setRefCommande(ref);
	this->oMappTB->setPrixTTC(prixttc);
	sql = this->oMappTB->modifierPrixTTC();

	this->oCad->actionRows(sql);
}
void CLserviceCommande::ModifierRemise(String^ ref, double rem) {
	System::String^ sql;

	this->oMappTB->setRefCommande(ref);
	this->oMappTB->setRemise(rem);
	sql = this->oMappTB->modifierRemise();;

	this->oCad->actionRows(sql);
}
void CLserviceCommande::ModifierIdLiv(String^ ref, int idadr) {
	System::String^ sql;

	this->oMappTB->setRefCommande(ref);
	this->oMappTB->setIdLivraison(idadr);
	sql = this->oMappTB->modifierIdLiv();;

	this->oCad->actionRows(sql);
}