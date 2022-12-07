#pragma once

namespace NS_Comp_Mappage
{
	ref class Personne
	{
	protected:
		System::String^ sSql;

		int id_prsn;
		System::String^ nom_prsn;
		System::String^ prenom_prsn;
		System::String^ email_prsn;
		System::String^ mdp_prsn;

	public:
		System::String^ SelectPersonne(void);
		System::String^ InsertPersonne(void);
		void setIdPersonne(int);
		void setNomPersonne(System::String^);
		void setPrenomPersonne(System::String^);
		void setEmailPersonne(System::String^);
		void setMdpPersonne(System::String^);

		int getIdPersonne(void);
		System::String^ getNomPersonne(void);
		System::String^ getPrenomPersonne(void);
		System::String^ getEmailPersonne(void);
		System::String^ getMdpPersonne(void);
	};
}

