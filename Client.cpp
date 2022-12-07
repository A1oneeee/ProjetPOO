#include "Client.h"

System::String^ NS_Comp_Mappage::Client::SelectClient(void)
{
	return "SELECT [id_prsn], [id_client], [nom_prsn], [prenom_prsn], [email_prsn], [mdp_prsn] FROM [ProjetPOO].[dbo].[Client]";
}

System::String^ NS_Comp_Mappage::Client::InsertClient(void)
{
	return "SELECT * FROM [ProjetPOO].[dbo].[Client] (id_prsn,nom_prsn,prenom_prsn,email_prsn,mdp_prsn) VALUES('"+ this->nom_prsn +"','"+ this->prenom_prsn +"','"+
		this->email_prsn + this->mdp_prsn +"');";
}

void NS_Comp_Mappage::Client::setIdPersonne(int id_prsn) { this->id_prsn; };
void NS_Comp_Mappage::Client::setIdClient(int id_client) { this->id_client = id_client; };
void NS_Comp_Mappage::Client::setNomClient(System::String^ nom) { this->nom_prsn = nom; };
void NS_Comp_Mappage::Client::setPrenomClient(System::String^ prenom) { this->prenom_prsn = prenom; };
void NS_Comp_Mappage::Client::setEmailClient(System::String^ email) { this->email_prsn = email; };
void NS_Comp_Mappage::Client::setMdpClient(System::String^ mdp) { this->mdp_prsn = mdp; };

int NS_Comp_Mappage::Client::getIdPersonne(void) { return this->id_prsn; }
int NS_Comp_Mappage::Client::getIdClient(void) { return this->id_client; }
System::String^ NS_Comp_Mappage::Client::getNomClient(void) { return this->nom_prsn; }
System::String^ NS_Comp_Mappage::Client::getPrenomClient(void) { return this->prenom_prsn; }
System::String^ NS_Comp_Mappage::Client::getEmailClient(void) { return this->email_prsn; }
System::String^ NS_Comp_Mappage::Client::getMdpClient(void) { return this->mdp_prsn; }
