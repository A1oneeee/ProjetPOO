#include "Personne.h"

System::String^ NS_Comp_Mappage::Personne::SelectPersonne(void)
{
	return "SELECT [id_prsn], [nom_prsn], [prenom_prsn], [email_prsn], [mdp_prsn] FROM [ProjetPOO].[dbo].[Personne]";
}
System::String^ NS_Comp_Mappage::Personne::InsertPersonne(void)
{
	return "INSERT INTO [ProjetPOO].[dbo].[Personne] (nom_prsn,prenom_prsn,email_prsn,mdp_prsn) VALUES('" + this->nom_prsn + "','" + this->prenom_prsn + 
		"','" + this->email_prsn + "','" + this->mdp_prsn + "') ;";
}

void NS_Comp_Mappage::Personne::setIdPersonne(int id_prsn) { this->id_prsn = id_prsn; };
void NS_Comp_Mappage::Personne::setNomPersonne(System::String^ nom) { this->nom_prsn = nom; };
void NS_Comp_Mappage::Personne::setPrenomPersonne(System::String^ prenom) { this->prenom_prsn = prenom; };
void NS_Comp_Mappage::Personne::setEmailPersonne(System::String^ email) { this->email_prsn = email; };
void NS_Comp_Mappage::Personne::setMdpPersonne(System::String^ mdp) { this->mdp_prsn = mdp; };

int NS_Comp_Mappage::Personne::getIdPersonne(void) { return this->id_prsn; }
System::String^ NS_Comp_Mappage::Personne::getNomPersonne(void) { return this->nom_prsn; }
System::String^ NS_Comp_Mappage::Personne::getPrenomPersonne(void) { return this->prenom_prsn; }
System::String^ NS_Comp_Mappage::Personne::getEmailPersonne(void) { return this->email_prsn; }
System::String^ NS_Comp_Mappage::Personne::getMdpPersonne(void) { return this->mdp_prsn; }

