#include "LoginForm.h"
#include "RegisterForm.h"
#include "AdminForm.h"
#include "PersonnelForm.h"

using namespace System;
using namespace System::Windows::Forms;

typedef int (*PintFct)(int);
PintFct pf;

int f(int a) {
    return a;
}

int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    projetPOO::AdminForm adminForm;
    ProjetPOO::PersonnelForm personForm;
    pf = f;                                     // pointe sur la fct f

    while (true) {
        projetPOO::LoginForm loginForm;
        loginForm.ShowDialog();
        if (loginForm.getSwitchToRegister()) {
            projetPOO::RegisterForm registerForm;
            registerForm.ShowDialog();
            if (registerForm.getSwitchToLogin()) {
                continue;
            }
        }
        switch (pf(loginForm.getSwitchPersonne()))
        {
        case 1:
            MessageBox::Show("Client détecté."); MessageBoxButtons::OK;
            MessageBox::Show("ID du client ID_prsn = " + pf(loginForm.getID())); MessageBoxButtons::OK;
            break;
        case 2:
            MessageBox::Show("Personnel détecté admin."); MessageBoxButtons::OK;
            adminForm.ShowDialog();
            break;
        case 3:
            MessageBox::Show("Personnel détecté non admin."); MessageBoxButtons::OK;
            personForm.ShowDialog();
            break;
        }
        break;
    }
}