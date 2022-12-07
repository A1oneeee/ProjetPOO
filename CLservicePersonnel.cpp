#include "CLservicePersonnel.h"

CLservicePersonnel::CLservicePersonnel(void)
{
	this->oCad = gcnew CLcad();
	this->oMappTB = gcnew CLmapPERSONNEL();
}

System::Data::DataSet^ CLservicePersonnel::selectionnerTousLePersonnel(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectAllPersonnel();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ CLservicePersonnel::selectionnerPersonnelID(System::String^ dataTableName, int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	sql = this->oMappTB->SelectPersonnelID();
	return this->oCad->getRows(sql, dataTableName);
}
void CLservicePersonnel::ajouterUnePersonne(System::String^ nom, System::String^ prenom, System::String^ email, System::String^ mdp) {
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setEmail(email);
	this->oMappTB->setMdp(mdp);
	sql = this->oMappTB->ajouterPersonne();

	this->oCad->actionRows(sql);
}

void CLservicePersonnel::ajouterAdresse(int numrue, System::String^ nomrue, int villeid, System::String^ adresscompl) {
	System::String^ sql;

	this->oMappTB->setNumRue(numrue);
	this->oMappTB->setNomRue(nomrue);
	this->oMappTB->setIdVille(villeid);
	this->oMappTB->setAdresseCompl(adresscompl);
	sql = this->oMappTB->ajouterAdresse();

	this->oCad->actionRows(sql);
}

void CLservicePersonnel::ajouterUnPersonnel(int idprsn, System::String^ codesecu, System::String^ date, int idsupp, bool admin, System::String^ nom, System::String^ prenom, System::String^ email, System::String^ mdp, int idadsresse){
	System::String^ sql;
	admin = false;
	this->oMappTB->setId(idprsn);
	this->oMappTB->setSecu(codesecu);
	this->oMappTB->setDate(date);
	this->oMappTB->setIdSupp(idsupp);
	this->oMappTB->setAdmin(admin);
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setEmail(email);
	this->oMappTB->setMdp(mdp);
	this->oMappTB->setIdAdresse(idadsresse);

	sql = this->oMappTB->ajouterPersonnel();
	this->oCad->actionRows(sql);
}

void CLservicePersonnel::supprimerPersonne(int id) {
	System::String^ sql;

	this->oMappTB->setId(id);
	sql = this->oMappTB->supprimerPersonne();
	this->oCad->actionRows(sql);

	sql = this->oMappTB->supprimerPersonnel();
	this->oCad->actionRows(sql);
}
