#pragma once
ref class CLmapCLIENT
{
private:
	System::String^ sSql;
	int Id;
	System::String^ nom;
	System::String^ prenom;
	System::String^ DateNaissance;
	System::String^ Email;
	System::String^ mdp;

public:
	// AFFICHER
	System::String^ SelectAllClient(void);
	System::String^ SelectClientID(void);
	// CREER CLIENT
	System::String^ ajouterUnePersonne(void);
	System::String^ ajouterUnClient(void);
	// SUPPRIMER CLIENT
	System::String^ supprimerClient(void);
	System::String^ supprimerPersonne(void);
	// MODIFIER CLIENT
	System::String^ UpdateNomPersonne(void);
	System::String^ UpdatePrenomPersonne(void);
	System::String^ UpdateEmailPersonne(void);
	System::String^ UpdateMdpPersonne(void);

	System::String^ UpdateNomClient(void);
	System::String^ UpdatePrenomClient(void);
	System::String^ UpdateEmailClient(void);
	System::String^ UpdateMdpClient(void);
	System::String^ UpdateDateClient(void);
	

	// SETER(S)
	void setId(int);
	void setNom(System::String^);
	void setPrenom(System::String^);
	void setDate(System::String^);
	void setEmail(System::String^);
	void setMdp(System::String^); 
	


};

