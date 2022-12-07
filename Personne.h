#pragma once
ref class Personne
{
protected:
	int ID_prsn;
	System::String^ nom;
	System::String^ prenom;
	System::String^ email;
public:
	Personne();
	virtual void setId_prsn(int);
	virtual int getID_prsn();
	virtual void setNom(System::String^);
	virtual System::String^ getNom();
	virtual void setPrenom(System::String^);
	virtual System::String^ getPrenom();
	virtual void setEmail(System::String^);
	virtual System::String^ getEmail();

	// Client Méthodes
	virtual int getID_client();
	virtual void setID_client(int);
	//virtual System::DateTime^ getDate_naissance();
	virtual void setDate_naissance(System::DateTime^);

	// Personnel Méthodes
	virtual void setID_personnel(int);
	virtual int getID_personnel();

	virtual void setCode_secu(System::String^);
	virtual System::String^ getCode_secu();

	virtual void setDate_embauche(System::DateTime^);
	//virtual System::DateTime^ getDate_embauche();

	virtual void setID_supp(int);
	virtual int getID_supp();

	virtual void setAdmin(bool);
	virtual bool getAdmin();

	virtual void setID_adresse(int);
	virtual int getID_adresse();
};
