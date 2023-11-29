#pragma once 
#include "pch.h"
#include "MyForm.h"
#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Drawing;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	P6new::MyForm monFormulaire;
	Application::Run(% monFormulaire);
}
