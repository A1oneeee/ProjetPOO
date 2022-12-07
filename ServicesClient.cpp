#include "ServicesClient.h"

NS_Comp_Svc::ServicesClient::ServicesClient(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapppTB = gcnew NS_Comp_Mappage::Client();
}

System::Data::DataSet^ NS_Comp_Svc::ServicesClient::selectionnerTousLesClients(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapppTB->SelectPersonne();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::ServicesClient::ajouterUnClient(System::String^ nom, System::String^ prenom, System::String^ email, System::String^ mdp)
{
	System::String^ sql;

	this->oMapppTB->setNomClient(nom);
	this->oMapppTB->setPrenomClient(prenom);
	this->oMapppTB->setEmailClient(email);
	this->oMapppTB->setMdpClient(mdp);
	//this->oMapppTB->setDateNaissanceClient(dateNaissance);

	sql = this->oMapppTB->InsertClient();

	this->oCad->actionRows(sql);
}



