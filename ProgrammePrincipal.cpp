#include "LoginForm.h"
#include "RegisterForm.h"
#include "ClientForm.h"
#include "Personne.h"
#include "Client.h"
#include "PanierForm.h"
#include "FactureForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    NS_Comp_Mappage::Personne^ prsn = nullptr;

    while (true)
    {
        ProjetPOO::LoginForm loginForm;
        loginForm.ShowDialog();

        if (loginForm.switchToRegister)
        {
            ProjetPOO::RegisterForm registerForm;
            registerForm.ShowDialog();

            if (registerForm.switchToLogin)
            {
                continue;
            }
        }

        while (true)
        {
            if (loginForm.switchToCatalogue)
            {
                ProjetPOO::ClientForm catalogueForm;
                catalogueForm.ShowDialog();

                if (catalogueForm.switchToPanier)
                {
                    ProjetPOO::PanierForm panierForm;
                    panierForm.ShowDialog();

                    if (panierForm.switchToClient)
                    {
                        continue;
                    }

                    if (panierForm.switchToFacture)
                    {
                        ProjetPOO::FactureForm factureForm;
                        factureForm.ShowDialog();
                    }
                    if (catalogueForm.switchToLogin)
                    {
                        continue;
                    }
                    if (catalogueForm.switchToRegister)
                    {
                        ProjetPOO::RegisterForm registerForm;
                        registerForm.ShowDialog();
                    }
                    else
                    {
                        prsn = loginForm.prsn;
                        break;
                    }
                }

            }
            else
            {
                prsn = loginForm.prsn;
                break;
            }
        }
    }
}

	
