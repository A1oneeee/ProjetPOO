#pragma once

#include "Panier.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class servicesPanier
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::Panier^ oMappPanier;
	public:
		servicesPanier(void);

		System::Data::DataSet^ SelectArticlePanier(System::String^);
		void InsertArticlePanier(System::String^, System::String^, System::String^);
	};
}

namespace NS_Comp_Svc
{
	ref class servicesArticleFacture
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::Panier^ oMappArticleFacture;
	public:
		servicesArticleFacture(void);

		System::Data::DataSet^ SelectArticleFacture(System::String^);
	};
}

namespace NS_Comp_Svc
{
	ref class servicesSupprimerArticlePanier
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::Panier^ oMappSupprimerArticlePanier;
	public:
		servicesSupprimerArticlePanier(void);

		void DeletetArticlePanier(System::String^);
	};
}

namespace NS_Comp_Svc
{
	ref class servicesUpdateArticlePanier
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::Panier^ oMappUpdateArticlePanier;
	public:
		servicesUpdateArticlePanier(void);

		void UpdateArticlePanier(System::String^, System::String^);
	};
}