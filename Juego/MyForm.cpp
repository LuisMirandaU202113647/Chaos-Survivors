#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew TFCHAOSSURVIVORS::MyForm());

	return 0;
}

