#pragma once

#include "PanierForm.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FactureForm
	/// </summary>
	public ref class FactureForm : public System::Windows::Forms::Form
	{
	public:
		FactureForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FactureForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Svc::servicesPanier^ oSvcPanier;
	private: NS_Comp_Svc::servicesArticleFacture^ oSvcArticleFacture;


	private: System::Windows::Forms::Label^ lbNomEntreprise;



	private: System::Windows::Forms::Label^ lbTotalTTC;
	private: System::Windows::Forms::Label^ lbTotalTVA;
	private: System::Windows::Forms::Label^ lbTotalHT;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dgvCommande;

	private: System::Windows::Forms::Label^ lbNumeroCommande;
	private: System::Windows::Forms::DataGridView^ dgvInfoClient;
	private: System::Windows::Forms::Label^ lbRueEntreprise;
	private: System::Windows::Forms::Label^ lbTelephoneEntreprise;
	private: System::Windows::Forms::Label^ lbVilleEntreprise;
	private: System::Windows::Forms::Label^ lbEmailEntreprise;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lbRef;
	private: System::Windows::Forms::Label^ lbMontantTotalTVA;
	private: System::Windows::Forms::Label^ lbMontantTotal;
	private: System::Windows::Forms::Label^ lbMontantSousTotal;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lbArticle;
	private: System::Windows::Forms::Label^ lbQtn;
	private: System::Windows::Forms::Label^ lbPrixHT;
	private: System::Windows::Forms::Label^ lbPrixTTC;
	private: System::Windows::Forms::Label^ lbNC;
	private: System::Windows::Forms::Label^ lbRue;
	private: System::Windows::Forms::Label^ lbVille;


	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbNomEntreprise = (gcnew System::Windows::Forms::Label());
			this->lbTotalTTC = (gcnew System::Windows::Forms::Label());
			this->lbTotalTVA = (gcnew System::Windows::Forms::Label());
			this->lbTotalHT = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbMontantTotalTVA = (gcnew System::Windows::Forms::Label());
			this->lbMontantTotal = (gcnew System::Windows::Forms::Label());
			this->lbMontantSousTotal = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dgvCommande = (gcnew System::Windows::Forms::DataGridView());
			this->lbNumeroCommande = (gcnew System::Windows::Forms::Label());
			this->dgvInfoClient = (gcnew System::Windows::Forms::DataGridView());
			this->lbRueEntreprise = (gcnew System::Windows::Forms::Label());
			this->lbTelephoneEntreprise = (gcnew System::Windows::Forms::Label());
			this->lbVilleEntreprise = (gcnew System::Windows::Forms::Label());
			this->lbEmailEntreprise = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lbQtn = (gcnew System::Windows::Forms::Label());
			this->lbPrixHT = (gcnew System::Windows::Forms::Label());
			this->lbPrixTTC = (gcnew System::Windows::Forms::Label());
			this->lbArticle = (gcnew System::Windows::Forms::Label());
			this->lbRef = (gcnew System::Windows::Forms::Label());
			this->lbNC = (gcnew System::Windows::Forms::Label());
			this->lbRue = (gcnew System::Windows::Forms::Label());
			this->lbVille = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCommande))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInfoClient))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbNomEntreprise
			// 
			this->lbNomEntreprise->AutoSize = true;
			this->lbNomEntreprise->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNomEntreprise->Location = System::Drawing::Point(3, 9);
			this->lbNomEntreprise->Name = L"lbNomEntreprise";
			this->lbNomEntreprise->Size = System::Drawing::Size(71, 50);
			this->lbNomEntreprise->TabIndex = 1;
			this->lbNomEntreprise->Text = L"RSE";
			// 
			// lbTotalTTC
			// 
			this->lbTotalTTC->AutoSize = true;
			this->lbTotalTTC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTotalTTC->Location = System::Drawing::Point(9, 109);
			this->lbTotalTTC->Name = L"lbTotalTTC";
			this->lbTotalTTC->Size = System::Drawing::Size(102, 25);
			this->lbTotalTTC->TabIndex = 6;
			this->lbTotalTTC->Text = L"Total TTC";
			// 
			// lbTotalTVA
			// 
			this->lbTotalTVA->AutoSize = true;
			this->lbTotalTVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTotalTVA->Location = System::Drawing::Point(9, 65);
			this->lbTotalTVA->Name = L"lbTotalTVA";
			this->lbTotalTVA->Size = System::Drawing::Size(102, 25);
			this->lbTotalTVA->TabIndex = 7;
			this->lbTotalTVA->Text = L"Total TVA";
			// 
			// lbTotalHT
			// 
			this->lbTotalHT->AutoSize = true;
			this->lbTotalHT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbTotalHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTotalHT->Location = System::Drawing::Point(23, 21);
			this->lbTotalHT->Name = L"lbTotalHT";
			this->lbTotalHT->Size = System::Drawing::Size(88, 25);
			this->lbTotalHT->TabIndex = 8;
			this->lbTotalHT->Text = L"Total HT";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(269, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 25);
			this->label2->TabIndex = 11;
			this->label2->Text = L"€";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gold;
			this->panel1->Controls->Add(this->lbMontantTotalTVA);
			this->panel1->Controls->Add(this->lbMontantTotal);
			this->panel1->Controls->Add(this->lbMontantSousTotal);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->lbTotalTTC);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->lbTotalHT);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->lbTotalTVA);
			this->panel1->Location = System::Drawing::Point(446, 776);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(301, 164);
			this->panel1->TabIndex = 14;
			// 
			// lbMontantTotalTVA
			// 
			this->lbMontantTotalTVA->AutoSize = true;
			this->lbMontantTotalTVA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbMontantTotalTVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMontantTotalTVA->Location = System::Drawing::Point(175, 65);
			this->lbMontantTotalTVA->Name = L"lbMontantTotalTVA";
			this->lbMontantTotalTVA->Size = System::Drawing::Size(178, 25);
			this->lbMontantTotalTVA->TabIndex = 16;
			this->lbMontantTotalTVA->Text = L"Montant Total TVA";
			// 
			// lbMontantTotal
			// 
			this->lbMontantTotal->AutoSize = true;
			this->lbMontantTotal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbMontantTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMontantTotal->Location = System::Drawing::Point(175, 109);
			this->lbMontantTotal->Name = L"lbMontantTotal";
			this->lbMontantTotal->Size = System::Drawing::Size(178, 25);
			this->lbMontantTotal->TabIndex = 15;
			this->lbMontantTotal->Text = L"Montant Total TTC";
			// 
			// lbMontantSousTotal
			// 
			this->lbMontantSousTotal->AutoSize = true;
			this->lbMontantSousTotal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbMontantSousTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMontantSousTotal->Location = System::Drawing::Point(175, 21);
			this->lbMontantSousTotal->Name = L"lbMontantSousTotal";
			this->lbMontantSousTotal->Size = System::Drawing::Size(164, 25);
			this->lbMontantSousTotal->TabIndex = 14;
			this->lbMontantSousTotal->Text = L"Montant Total HT";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(269, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 25);
			this->label4->TabIndex = 13;
			this->label4->Text = L"€";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(269, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 25);
			this->label3->TabIndex = 12;
			this->label3->Text = L"€";
			// 
			// dgvCommande
			// 
			this->dgvCommande->BackgroundColor = System::Drawing::Color::Gold;
			this->dgvCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCommande->ColumnHeadersVisible = false;
			this->dgvCommande->Location = System::Drawing::Point(12, 361);
			this->dgvCommande->Name = L"dgvCommande";
			this->dgvCommande->RowHeadersVisible = false;
			this->dgvCommande->RowHeadersWidth = 51;
			this->dgvCommande->RowTemplate->Height = 24;
			this->dgvCommande->Size = System::Drawing::Size(735, 409);
			this->dgvCommande->TabIndex = 15;
			// 
			// lbNumeroCommande
			// 
			this->lbNumeroCommande->AutoSize = true;
			this->lbNumeroCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNumeroCommande->Location = System::Drawing::Point(280, 259);
			this->lbNumeroCommande->Name = L"lbNumeroCommande";
			this->lbNumeroCommande->Size = System::Drawing::Size(143, 25);
			this->lbNumeroCommande->TabIndex = 16;
			this->lbNumeroCommande->Text = L"Commande n° ";
			// 
			// dgvInfoClient
			// 
			this->dgvInfoClient->BackgroundColor = System::Drawing::Color::LightGray;
			this->dgvInfoClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvInfoClient->Location = System::Drawing::Point(486, 12);
			this->dgvInfoClient->Name = L"dgvInfoClient";
			this->dgvInfoClient->RowHeadersWidth = 51;
			this->dgvInfoClient->RowTemplate->Height = 24;
			this->dgvInfoClient->Size = System::Drawing::Size(261, 202);
			this->dgvInfoClient->TabIndex = 18;
			// 
			// lbRueEntreprise
			// 
			this->lbRueEntreprise->AutoSize = true;
			this->lbRueEntreprise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbRueEntreprise->Location = System::Drawing::Point(81, 13);
			this->lbRueEntreprise->Name = L"lbRueEntreprise";
			this->lbRueEntreprise->Size = System::Drawing::Size(102, 16);
			this->lbRueEntreprise->TabIndex = 19;
			this->lbRueEntreprise->Text = L"23, Rue Leroy";
			// 
			// lbTelephoneEntreprise
			// 
			this->lbTelephoneEntreprise->AutoSize = true;
			this->lbTelephoneEntreprise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbTelephoneEntreprise->Location = System::Drawing::Point(81, 45);
			this->lbTelephoneEntreprise->Name = L"lbTelephoneEntreprise";
			this->lbTelephoneEntreprise->Size = System::Drawing::Size(138, 16);
			this->lbTelephoneEntreprise->TabIndex = 20;
			this->lbTelephoneEntreprise->Text = L"Tel : 09 62 62 96 38";
			// 
			// lbVilleEntreprise
			// 
			this->lbVilleEntreprise->AutoSize = true;
			this->lbVilleEntreprise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbVilleEntreprise->Location = System::Drawing::Point(81, 29);
			this->lbVilleEntreprise->Name = L"lbVilleEntreprise";
			this->lbVilleEntreprise->Size = System::Drawing::Size(92, 16);
			this->lbVilleEntreprise->TabIndex = 21;
			this->lbVilleEntreprise->Text = L"62000, Arras";
			// 
			// lbEmailEntreprise
			// 
			this->lbEmailEntreprise->AutoSize = true;
			this->lbEmailEntreprise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEmailEntreprise->Location = System::Drawing::Point(81, 61);
			this->lbEmailEntreprise->Name = L"lbEmailEntreprise";
			this->lbEmailEntreprise->Size = System::Drawing::Size(187, 16);
			this->lbEmailEntreprise->TabIndex = 22;
			this->lbEmailEntreprise->Text = L"Email : rse.off@gmail.com";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Gold;
			this->panel2->Controls->Add(this->lbQtn);
			this->panel2->Controls->Add(this->lbPrixHT);
			this->panel2->Controls->Add(this->lbPrixTTC);
			this->panel2->Controls->Add(this->lbArticle);
			this->panel2->Controls->Add(this->lbRef);
			this->panel2->Location = System::Drawing::Point(12, 288);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(735, 67);
			this->panel2->TabIndex = 23;
			// 
			// lbQtn
			// 
			this->lbQtn->AutoSize = true;
			this->lbQtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbQtn->Location = System::Drawing::Point(155, 25);
			this->lbQtn->Name = L"lbQtn";
			this->lbQtn->Size = System::Drawing::Size(64, 16);
			this->lbQtn->TabIndex = 6;
			this->lbQtn->Text = L"Quantité";
			// 
			// lbPrixHT
			// 
			this->lbPrixHT->AutoSize = true;
			this->lbPrixHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPrixHT->Location = System::Drawing::Point(270, 25);
			this->lbPrixHT->Name = L"lbPrixHT";
			this->lbPrixHT->Size = System::Drawing::Size(58, 16);
			this->lbPrixHT->TabIndex = 5;
			this->lbPrixHT->Text = L"Prix HT";
			// 
			// lbPrixTTC
			// 
			this->lbPrixTTC->AutoSize = true;
			this->lbPrixTTC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPrixTTC->Location = System::Drawing::Point(367, 25);
			this->lbPrixTTC->Name = L"lbPrixTTC";
			this->lbPrixTTC->Size = System::Drawing::Size(67, 16);
			this->lbPrixTTC->TabIndex = 4;
			this->lbPrixTTC->Text = L"Prix TTC";
			// 
			// lbArticle
			// 
			this->lbArticle->AutoSize = true;
			this->lbArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbArticle->Location = System::Drawing::Point(17, 35);
			this->lbArticle->Name = L"lbArticle";
			this->lbArticle->Size = System::Drawing::Size(62, 16);
			this->lbArticle->TabIndex = 3;
			this->lbArticle->Text = L" l\'article";
			// 
			// lbRef
			// 
			this->lbRef->AutoSize = true;
			this->lbRef->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbRef->Location = System::Drawing::Point(3, 19);
			this->lbRef->Name = L"lbRef";
			this->lbRef->Size = System::Drawing::Size(101, 16);
			this->lbRef->TabIndex = 0;
			this->lbRef->Text = L"Référence de";
			// 
			// lbNC
			// 
			this->lbNC->AutoSize = true;
			this->lbNC->Location = System::Drawing::Point(430, 268);
			this->lbNC->Name = L"lbNC";
			this->lbNC->Size = System::Drawing::Size(123, 16);
			this->lbNC->TabIndex = 24;
			this->lbNC->Text = L"numero commande";
			// 
			// lbRue
			// 
			this->lbRue->AutoSize = true;
			this->lbRue->Location = System::Drawing::Point(508, 45);
			this->lbRue->Name = L"lbRue";
			this->lbRue->Size = System::Drawing::Size(44, 16);
			this->lbRue->TabIndex = 25;
			this->lbRue->Text = L"label1";
			// 
			// lbVille
			// 
			this->lbVille->AutoSize = true;
			this->lbVille->Location = System::Drawing::Point(511, 74);
			this->lbVille->Name = L"lbVille";
			this->lbVille->Size = System::Drawing::Size(44, 16);
			this->lbVille->TabIndex = 26;
			this->lbVille->Text = L"label5";
			// 
			// FactureForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(759, 952);
			this->Controls->Add(this->lbVille);
			this->Controls->Add(this->lbRue);
			this->Controls->Add(this->lbNC);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->lbEmailEntreprise);
			this->Controls->Add(this->lbVilleEntreprise);
			this->Controls->Add(this->lbTelephoneEntreprise);
			this->Controls->Add(this->lbRueEntreprise);
			this->Controls->Add(this->dgvInfoClient);
			this->Controls->Add(this->lbNumeroCommande);
			this->Controls->Add(this->dgvCommande);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lbNomEntreprise);
			this->Name = L"FactureForm";
			this->Text = L"FactureForm";
			this->Load += gcnew System::EventHandler(this, &FactureForm::FactureForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCommande))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInfoClient))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FactureForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		this->oSvcPanier = gcnew NS_Comp_Svc::servicesPanier();
		this->oSvcArticleFacture = gcnew NS_Comp_Svc::servicesArticleFacture();

		this->dgvCommande->Refresh();
		this->oDs = this->oSvcArticleFacture->SelectArticleFacture("RSL");
		this->dgvCommande->DataSource = this->oDs;
		this->dgvCommande->DataMember = "RSL";

/////////////////////////////////////////////////////////////////////////////////
//////////////////////AFFICHE LES MONTANT DE LA FACTURE//////////////////////////
/////////////////////////////////////////////////////////////////////////////////

		String^ connString = "Data Source=LAPTOP-APUR1J6V\\MSSQLSERVER01;Initial Catalog=ProjetPOO;Integrated Security=True";
		String^ sqlQuery = "SELECT SUM(qtn_article*prixTTC_article) - SUM(qtn_article*prixHT_article) AS Montant_TVA FROM dbo.contenir INNER JOIN dbo.article ON contenir.ref_article = article.ref_article";
		String^ sqlQuery1 = "SELECT SUM(qtn_article * prixHT_article) AS Sous_Total FROM contenir INNER JOIN Article ON Article.ref_article = contenir.ref_article";
		String^ sqlQuery2 = "SELECT SUM(qtn_article * prixTTC_article) AS Total FROM dbo.contenir INNER JOIN dbo.Article ON Article.ref_article = contenir.ref_article";


		////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////
		
		try
		{
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			SqlCommand command(sqlQuery, % sqlConn);
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				this->lbMontantTotalTVA->Text = Convert::ToString(reader->GetSqlDecimal(0));
				sqlConn.Close();
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Problème connection BDD."); MessageBoxButtons::OK;
			return;
		}

		////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////

		try
		{
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			SqlCommand command(sqlQuery1, % sqlConn);
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				this->lbMontantSousTotal->Text = Convert::ToString(reader->GetSqlDecimal(0));
				sqlConn.Close();
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Problème connection BDD."); MessageBoxButtons::OK;
			return;
		}

		////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////

		try
		{
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			SqlCommand command(sqlQuery2, % sqlConn);
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				this->lbMontantTotal->Text = Convert::ToString(reader->GetSqlDecimal(0));
				sqlConn.Close();
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Problème connection BDD."); MessageBoxButtons::OK;
			return;
		}

		////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////
	}
	};
}
