#pragma once

namespace NS_Comp_Mappage
{
	ref class Article
	{
	private:
		System::String^ sSql;
		System::String^ ref_article;
		System::String^ qtn;
	public:
		System::String^ SelectArticle(void);
		System::String^ SelectArticlePanier(void);
		System::String^ UpdateStockArticle(void);

		void setRefArticle(System::String^);
		System::String^ getRefArticle(void);
	};
}


