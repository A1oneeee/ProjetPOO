#pragma once
#include "Personne.h"

namespace NS_Comp_Mappage
{
	ref class Client : public Personne
	{
	private:
		int id_client;
		//System::DateTime^ dateNaissance_client;

	public:
		System::String^ SelectClient(void);
		System::String^ InsertClient(void);

		void setIdPersonne(int);
		void setIdClient(int);
		void setNomClient(System::String^);
		void setPrenomClient(System::String^);
		void setEmailClient(System::String^);
		void setMdpClient(System::String^);
		//void setDateNaissanceClient(System::DateTime^);

		int getIdPersonne(void);
		int getIdClient(void);
		System::String^ getNomClient(void);
		System::String^ getPrenomClient(void);
		System::String^ getEmailClient(void);
		System::String^ getMdpClient(void);
		//System::DateTime^ getDateNaissanceClient(void);
	};
}
