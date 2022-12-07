#pragma once
#include <string.h>
#include "User.h"
#include "Client.h"
#include "Personnel.h"

namespace projetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbMDP;

	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ btnConnecter;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ cbMdp;





	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbMDP = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->btnConnecter = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->cbMdp = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(527, 70);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->MaximumSize = System::Drawing::Size(307, 59);
			this->label1->MinimumSize = System::Drawing::Size(307, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(307, 59);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenue";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(529, 210);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(232, 41);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Adresse Mail";
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEmail->Location = System::Drawing::Point(537, 277);
			this->tbEmail->Margin = System::Windows::Forms::Padding(4);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(295, 30);
			this->tbEmail->TabIndex = 2;
			this->tbEmail->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(529, 364);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(242, 41);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Mot de Passe";
			// 
			// tbMDP
			// 
			this->tbMDP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbMDP->Location = System::Drawing::Point(537, 421);
			this->tbMDP->Margin = System::Windows::Forms::Padding(4);
			this->tbMDP->Name = L"tbMDP";
			this->tbMDP->Size = System::Drawing::Size(295, 30);
			this->tbMDP->TabIndex = 4;
			this->tbMDP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbMDP->UseSystemPasswordChar = true;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->linkLabel1->Location = System::Drawing::Point(556, 590);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(250, 23);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"je souhaite m\'enregistrer";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkLabel1_LinkClicked);
			// 
			// btnConnecter
			// 
			this->btnConnecter->BackColor = System::Drawing::Color::Transparent;
			this->btnConnecter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnConnecter->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConnecter->Location = System::Drawing::Point(583, 498);
			this->btnConnecter->Margin = System::Windows::Forms::Padding(4);
			this->btnConnecter->Name = L"btnConnecter";
			this->btnConnecter->Size = System::Drawing::Size(193, 37);
			this->btnConnecter->TabIndex = 6;
			this->btnConnecter->Text = L"se connecter";
			this->btnConnecter->UseVisualStyleBackColor = false;
			this->btnConnecter->Click += gcnew System::EventHandler(this, &LoginForm::btnConnecter_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(945, 39);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(216, 186);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// cbMdp
			// 
			this->cbMdp->AutoSize = true;
			this->cbMdp->BackColor = System::Drawing::Color::Transparent;
			this->cbMdp->Font = (gcnew System::Drawing::Font(L"Verdana", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbMdp->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->cbMdp->Location = System::Drawing::Point(607, 458);
			this->cbMdp->Name = L"cbMdp";
			this->cbMdp->Size = System::Drawing::Size(147, 20);
			this->cbMdp->TabIndex = 8;
			this->cbMdp->Text = L"Voir mot de passe";
			this->cbMdp->UseVisualStyleBackColor = false;
			this->cbMdp->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::cbMdp_CheckedChanged_1);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1352, 752);
			this->Controls->Add(this->cbMdp);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnConnecter);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->tbMDP);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1370, 799);
			this->MinimumSize = System::Drawing::Size(1370, 799);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RSE : Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
			// LOAD FORM BEGINING
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		
	}
			// On créer une personne
	private : Personne^ prsn = nullptr;
	private: int SwitchPersonne = 0;
	public: int getSwitchPersonne() { return SwitchPersonne; }
	private: int ID_RSE = 0;

	public: int getID() { return this->ID_RSE; }

	//public: int (*pointeurFonction)() = &getSwitchPersonne;

	private: System::Void btnConnecter_Click(System::Object^ sender, System::EventArgs^ e) {
		// BDD LINK
		String^ connString = "Data Source=LAPTOP-SODGV426;Initial Catalog=BDD_POO_v5;Integrated Security=True";
		
		// Verifie si tb email et mdp sont empty
		if (this->tbEmail->Text->Length == 0 || this->tbMDP->Text->Length < 5) {
			MessageBox::Show("Veillez rentrer une adresse mail et un mot de passe valide."); MessageBoxButtons::OK;
			return;
		}
		try {
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery =  "SELECT * FROM dbo.Personne WHERE email_prsn = '" + this->tbEmail->Text + "' AND mdp_prsn = '" + this->tbMDP->Text + "';";
			String^ sqlQuery1 = "SELECT * FROM dbo.client WHERE email_prsn = '"   + this->tbEmail->Text + "' AND mdp_prsn = '" + this->tbMDP->Text + "';";
			String^ sqlQuery2 = "SELECT * FROM dbo.personnel WHERE email_prsn = '"+ this->tbEmail->Text + "' AND mdp_prsn = '" + this->tbMDP->Text + "';";
			// Cherche dans Personne
			SqlCommand command(sqlQuery, % sqlConn);
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				sqlConn.Close();
				prsn = gcnew Personne();
				// Cherche dans Client
				sqlConn.Open();
				SqlCommand command(sqlQuery1, % sqlConn);
				SqlDataReader^ reader1 = command.ExecuteReader();
				if (reader1->Read()) {
					prsn = gcnew Client();
					// On ajoute les attributs à notre CLIENT
					prsn->setId_prsn(reader1->GetInt32(0));
					ID_RSE = reader1->GetInt32(0);
					prsn->setID_client(reader1->GetInt32(1));
					// IL MANQUE LA DATE <- <- <- <- <- <- <- <- <- <- <- <- <- <- <- <- <- <- 
					prsn->setNom(reader1->GetString(3));
					prsn->setPrenom(reader1->GetString(4));
					prsn->setEmail(reader1->GetString(5));
					sqlConn.Close();
					SwitchPersonne = 1;
					delete prsn;
					this->Close();
				}
				else {
					sqlConn.Close();
					sqlConn.Open();
					SqlCommand command(sqlQuery2, % sqlConn);
					SqlDataReader^ reader2 = command.ExecuteReader();
					// Cherche si Personnel
					if (reader2->Read()) {
						prsn = gcnew Personnel();
						prsn->setId_prsn(reader2->GetInt32(0));
						prsn->setID_personnel(reader2->GetInt32(1));
						prsn->setCode_secu(reader2->GetString(2));
						// IL MANQUE LA DATE <- <- <- <- <- <- <- <- <- <- <- <- <- <- <- <- <- <- 
						prsn->setID_supp(reader2->GetInt32(4));
						prsn->setAdmin(reader2->GetBoolean(5));
						prsn->setNom(reader2->GetString(6));
						prsn->setPrenom(reader2->GetString(7));
						prsn->setEmail(reader2->GetString(8));
						prsn->setID_adresse(reader2->GetInt32(10));

						bool admin_ = reader2->GetBoolean(5);
						if (prsn->getAdmin()) {
							SwitchPersonne = 2;
						}
						else {
							SwitchPersonne = 3;
						}
						delete prsn;
						sqlConn.Close();
						this->Close();
					}
				}
			}
			else {
				sqlConn.Close();
				MessageBox::Show("E-mail ou mot de passe incorrect."); MessageBoxButtons::OK;
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Problème de connection à la BDD."); MessageBoxButtons::OK;
		}
	}
		   // SWITCH TO REGISTER
	private: bool switchToRegister = false;
	public: bool getSwitchToRegister() {
		return this->switchToRegister;
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToRegister = true;
		this->Close();
	}
private: System::Void cbMdp_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!this->cbMdp->Checked)
	{
		this->tbMDP->UseSystemPasswordChar = true;
	}
	else
	{
		this->tbMDP->UseSystemPasswordChar = false;
	}
}
private: System::Void cbMdp_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if  (!this->cbMdp->Checked){ this->tbMDP->UseSystemPasswordChar = true; }
	else                       { this->tbMDP->UseSystemPasswordChar = false; }
}
};
}

