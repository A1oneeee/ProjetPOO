#pragma once
ref class CLmapCOMMANDE
{
private:
	// TABLE COMMANDE
	System::String^ refCommande;
	System::String^ dateCommande;
	System::String^ dateLivraison;
	System::String^ dateEmission;
	double prixHT;
	double prixTTC;
	double montantTVA;
	double remise;
	int ID_payement;
	int ID_prsn;
	int ID_client;
	int ID_adresseLivr;
	int ID_adresseFact;

	// TABLE PAYEMENT
	System::String^ MoyenPayement;
	System::String^ datePayement;
public:
	void setRefCommande(System::String^);
	void setDateLivraison(System::String^);
	void setDateEmission(System::String^);
	void setPrixHT(double);
	void setPrixTTC(double);
	void setMontantTVA(double);
	void setRemise(double);
	void setIdPayement(int);
	void setIdPrsn(int);
	void setIdClient(int);
	void setIdLivraison(int);
	void setIdFacture(int);
	void setDateCommande(System::String^);

	void setMoyenPayement(System::String^);
	void setDatePayement(System::String^);

	// METHODES REQUETES
	System::String^ creerPayement();
	System::String^ creerCommande();

	System::String^ afficherToutesCommandes();
	System::String^ afficherUneCommande();

	System::String^ supprimerContenir();
	System::String^ supprimerCommande();

	System::String^ modifierDateLivraison();
	System::String^ modifierDateEmission();
	System::String^ modifierDateePayement();
	System::String^ modifierMoyenPayement();

	System::String^ modifierPrixHT();
	System::String^ modifierPrixTTC();
	System::String^ modifierRemise();

	System::String^ modifierIdLiv();
};

