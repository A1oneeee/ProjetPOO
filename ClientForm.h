#pragma once
#include "servicesArticles.h"
#include "servicesPanier.h"
#include "RegisterForm.h"
#include "PanierForm.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ClientForm
	/// </summary>
	public ref class ClientForm : public System::Windows::Forms::Form
	{
	public:
		ClientForm(void)
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
		~ClientForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ btnPanier;
	private: System::Windows::Forms::Button^ btnHistoCommande;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripTextBox^ tstbIdentifier;
	private: System::Windows::Forms::ToolStripTextBox^ tstbCreerCompte;
	private: System::Windows::Forms::ToolStripTextBox^ tstbQuit;
	private: System::Windows::Forms::Panel^ panelStyle;





	private: System::Windows::Forms::Panel^ panelStyle1;


	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::DataGridView^ dgvArticle;
	private: System::Windows::Forms::DataGridViewButtonColumn^ AjouterArticle;
	private: System::Windows::Forms::TextBox^ txtRefArticle;
	private: System::Windows::Forms::Button^ btnAjouter;
	private: System::Windows::Forms::Label^ lbTruc;
	private: System::Windows::Forms::Button^ btnSupprimer;

	private: NS_Comp_Svc::servicesSupprimerArticlePanier^ oSvcSuppPanier;
	private: NS_Comp_Svc::servicesPanier^ oSvcAddPanier;
	private: NS_Comp_Svc::servicesArticle^ oSvcArticle;
	private: System::Windows::Forms::Button^ btnCompte;
	private: System::Data::DataSet^ oDs;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::ContextMenuStrip^ cmsCompte;
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tstbIdentifier = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tstbCreerCompte = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tstbQuit = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->btnPanier = (gcnew System::Windows::Forms::Button());
			this->btnHistoCommande = (gcnew System::Windows::Forms::Button());
			this->panelStyle = (gcnew System::Windows::Forms::Panel());
			this->panelStyle1 = (gcnew System::Windows::Forms::Panel());
			this->dgvArticle = (gcnew System::Windows::Forms::DataGridView());
			this->AjouterArticle = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->txtRefArticle = (gcnew System::Windows::Forms::TextBox());
			this->btnAjouter = (gcnew System::Windows::Forms::Button());
			this->lbTruc = (gcnew System::Windows::Forms::Label());
			this->btnSupprimer = (gcnew System::Windows::Forms::Button());
			this->btnCompte = (gcnew System::Windows::Forms::Button());
			cmsCompte = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			cmsCompte->SuspendLayout();
			this->panelStyle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvArticle))->BeginInit();
			this->SuspendLayout();
			// 
			// cmsCompte
			// 
			cmsCompte->AccessibleName = L"(none)";
			cmsCompte->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			cmsCompte->ImageScalingSize = System::Drawing::Size(20, 20);
			cmsCompte->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripSeparator1, this->tstbIdentifier,
					this->tstbCreerCompte, this->tstbQuit
			});
			cmsCompte->Name = L"contextMenuStrip1";
			cmsCompte->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			cmsCompte->ShowImageMargin = false;
			cmsCompte->Size = System::Drawing::Size(186, 97);
			cmsCompte->TabStop = true;
			cmsCompte->Text = L"Votre Compte";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(182, 6);
			// 
			// tstbIdentifier
			// 
			this->tstbIdentifier->AutoSize = false;
			this->tstbIdentifier->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbIdentifier->Name = L"tstbIdentifier";
			this->tstbIdentifier->ReadOnly = true;
			this->tstbIdentifier->Size = System::Drawing::Size(150, 27);
			this->tstbIdentifier->Text = L"Identifiez-vous";
			this->tstbIdentifier->Click += gcnew System::EventHandler(this, &ClientForm::tstbIdentifier_Click);
			// 
			// tstbCreerCompte
			// 
			this->tstbCreerCompte->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbCreerCompte->Name = L"tstbCreerCompte";
			this->tstbCreerCompte->ReadOnly = true;
			this->tstbCreerCompte->Size = System::Drawing::Size(150, 27);
			this->tstbCreerCompte->Text = L"Créez un compte";
			this->tstbCreerCompte->Click += gcnew System::EventHandler(this, &ClientForm::tstbCreerCompte_Click);
			// 
			// tstbQuit
			// 
			this->tstbQuit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbQuit->Name = L"tstbQuit";
			this->tstbQuit->ReadOnly = true;
			this->tstbQuit->Size = System::Drawing::Size(150, 27);
			this->tstbQuit->Text = L"Quitter";
			this->tstbQuit->Click += gcnew System::EventHandler(this, &ClientForm::tstbQuit_Click);
			// 
			// btnPanier
			// 
			this->btnPanier->BackColor = System::Drawing::Color::Gold;
			this->btnPanier->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->btnPanier->FlatAppearance->BorderSize = 0;
			this->btnPanier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPanier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPanier->Location = System::Drawing::Point(425, 24);
			this->btnPanier->Name = L"btnPanier";
			this->btnPanier->Size = System::Drawing::Size(150, 36);
			this->btnPanier->TabIndex = 9;
			this->btnPanier->Text = L"Votre Panier";
			this->btnPanier->UseVisualStyleBackColor = false;
			this->btnPanier->Click += gcnew System::EventHandler(this, &ClientForm::btnPanier_Click);
			// 
			// btnHistoCommande
			// 
			this->btnHistoCommande->BackColor = System::Drawing::Color::Gold;
			this->btnHistoCommande->FlatAppearance->BorderSize = 0;
			this->btnHistoCommande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHistoCommande->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHistoCommande->Location = System::Drawing::Point(269, 25);
			this->btnHistoCommande->Name = L"btnHistoCommande";
			this->btnHistoCommande->Size = System::Drawing::Size(150, 36);
			this->btnHistoCommande->TabIndex = 16;
			this->btnHistoCommande->Text = L"Vos Commandes";
			this->btnHistoCommande->UseVisualStyleBackColor = false;
			// 
			// panelStyle
			// 
			this->panelStyle->BackColor = System::Drawing::Color::Gold;
			this->panelStyle->Controls->Add(this->btnCompte);
			this->panelStyle->Controls->Add(this->btnHistoCommande);
			this->panelStyle->Controls->Add(this->btnPanier);
			this->panelStyle->Location = System::Drawing::Point(12, 12);
			this->panelStyle->Name = L"panelStyle";
			this->panelStyle->Size = System::Drawing::Size(992, 81);
			this->panelStyle->TabIndex = 17;
			// 
			// panelStyle1
			// 
			this->panelStyle1->BackColor = System::Drawing::Color::Gold;
			this->panelStyle1->Location = System::Drawing::Point(12, 66);
			this->panelStyle1->Name = L"panelStyle1";
			this->panelStyle1->Size = System::Drawing::Size(107, 569);
			this->panelStyle1->TabIndex = 18;
			// 
			// dgvArticle
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Gold;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvArticle->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgvArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvArticle->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->AjouterArticle });
			this->dgvArticle->Location = System::Drawing::Point(125, 99);
			this->dgvArticle->MultiSelect = false;
			this->dgvArticle->Name = L"dgvArticle";
			this->dgvArticle->ReadOnly = true;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvArticle->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dgvArticle->RowHeadersVisible = false;
			this->dgvArticle->RowHeadersWidth = 51;
			this->dgvArticle->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvArticle->Size = System::Drawing::Size(723, 536);
			this->dgvArticle->TabIndex = 1;
			// 
			// AjouterArticle
			// 
			this->AjouterArticle->HeaderText = L"";
			this->AjouterArticle->MinimumWidth = 6;
			this->AjouterArticle->Name = L"AjouterArticle";
			this->AjouterArticle->ReadOnly = true;
			this->AjouterArticle->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->AjouterArticle->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->AjouterArticle->Width = 35;
			// 
			// txtRefArticle
			// 
			this->txtRefArticle->Location = System::Drawing::Point(854, 120);
			this->txtRefArticle->Name = L"txtRefArticle";
			this->txtRefArticle->Size = System::Drawing::Size(150, 22);
			this->txtRefArticle->TabIndex = 19;
			// 
			// btnAjouter
			// 
			this->btnAjouter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnAjouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAjouter->Location = System::Drawing::Point(854, 149);
			this->btnAjouter->Name = L"btnAjouter";
			this->btnAjouter->Size = System::Drawing::Size(72, 23);
			this->btnAjouter->TabIndex = 20;
			this->btnAjouter->Text = L"+";
			this->btnAjouter->UseVisualStyleBackColor = false;
			this->btnAjouter->Click += gcnew System::EventHandler(this, &ClientForm::btnAjouter_Click);
			// 
			// lbTruc
			// 
			this->lbTruc->AutoSize = true;
			this->lbTruc->Location = System::Drawing::Point(854, 100);
			this->lbTruc->Name = L"lbTruc";
			this->lbTruc->Size = System::Drawing::Size(89, 16);
			this->lbTruc->TabIndex = 21;
			this->lbTruc->Text = L"Indiquez la réf";
			// 
			// btnSupprimer
			// 
			this->btnSupprimer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnSupprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSupprimer->Location = System::Drawing::Point(932, 149);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(72, 23);
			this->btnSupprimer->TabIndex = 22;
			this->btnSupprimer->Text = L"-";
			this->btnSupprimer->UseVisualStyleBackColor = false;
			this->btnSupprimer->Click += gcnew System::EventHandler(this, &ClientForm::btnSupprimer_Click);
			// 
			// btnCompte
			// 
			this->btnCompte->BackColor = System::Drawing::Color::Gold;
			this->btnCompte->ContextMenuStrip = cmsCompte;
			this->btnCompte->FlatAppearance->BorderSize = 0;
			this->btnCompte->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCompte->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCompte->Location = System::Drawing::Point(113, 24);
			this->btnCompte->Name = L"btnCompte";
			this->btnCompte->Size = System::Drawing::Size(150, 36);
			this->btnCompte->TabIndex = 0;
			this->btnCompte->Text = L"Votre Compte";
			this->btnCompte->UseVisualStyleBackColor = false;
			// 
			// ClientForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1420, 647);
			this->Controls->Add(this->btnSupprimer);
			this->Controls->Add(this->lbTruc);
			this->Controls->Add(this->btnAjouter);
			this->Controls->Add(this->txtRefArticle);
			this->Controls->Add(this->panelStyle1);
			this->Controls->Add(this->panelStyle);
			this->Controls->Add(this->dgvArticle);
			this->Name = L"ClientForm";
			this->Text = L"ClientForm";
			this->Load += gcnew System::EventHandler(this, &ClientForm::ClientForm_Load);
			cmsCompte->ResumeLayout(false);
			cmsCompte->PerformLayout();
			this->panelStyle->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvArticle))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: NS_Comp_Mappage::Personne^ prsn;

	private: System::Void ClientForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		this->dgvArticle->Refresh();
		this->oSvcArticle = gcnew NS_Comp_Svc::servicesArticle();
		this->oDs = this->oSvcArticle->selectionnerTousLesArticles("RSL");
		this->dgvArticle->DataSource = this->oDs;
		this->dgvArticle->DataMember = "RSL";

		this->oSvcAddPanier = gcnew NS_Comp_Svc::servicesPanier();
		this->oSvcSuppPanier = gcnew NS_Comp_Svc::servicesSupprimerArticlePanier();
	}

	private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgvArticle->Refresh();
		this->oDs = this->oSvcArticle->selectionnerTousLesArticles("RSL");
		this->dgvArticle->DataSource = this->oDs;
		this->dgvArticle->DataMember = "RSL";
	}

		 
	public: bool switchToPanier = false;
	private: System::Void btnPanier_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		switchToPanier = true;
		this->Close();
	}

	public: bool switchToRegister;
	private: System::Void tstbCreerCompte_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->switchToRegister = true;
		this->Close();
	}

	private: System::Void tstbQuit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

	public: bool switchToLogin = false;
	private: System::Void tstbIdentifier_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->switchToLogin = true;
		this->Close();
	}

	private: System::Void btnAjouter_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ ref = txtRefArticle->Text;

		String^ connString = "Data Source=LAPTOP-APUR1J6V\\MSSQLSERVER01;Initial Catalog=ProjetPOO;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery1 = "SELECT * FROM Article  WHERE ref_article = '" + this->txtRefArticle->Text + "'";
		SqlCommand command(sqlQuery1, % sqlConn);
		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read())
		{
			this->oSvcAddPanier->InsertArticlePanier(this->txtRefArticle->Text, "1", "RISE2022BRE1");
			MessageBox::Show("Cette article a été ajouté à votre panier", "Validé", MessageBoxButtons::OK);
		}
		else
		{
			MessageBox::Show("Référence d'article incorrect", "Erreur", MessageBoxButtons::OK);
			return;
		}

		if (ref == "")
		{
			MessageBox::Show("Référence d'article non renseignée", "Erreur", MessageBoxButtons::OK);
			return;
		}

		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	}

	private: System::Void btnSupprimer_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ ref = txtRefArticle->Text;

		String^ connString = "Data Source=LAPTOP-APUR1J6V\\MSSQLSERVER01;Initial Catalog=ProjetPOO;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery2 = "SELECT * FROM Article  WHERE ref_article = '" + this->txtRefArticle->Text + "'";
		SqlCommand command(sqlQuery2, % sqlConn);
		SqlDataReader^ reader = command.ExecuteReader();
		
		if (reader->Read())
		{
			this->oSvcSuppPanier->DeletetArticlePanier(this->txtRefArticle->Text);
			MessageBox::Show("Cette article a été supprimé de votre panier", "Validé", MessageBoxButtons::OK);
		}
		else
		{
			MessageBox::Show("Référence d'article incorrect", "Erreur", MessageBoxButtons::OK);
			return;
		}
		if (ref == "")
		{
			MessageBox::Show("Référence d'article non renseignée", "Erreur", MessageBoxButtons::OK);
			return;
		}

		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	}
};
}