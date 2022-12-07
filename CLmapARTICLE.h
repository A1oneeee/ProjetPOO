#pragma once
ref class CLmapARTICLE
{
private:
	// article
	System::String^ refArticle;
	System::String^ nomArticle;
	int stock;
	double prixAchat;
	double prixHT;
	double prixTTC;
	System::String^ date;
	int miniStock;
	int id_type;
	// Type 
	System::String^ nomType;
	double tauxTVA;
	System::String^ couleur;

	int Add;

public:
	void setRefArticle(System::String^);
	void setNomArticle(System::String^);
	void setStock(int);
	void setPrixAchat(double);
	void setPrixHT(double);
	void setPrixTTC(double);
	void setDate(System::String^);
	void setMiniStock(int);
	void setIdType(int);
	void setNomType(System::String^);
	void setTauxTVA(double);
	void setCouleur(System::String^);
	void setAdd(int);

	
	// System::String^ ref, System::String^ nom, int prixachat, int prixht, int prixttc, System::String^ couleur, int idtype

	// AFFICHER ARTICLE
	System::String^ SelectAllArticle();
	System::String^ SelectRefArticle();
	System::String^ SelectType();

	System::String^ SelectArticleStock();
	System::String^ SelectUnArticleStock();
	// CREER ARTICLE
	System::String^ creerArticle();
	System::String^ creerHistoriqueArticle();
	// SUPPRIMER ARTICLE
	System::String^ supprimerArticle();
	// MODIFIER ARTICLE
	System::String^ modifierNomArticle();
	System::String^ modifierPrixAchat();
	System::String^ modifierPrixHT();
	System::String^ modifierPrixTTC();
	System::String^ modifierCouleur();
	System::String^ modifierIdType();

	//System::String^ modiferDateReapr();
	System::String^ modifierStockArticle();
	System::String^ modifierMiniStock();
	System::String^ modifierDateReapr();
};