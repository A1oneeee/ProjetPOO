#pragma once
#include "Article.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class servicesArticle
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::Article^ oMappArticle;
	public:
		servicesArticle(void);
		System::Data::DataSet^ selectionnerTousLesArticles(System::String^);
		System::Data::DataSet^ selectionnerTousLesArticlesPanier(System::String^);
		System::Data::DataSet^ UpdateStockArticle(System::String^);

	};
}

