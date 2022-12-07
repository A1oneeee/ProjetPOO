#pragma once
#include "CAD.h"
#include "CLmapCOMMANDE.h"
using namespace System;

ref class CLserviceCommande
{
private :
	CLcad^ oCad;
	CLmapCOMMANDE^ oMappTB;
public:
	CLserviceCommande();
	void CreerPayement();
	void CreerCommande(String^ refComm, int idpayement, int idprsn, int idclient, int idadrlivr, int idfactu);

	System::Data::DataSet^ afficherLesCommandes(System::String^ dataTableName);
	System::Data::DataSet^ afficherUneCommande(System::String^ dataTableName, System::String^ ref);

	void SupprimerCommande(String^ ref);

	void ModifierDateLiv(String^ ref, String^ date);
	void ModifierDateEmi(String^ ref, String^ date);
	void ModifierDatePayement(String^ date, int idpayement);
	void ModifierMoyenPayement(String^ moyen, int idpayement);
	void ModifierPrixHT(String^ ref, double prixht );
	void ModifierPrixTTC(String^ ref, double prixttc);
	void ModifierRemise(String^ ref, double rem);
	void ModifierIdLiv(String^ ref, int idadr);
};

