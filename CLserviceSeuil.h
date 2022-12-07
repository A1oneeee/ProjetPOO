#pragma once
#include "CAD.h"
ref class CLserviceSeuil
{
private:
	CLcad^ oCad;
public:
	CLserviceSeuil();
	System::Data::DataSet^ selectionnerArticleSeuil(System::String^);
};

