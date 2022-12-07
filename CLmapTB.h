#pragma once

	ref class CLmapTB
	{
	private:
		System::String^ sSql;
		int Id_prsn;
		System::String^ nom;
		System::String^ prenom;
		System::String^ DateNaissance;
		System::String^ Email;
		System::String^ Mdp;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ UpdateNom(void);
		System::String^ UpdatePrenom(void);
		System::String^ InsertPersonne(void);
		System::String^ InsertClient(void);

		// set
		void setId(int);
		void setDate(System::String^);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setEmail(System::String^);
		void setMdp(System::String^);

		// get
		int getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);

	};

