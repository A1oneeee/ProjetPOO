#pragma once

namespace NS_Comp_Mappage
{
	ref class Panier
	{
	private:
		System::String^ sSql;

		System::String^ ref_article;
		System::String^ qtn_article;
		System::String^ ref_commande;

	public:
		System::String^ SelectArticlePanier(void);
		System::String^ InsertArticlePanier(void);
		System::String^ DeletetArticlePanier(void);
		System::String^ UpdateArticlePanier(void);

		System::String^ SelectArticleFacture(void);

		void setRefArticle(System::String^);
		void setQtnArticle(System::String^);
		void setRefCommande(System::String^);

		System::String^ getRefArticle(void);
		System::String^ getQtnArticle(void);
		System::String^ getRefCommande(void);
	};
}

