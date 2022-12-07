#pragma once
#include "CAD.h"
#include "CLmapCLIENT.h"

ref class CLservicesClient
{
private:
	CLcad^ oCad;
	CLmapCLIENT^ oMappTB;
public:
	CLservicesClient(void);
	System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
	System::Data::DataSet^ selectionnerClientID(System::String^, int);
	// AJOUTER
	void ajouterUnePersonne(System::String^, System::String^, System::String^, System::String^);
	void ajouterUnClient(int, System::String^, System::String^, System::String^, System::String^, System::String^);
	// SUPPRIMER
	void supprimerUnePersonne(int);
	void supprimerUnClient(int);
	// MODIFIER
	void UpdateUnePersonneNom(System::String^, int);
	void UpdateUnClientNom(System::String^, int);
	void UpdateUnePersonnePrenom(System::String^, int);
	void UpdateUnClientPrenom(System::String^, int);
	void UpdateUnClientDate(System::String^, int);
	void UpdateUnePersonneMdp(System::String^, int);
	void UpdateUnClientMdp(System::String^, int);
	void UpdateUnePersonneEmail(System::String^, int);
	void UpdateUnClientEmail(System::String^, int);
};
