#include "CLmapTB.h"
#include "CAD.h"
#include "CLservice.h"
using namespace System::Data::SqlClient;
CLcad::CLcad(void)
{
	this->sCnx = "Data Source=LAPTOP-SODGV426;Initial Catalog=BDD_POO_v5;Integrated Security=True";

	this->sSql = "Rien";
	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDs = gcnew System::Data::DataSet();
	this->oCmd->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ CLcad::getRows(System::String^ sSql, System::String^ sDataTableName)
{
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDs, sDataTableName);

	return this->oDs;
}
void CLcad::actionRows(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}