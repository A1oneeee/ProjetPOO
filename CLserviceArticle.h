#pragma once
#include "CLmapARTICLE.h"
#include "CAD.h"
ref class CLserviceArticle
{
private:
	CLcad^ oCad;
	CLmapARTICLE^ oMappTB;
public:
	CLserviceArticle();
	System::Data::DataSet^ selectionnerTousLesArticles(System::String^);
	System::Data::DataSet^ selectionnerUnArticle(System::String^, System::String^);
	System::Data::DataSet^ selectionneTousLesTypes(System::String^);

	void creerArticle(System::String^ ref, System::String^ nom, double prixachat, double prixht, double prixttc, System::String^ couleur, int idtype);
	void supprimerArticle(System::String^ ref);

	void modifierNomArticle(System::String^ ref, System::String^ nom);
	void modifierPrixAchat(System::String^ ref, double prixachat);
	void modifierPrixHT(System::String^ ref, double prixht);
	void modifierPrixTTC(System::String^ ref, double prixTTC);
	void modifierCouleur(System::String^ ref, System::String^ couleur);
	void modifierIdType(System::String^ ref, int idtype);
};


