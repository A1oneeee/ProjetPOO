#include "CLserviceStock.h"

CLserviceStock::CLserviceStock(void)
{
	this->oCad = gcnew CLcad();
	this->oMappTB = gcnew CLmapARTICLE();
}
System::Data::DataSet^ CLserviceStock::selectionneToutLeStock(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oMappTB->SelectArticleStock();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ CLserviceStock::selectionneUnArticleStock(System::String^ dataTableName, System::String^ ref) {
	System::String^ sql;

	this->oMappTB->setRefArticle(ref);
	sql = this->oMappTB->SelectUnArticleStock();

	return this->oCad->getRows(sql, dataTableName);
}
void CLserviceStock::modifierStock(System::String^ ref, int stock_actuelle, int add) {
	System::String^ sql;
	int tot;
	if (stock_actuelle == 0) {
		tot = add;
	}
	else{
		tot = stock_actuelle + add;
	}
	
	this->oMappTB->setStock(tot);
	sql = this->oMappTB->modifierStockArticle();

	this->oCad->actionRows(sql);
}
void CLserviceStock::modifierMinReap(System::String^ ref, int mini) {
	System::String^ sql;

	this->oMappTB->setRefArticle(ref);
	this->oMappTB->setMiniStock(mini);
	sql = this->oMappTB->modifierMiniStock();

	this->oCad->actionRows(sql);
}
void CLserviceStock::modifierDateReap(System::String^ ref, System::String^ date) {
	System::String^ sql;

	this->oMappTB->setRefArticle(ref);
	this->oMappTB->setDate(date);
	sql = this->oMappTB->modifierDateReapr();

	this->oCad->actionRows(sql);
}