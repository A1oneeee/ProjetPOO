#include "CLserviceClient.h"

CLservicesClient::CLservicesClient(void)
{
	this->oCad = gcnew CLcad();
	this->oMappTB = gcnew CLmapCLIENT();
}
System::Data::DataSet^ CLservicesClient::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectAllClient();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ CLservicesClient::selectionnerClientID(System::String^ dataTableName, int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	sql = this->oMappTB->SelectClientID();
	return this->oCad->getRows(sql, dataTableName);
}

void CLservicesClient::supprimerUnePersonne(int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	sql = this->oMappTB->supprimerPersonne();

	this->oCad->actionRows(sql);
}
void CLservicesClient::supprimerUnClient(int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	sql = this->oMappTB->supprimerClient();

	this->oCad->actionRows(sql);
}

void CLservicesClient::ajouterUnePersonne(System::String^ nom, System::String^ prenom, System::String^ email, System::String^ mdp) {
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setEmail(email);
	this->oMappTB->setMdp(mdp);
	sql = this->oMappTB->ajouterUnePersonne();

	this->oCad->actionRows(sql);
}
void CLservicesClient::ajouterUnClient(int id, System::String^ date, System::String^ nom, System::String^ prenom, System::String^ email, System::String^ mdp) {
	System::String^ sql;

	this->oMappTB->setId(id);
	this->oMappTB->setDate(date);
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setEmail(email);
	this->oMappTB->setMdp(mdp);
	sql = this->oMappTB->ajouterUnClient();

	this->oCad->actionRows(sql);
}

void CLservicesClient::UpdateUnePersonneNom(System::String^ nom, int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	this->oMappTB->setNom(nom);
	sql = this->oMappTB->UpdateNomPersonne();

	this->oCad->actionRows(sql);
}

void CLservicesClient::UpdateUnClientNom(System::String^ nom, int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	this->oMappTB->setNom(nom);
	sql = this->oMappTB->UpdateNomClient();

	this->oCad->actionRows(sql);
}
void CLservicesClient::UpdateUnePersonnePrenom(System::String^ prenom, int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	this->oMappTB->setPrenom(prenom);
	sql = this->oMappTB->UpdatePrenomPersonne();

	this->oCad->actionRows(sql);
}
void CLservicesClient::UpdateUnClientPrenom(System::String^ prenom, int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	this->oMappTB->setPrenom(prenom);
	sql = this->oMappTB->UpdatePrenomClient();

	this->oCad->actionRows(sql);
}
void CLservicesClient::UpdateUnClientDate(System::String^ date, int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	this->oMappTB->setDate(date);
	sql = this->oMappTB->UpdateDateClient();

	this->oCad->actionRows(sql);
}
void CLservicesClient::UpdateUnePersonneMdp(System::String^ mdp, int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	this->oMappTB->setMdp(mdp);
	sql = this->oMappTB->UpdateMdpPersonne();

	this->oCad->actionRows(sql);
}
void CLservicesClient::UpdateUnClientMdp(System::String^ mdp, int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	this->oMappTB->setMdp(mdp);
	sql = this->oMappTB->UpdateMdpClient();

	this->oCad->actionRows(sql);
}
void CLservicesClient::UpdateUnePersonneEmail(System::String^ email, int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	this->oMappTB->setEmail(email);
	sql = this->oMappTB->UpdateEmailPersonne();

	this->oCad->actionRows(sql);
}
void CLservicesClient::UpdateUnClientEmail(System::String^ email, int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	this->oMappTB->setEmail(email);
	sql = this->oMappTB->UpdateEmailClient();

	this->oCad->actionRows(sql);
}