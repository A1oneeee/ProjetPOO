#include "CLservice.h"

CLservices::CLservices(void)
{
	this->oCad = gcnew CLcad();
	this->oMappTB = gcnew CLmapTB();
}
System::Data::DataSet^ CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void CLservices::ajouterPersonne(System::String^ nom, System::String^ prenom, System::String^ email, System::String^ mdp) {
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setEmail(email);
	this->oMappTB->setMdp(mdp);
	sql = this->oMappTB->InsertPersonne();

	this->oCad->actionRows(sql);
}

void CLservices::ajouterClient(int id_prsn, System::String^ date, System::String^ nom, System::String^ prenom, System::String^ email, System::String^ mdp) {
	System::String^ sql;

	this->oMappTB->setId(id_prsn);
	this->oMappTB->setDate(date);
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setEmail(email);
	this->oMappTB->setMdp(mdp);
	sql = this->oMappTB->InsertClient();

	this->oCad->actionRows(sql);
}







void CLservices::supprimerUnePersonne(int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}

void CLservices::miseajourUnePersonneNom(System::String^ nom, int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	this->oMappTB->setNom(nom);
	sql = this->oMappTB->UpdateNom();
	this->oCad->actionRows(sql);
}
void  CLservices::miseajourUnePersonnePrenom(System::String^ prenom, int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	this->oMappTB->setPrenom(prenom);
	sql = this->oMappTB->UpdatePrenom();
	this->oCad->actionRows(sql);
}
