#include "JanelaPrincipal.h"

#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:main")

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

int main(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	IHM_mesa::JanelaPrincipal form;
	Application::Run(%form);
}