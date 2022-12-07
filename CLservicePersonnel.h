#pragma once
#include "CAD.h"
#include "CLmapPERSONNEL.h"

ref class CLservicePersonnel
{
private:
	CLcad^ oCad;
	CLmapPERSONNEL^ oMappTB;
public:
	CLservicePersonnel();
	System::Data::DataSet^ selectionnerTousLePersonnel(System::String^);
	System::Data::DataSet^ selectionnerPersonnelID(System::String^, int);
	// AJOUTER PERSONNEL
	void ajouterUnePersonne(System::String^, System::String^, System::String^, System::String^);
	void ajouterUnPersonnel(int idpprs, System::String^ codesecu, System::String^ date, int idsupp, bool admin, System::String^ nom, System::String^ prenom, System::String^ email, System::String^ mdp, int idadsresse);



	void ajouterAdresse(int, System::String^, int, System::String^);

	void supprimerPersonne(int);
};

