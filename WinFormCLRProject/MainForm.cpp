#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    WinFormCLRProject::MainForm form; // Project_name = Your Project Name, MainForm = Your Form Name
    Application::Run(% form);
}