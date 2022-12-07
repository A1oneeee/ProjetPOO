#pragma once
#include "CAD.h"
ref class CLservicePlus
{
private :
	CLcad^ oCad;
public:
	CLservicePlus();
	System::Data::DataSet^ selectionnerPlusVendu(System::String^);
};

