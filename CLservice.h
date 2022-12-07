#pragma once
#include "CLmapTB.h"
#include "CAD.h"

	ref class CLservices
	{
	private:
		CLcad^ oCad;
		CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void ajouterUnePersonne(System::String^, System::String^);
		void supprimerUnePersonne(int);
		void miseajourUnePersonneNom(System::String^, int);
		void miseajourUnePersonnePrenom(System::String^, int);

		void ajouterPersonne(System::String^, System::String^, System::String^, System::String^);
		void ajouterClient(int, System::String^, System::String^, System::String^, System::String^, System::String^);
	};

