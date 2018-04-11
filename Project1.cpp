//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Sherstuk_form.cpp", Shersteforma);
USEFORM("latyshev.cpp", Form5);
USEFORM("SidorovLab4.cpp", SIDFORM);
USEFORM("Unit4.cpp", ZabelovD);
USEFORM("TupikaUnit.cpp", Tupikaforma);
USEFORM("SOboLEV.cpp", sobolevForma);
USEFORM("GorbunoV.cpp", Form3);
USEFORM("DimitrovDD.cpp", DimitrovDima);
USEFORM("AhmeTau.cpp", AhmeForma228);
USEFORM("kalmykov.cpp", kalmykov1);
USEFORM("lab4_2.cpp", Form2);
USEFORM("lab4.cpp", Form1);
USEFORM("Ukolov.cpp", Ukolov_form);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TShersteforma), &Shersteforma);
		Application->CreateForm(__classid(TTupikaforma), &Tupikaforma);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TAhmeForma228), &AhmeForma228);
		Application->CreateForm(__classid(TsobolevForma), &sobolevForma);
		Application->CreateForm(__classid(TZabelovD), &ZabelovD);
		Application->CreateForm(__classid(Tkalmykov1), &kalmykov1);
		Application->CreateForm(__classid(TDimitrovDima), &DimitrovDima);
		Application->CreateForm(__classid(TForm5), &Form5);
		Application->CreateForm(__classid(TSIDFORM), &SIDFORM);
		Application->CreateForm(__classid(TUkolov_form), &Ukolov_form);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
