#pragma once

#include "servicesArticles.h"

NS_Comp_Svc::servicesArticle::servicesArticle(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappArticle = gcnew NS_Comp_Mappage::Article();
}

System::Data::DataSet^ NS_Comp_Svc::servicesArticle::selectionnerTousLesArticles(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappArticle->SelectArticle();
	return this->oCad->getRows(sql, dataTableName);
}


System::Data::DataSet^ NS_Comp_Svc::servicesArticle::selectionnerTousLesArticlesPanier(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappArticle->SelectArticlePanier();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::servicesArticle::UpdateStockArticle(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappArticle->UpdateStockArticle();
	return this->oCad->getRows(sql, dataTableName);
}

