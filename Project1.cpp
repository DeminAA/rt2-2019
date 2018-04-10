//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Sherstuk_form.cpp", Shersteforma);
USEFORM("SOboLEV.cpp", sobolevForma);
USEFORM("Unit4.cpp", ZabelovD);
USEFORM("TupikaUnit.cpp", Tupikaforma);
USEFORM("lab4_2.cpp", Form2);
USEFORM("GorbunoV.cpp", Form3);
USEFORM("AhmeTau.cpp", AhmeForma228);
USEFORM("kalmykov.cpp", kalmykov1);
USEFORM("lab4.cpp", Form1);
USEFORM("DimitrovDD.cpp", DimitrovDima);
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
