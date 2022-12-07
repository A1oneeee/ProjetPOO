#include "CLservices.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::Personne();
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectPersonne();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom, System::String^ email, System::String^ mdp)
{
	System::String^ sql;

	this->oMappTB->setNomPersonne(nom);
	this->oMappTB->setPrenomPersonne(prenom);
	this->oMappTB->setEmailPersonne(email);
	this->oMappTB->setMdpPersonne(mdp);

	sql = this->oMappTB->InsertPersonne();

	this->oCad->actionRows(sql);
}




