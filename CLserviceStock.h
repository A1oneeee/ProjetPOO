#pragma once
#include "CAD.h"
#include "CLmapARTICLE.h"

ref class CLserviceStock
{
private:
	CLcad^ oCad;
	CLmapARTICLE^ oMappTB;
public:
	CLserviceStock();
	System::Data::DataSet^ selectionneToutLeStock(System::String^);
	System::Data::DataSet^ selectionneUnArticleStock(System::String^, System::String^);

	void modifierStock(System::String^ ref, int stock_actuelle, int add);
	void modifierMinReap(System::String^ ref, int mini);
	void modifierDateReap(System::String^ ref, System::String^ date);
};

