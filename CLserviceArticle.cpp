#include "CLserviceArticle.h"

CLserviceArticle::CLserviceArticle(void)
{
	this->oCad = gcnew CLcad();
	this->oMappTB = gcnew CLmapARTICLE();
}
System::Data::DataSet^ CLserviceArticle::selectionnerTousLesArticles(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectAllArticle();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ CLserviceArticle::selectionnerUnArticle(System::String^ dataTableName, System::String^ ref) {
	System::String^ sql;

	this->oMappTB->setRefArticle(ref);
	sql = this->oMappTB->SelectRefArticle();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ CLserviceArticle::selectionneTousLesTypes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectType();
	return this->oCad->getRows(sql, dataTableName);
}
void CLserviceArticle::creerArticle(System::String^ ref, System::String^ nom, double prixachat, double prixht, double prixttc, System::String^ couleur, int idtype) {
	System::String^ sql;

	this->oMappTB->setRefArticle(ref);
	this->oMappTB->setNomArticle(nom);
	this->oMappTB->setPrixAchat(prixachat);
	this->oMappTB->setPrixHT(prixht);
	this->oMappTB->setPrixTTC(prixttc);
	this->oMappTB->setCouleur(couleur);
	this->oMappTB->setIdType(idtype);
	sql = this->oMappTB->creerArticle();

	this->oCad->actionRows(sql);

	sql = this->oMappTB->creerHistoriqueArticle();

	this->oCad->actionRows(sql);
}
void CLserviceArticle::supprimerArticle(System::String^ ref) {
	System::String^ sql;

	this->oMappTB->setRefArticle(ref);
	sql = this->oMappTB->supprimerArticle();

	this->oCad->actionRows(sql);
}
void CLserviceArticle::modifierNomArticle(System::String^ ref, System::String^ nom) {
	System::String^ sql;

	this->oMappTB->setRefArticle(ref);
	this->oMappTB->setNomArticle(nom);
	sql = this->oMappTB->modifierNomArticle();

	this->oCad->actionRows(sql);
}
void CLserviceArticle::modifierPrixAchat(System::String^ ref, double prixachat) {
	System::String^ sql;

	this->oMappTB->setRefArticle(ref);
	this->oMappTB->setPrixAchat(prixachat);
	sql = this->oMappTB->modifierPrixAchat();

	this->oCad->actionRows(sql);
}
void CLserviceArticle::modifierPrixHT(System::String^ ref, double prixht) {
	System::String^ sql;

	this->oMappTB->setRefArticle(ref);
	this->oMappTB->setPrixHT(prixht);
	sql = this->oMappTB->modifierPrixHT();

	this->oCad->actionRows(sql);
}
void CLserviceArticle::modifierPrixTTC(System::String^ ref, double prixTTC) {
	System::String^ sql;

	this->oMappTB->setRefArticle(ref);
	this->oMappTB->setPrixTTC(prixTTC);
	sql = this->oMappTB->modifierPrixTTC();

	this->oCad->actionRows(sql);

	sql = this->oMappTB->creerHistoriqueArticle();

	this->oCad->actionRows(sql);
}
void CLserviceArticle::modifierCouleur(System::String^ ref, System::String^ couleur) {
	System::String^ sql;

	this->oMappTB->setRefArticle(ref);
	this->oMappTB->setCouleur(couleur);
	sql = this->oMappTB->modifierCouleur();

	this->oCad->actionRows(sql);
}
void CLserviceArticle::modifierIdType(System::String^ ref, int idtype) {
	System::String^ sql;

	this->oMappTB->setRefArticle(ref);
	this->oMappTB->setIdType(idtype);
	sql = this->oMappTB->modifierIdType();

	this->oCad->actionRows(sql);
}