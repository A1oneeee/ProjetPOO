#pragma once
#include "Client.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class ServicesClient
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::Client^ oMapppTB;
	public:
		ServicesClient(void);

		System::Data::DataSet^ selectionnerTousLesClients(System::String^);
		void ajouterUnClient(System::String^, System::String^, System::String^, System::String^);
	};
}

