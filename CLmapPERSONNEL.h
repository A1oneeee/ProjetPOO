#pragma once
ref class CLmapPERSONNEL
{
private :
	System::String^ sSql;
	int Id;
	System::String^ nom;
	System::String^ prenom;
	System::String^ DateEmbauche;
	System::String^ Email;
	System::String^ mdp;
	System::String^ Secu;
	int id_supp;
	int num_rue;
	System::String^ nom_rue;
	System::String^ adresse_compl;
	System::String^ nom_ville;
	System::String^ codepostal;
	bool admin_;
	int id_ville;
	int id_adresse;

public:
	// AJOUTER ADRESSE
	System::String^ ajouterAdresse(void);
	// AFFICHER
	System::String^ SelectAllPersonnel(void);
	System::String^ SelectPersonnelID(void);
	// AJOUTER PERSONNE
	System::String^ ajouterPersonne(void);
	System::String^ ajouterPersonnel(void);
	// MODIFIER
	//System::String^ updateNomPersonne(void);
	//System::String^ updateNomPersonnel(void);
	// SUPPRIMER
	System::String^ supprimerPersonne(void);
	System::String^ supprimerPersonnel(void);
	


	// SETER(S)
	void setId(int);
	void setNom(System::String^);
	void setPrenom(System::String^);
	void setDate(System::String^);
	void setEmail(System::String^);
	void setMdp(System::String^);
	void setSecu(System::String^);
	void setIdSupp(int);
	void setNumRue(int);
	void setNomRue(System::String^);
	void setAdresseCompl(System::String^);
	void setNomVille(System::String^);
	void setCodePostal(System::String^);

	void setIdVille(int);
	void setAdmin(bool);
	void setIdAdresse(int);
};

