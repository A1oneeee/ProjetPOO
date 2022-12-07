#pragma once

#include "ClientForm.h"
#include "servicesPanier.h"
#include "Panier.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de PanierForm
	/// </summary>
	public ref class PanierForm : public System::Windows::Forms::Form
	{
	public:
		PanierForm(void)
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
		~PanierForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Svc::servicesArticleFacture^ oSvcArticleFacture;
	private: NS_Comp_Svc::servicesUpdateArticlePanier^ oSvcUpdateArticlePanier;
	private: NS_Comp_Svc::servicesArticle^ oSvcUpdateStockArticle;
	private: System::Windows::Forms::DataGridView^ dgvPanier;
	private: System::Windows::Forms::Label^ lbResumeCommande;
	private: System::Windows::Forms::Label^ lbSousTotal;
	private: System::Windows::Forms::Label^ lbTaxe;
	private: System::Windows::Forms::Label^ lbTotal;
	private: System::Windows::Forms::Button^ btnCommande;
	private: System::Windows::Forms::Label^ lbMontantTaxe;
	private: System::Windows::Forms::Label^ lbMontantTotal;
	private: System::Windows::Forms::Label^ lbSTotal;
	private: System::Windows::Forms::Button^ btnRetour;
	private: System::Windows::Forms::Button^ txtValider;
	private: System::Windows::Forms::TextBox^ txtRef;
	private: System::Windows::Forms::NumericUpDown^ nudQtnArticle;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->dgvPanier = (gcnew System::Windows::Forms::DataGridView());
			this->lbResumeCommande = (gcnew System::Windows::Forms::Label());
			this->lbSousTotal = (gcnew System::Windows::Forms::Label());
			this->lbTaxe = (gcnew System::Windows::Forms::Label());
			this->lbTotal = (gcnew System::Windows::Forms::Label());
			this->btnCommande = (gcnew System::Windows::Forms::Button());
			this->lbMontantTaxe = (gcnew System::Windows::Forms::Label());
			this->lbMontantTotal = (gcnew System::Windows::Forms::Label());
			this->lbSTotal = (gcnew System::Windows::Forms::Label());
			this->btnRetour = (gcnew System::Windows::Forms::Button());
			this->txtValider = (gcnew System::Windows::Forms::Button());
			this->txtRef = (gcnew System::Windows::Forms::TextBox());
			this->nudQtnArticle = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPanier))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudQtnArticle))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvPanier
			// 
			this->dgvPanier->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPanier->Location = System::Drawing::Point(12, 12);
			this->dgvPanier->Name = L"dgvPanier";
			this->dgvPanier->RowHeadersVisible = false;
			this->dgvPanier->RowHeadersWidth = 51;
			this->dgvPanier->RowTemplate->Height = 24;
			this->dgvPanier->Size = System::Drawing::Size(576, 426);
			this->dgvPanier->TabIndex = 0;
			// 
			// lbResumeCommande
			// 
			this->lbResumeCommande->AutoSize = true;
			this->lbResumeCommande->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbResumeCommande->Location = System::Drawing::Point(2, 10);
			this->lbResumeCommande->Name = L"lbResumeCommande";
			this->lbResumeCommande->Size = System::Drawing::Size(225, 24);
			this->lbResumeCommande->TabIndex = 1;
			this->lbResumeCommande->Text = L"Résumé de la commande";
			// 
			// lbSousTotal
			// 
			this->lbSousTotal->AutoSize = true;
			this->lbSousTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSousTotal->Location = System::Drawing::Point(6, 67);
			this->lbSousTotal->Name = L"lbSousTotal";
			this->lbSousTotal->Size = System::Drawing::Size(76, 16);
			this->lbSousTotal->TabIndex = 2;
			this->lbSousTotal->Text = L"Sous total";
			// 
			// lbTaxe
			// 
			this->lbTaxe->AutoSize = true;
			this->lbTaxe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTaxe->Location = System::Drawing::Point(6, 109);
			this->lbTaxe->Name = L"lbTaxe";
			this->lbTaxe->Size = System::Drawing::Size(116, 16);
			this->lbTaxe->TabIndex = 3;
			this->lbTaxe->Text = L"Montant de taxe";
			// 
			// lbTotal
			// 
			this->lbTotal->AutoSize = true;
			this->lbTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTotal->Location = System::Drawing::Point(6, 153);
			this->lbTotal->Name = L"lbTotal";
			this->lbTotal->Size = System::Drawing::Size(43, 16);
			this->lbTotal->TabIndex = 4;
			this->lbTotal->Text = L"Total";
			// 
			// btnCommande
			// 
			this->btnCommande->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnCommande->Location = System::Drawing::Point(52, 184);
			this->btnCommande->Name = L"btnCommande";
			this->btnCommande->Size = System::Drawing::Size(152, 23);
			this->btnCommande->TabIndex = 10;
			this->btnCommande->Text = L"Commande";
			this->btnCommande->UseVisualStyleBackColor = true;
			this->btnCommande->Click += gcnew System::EventHandler(this, &PanierForm::btnCommande_Click);
			// 
			// lbMontantTaxe
			// 
			this->lbMontantTaxe->AutoSize = true;
			this->lbMontantTaxe->Location = System::Drawing::Point(147, 108);
			this->lbMontantTaxe->Name = L"lbMontantTaxe";
			this->lbMontantTaxe->Size = System::Drawing::Size(82, 16);
			this->lbMontantTaxe->TabIndex = 12;
			this->lbMontantTaxe->Text = L"Montant taxe";
			// 
			// lbMontantTotal
			// 
			this->lbMontantTotal->AutoSize = true;
			this->lbMontantTotal->Location = System::Drawing::Point(147, 153);
			this->lbMontantTotal->Name = L"lbMontantTotal";
			this->lbMontantTotal->Size = System::Drawing::Size(88, 16);
			this->lbMontantTotal->TabIndex = 13;
			this->lbMontantTotal->Text = L"Montant Total";
			// 
			// lbSTotal
			// 
			this->lbSTotal->AutoSize = true;
			this->lbSTotal->Location = System::Drawing::Point(147, 67);
			this->lbSTotal->Name = L"lbSTotal";
			this->lbSTotal->Size = System::Drawing::Size(72, 16);
			this->lbSTotal->TabIndex = 14;
			this->lbSTotal->Text = L"Sous Total";
			// 
			// btnRetour
			// 
			this->btnRetour->Location = System::Drawing::Point(89, 213);
			this->btnRetour->Name = L"btnRetour";
			this->btnRetour->Size = System::Drawing::Size(83, 23);
			this->btnRetour->TabIndex = 15;
			this->btnRetour->Text = L"Retour";
			this->btnRetour->UseVisualStyleBackColor = true;
			this->btnRetour->Click += gcnew System::EventHandler(this, &PanierForm::btnRetour_Click);
			// 
			// txtValider
			// 
			this->txtValider->Location = System::Drawing::Point(283, 27);
			this->txtValider->Name = L"txtValider";
			this->txtValider->Size = System::Drawing::Size(58, 23);
			this->txtValider->TabIndex = 16;
			this->txtValider->Text = L"Valider";
			this->txtValider->UseVisualStyleBackColor = true;
			this->txtValider->Click += gcnew System::EventHandler(this, &PanierForm::btnValider_Click);
			// 
			// txtRef
			// 
			this->txtRef->Location = System::Drawing::Point(3, 26);
			this->txtRef->Name = L"txtRef";
			this->txtRef->Size = System::Drawing::Size(146, 22);
			this->txtRef->TabIndex = 18;
			// 
			// nudQtnArticle
			// 
			this->nudQtnArticle->Location = System::Drawing::Point(193, 26);
			this->nudQtnArticle->Name = L"nudQtnArticle";
			this->nudQtnArticle->Size = System::Drawing::Size(40, 22);
			this->nudQtnArticle->TabIndex = 19;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gold;
			this->panel1->Controls->Add(this->lbResumeCommande);
			this->panel1->Controls->Add(this->lbSousTotal);
			this->panel1->Controls->Add(this->lbTaxe);
			this->panel1->Controls->Add(this->lbTotal);
			this->panel1->Controls->Add(this->btnRetour);
			this->panel1->Controls->Add(this->btnCommande);
			this->panel1->Controls->Add(this->lbSTotal);
			this->panel1->Controls->Add(this->lbMontantTaxe);
			this->panel1->Controls->Add(this->lbMontantTotal);
			this->panel1->Location = System::Drawing::Point(594, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(250, 655);
			this->panel1->TabIndex = 20;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Gold;
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->txtRef);
			this->panel2->Controls->Add(this->txtValider);
			this->panel2->Controls->Add(this->nudQtnArticle);
			this->panel2->Location = System::Drawing::Point(12, 445);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(591, 222);
			this->panel2->TabIndex = 21;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 16);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Référence de l\'article";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(164, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 16);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Quantité d\'article";
			// 
			// PanierForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(860, 761);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dgvPanier);
			this->Name = L"PanierForm";
			this->Text = L"PanierForm";
			this->Load += gcnew System::EventHandler(this, &PanierForm::PanierForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPanier))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudQtnArticle))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PanierForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvcArticleFacture = gcnew NS_Comp_Svc::servicesArticleFacture();
		this->oSvcUpdateArticlePanier = gcnew NS_Comp_Svc::servicesUpdateArticlePanier();
		this->oSvcUpdateStockArticle = gcnew NS_Comp_Svc::servicesArticle();

		this->dgvPanier->Refresh();
		this->oDs = this->oSvcArticleFacture->SelectArticleFacture("LOL");
		this->dgvPanier->DataSource = this->oDs;
		this->dgvPanier->DataMember = "LOL";


		/////////////////////////////////////////////////////////////////////////////
		//////////////////////AFFICHE LES MONTANT DU PANIER//////////////////////////
		/////////////////////////////////////////////////////////////////////////////

		String^ connString = "Data Source=LAPTOP-APUR1J6V\\MSSQLSERVER01;Initial Catalog=ProjetPOO;Integrated Security=True";
		String^ sqlQuery = "SELECT SUM(qtn_article*prixTTC_article) - SUM(qtn_article*prixHT_article) AS Montant_TVA FROM dbo.contenir INNER JOIN dbo.article ON contenir.ref_article = article.ref_article";
		String^ sqlQuery1 = "SELECT SUM(qtn_article * prixHT_article) AS Sous_Total FROM contenir INNER JOIN Article ON Article.ref_article = contenir.ref_article";
		String^ sqlQuery2 = "SELECT SUM(qtn_article * prixTTC_article) AS Total FROM dbo.contenir INNER JOIN dbo.Article ON Article.ref_article = contenir.ref_article";
		try 
		{
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			SqlCommand command(sqlQuery, % sqlConn);
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				this->lbMontantTaxe->Text = Convert::ToString(reader->GetSqlDecimal(0));
				sqlConn.Close();
				this->lbMontantTaxe->Text += " euros.";
			}
		}
		catch (Exception^ e) 
		{
			MessageBox::Show("Problème connection BDD."); MessageBoxButtons::OK;
			return;
		}

		
		try
		{
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			SqlCommand command(sqlQuery1, % sqlConn);
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				this->lbSTotal->Text = Convert::ToString(reader->GetSqlDecimal(0));
				sqlConn.Close();
				this->lbSTotal->Text += " euros.";
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Problème connection BDD."); MessageBoxButtons::OK;
			return;
		}

		
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
				this->lbMontantTotal->Text += " euros.";
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Problème connection BDD."); MessageBoxButtons::OK;
			return;
		}

		/////////////////////////////////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////////////////
	}

	public: NS_Comp_Mappage::Personne^ prsn;
	public: bool switchToFacture = false;
	private: System::Void btnCommande_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->oSvcUpdateStockArticle->UpdateStockArticle("RSL");
		switchToFacture = true;
		this->Close();
	}

	public: bool switchToClient = false;
	private: System::Void btnRetour_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		switchToClient = true;
		this->Close();
	}

	private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ ref = this->txtRef->Text;
		String^ qtn = this->nudQtnArticle->Text;

		this->oSvcUpdateArticlePanier->UpdateArticlePanier(this->txtRef->Text, this->nudQtnArticle->Text);
		this->dgvPanier->DataSource = this->oDs;
		this->dgvPanier->DataMember; 
		this->dgvPanier->Refresh();
		this->lbMontantTaxe->Refresh();
		this->lbMontantTotal->Refresh();
		this->lbSousTotal->Refresh();
	}
};
}
