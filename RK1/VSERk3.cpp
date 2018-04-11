//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("VSERk1.cpp", TESTForm);
USEFORM("Zabelov.cpp", ZabelovForm);
USEFORM("RKzada4a4.cpp", DimitrovDDTest);
USEFORM("enter.cpp", Borodin);
USEFORM("Ahmetov.cpp", Ahme);
USEFORM("RK.cpp", Gorbunov);
USEFORM("kalmykov.cpp", kalmykov_form);
USEFORM("kalkul.cpp", Latishev);
USEFORM("RKorobkov1.cpp", Korobkov);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TTESTForm), &TESTForm);
		Application->CreateForm(__classid(TDimitrovDDTest), &DimitrovDDTest);
		Application->CreateForm(__classid(TAhme), &Ahme);
		Application->CreateForm(__classid(Tkalmykov_form), &kalmykov_form);
		Application->CreateForm(__classid(TZabelovForm), &ZabelovForm);
		Application->CreateForm(__classid(TGorbunov), &Gorbunov);
		Application->CreateForm(__classid(TBorodin), &Borodin);
		Application->CreateForm(__classid(TLatishev), &Latishev);
		Application->CreateForm(__classid(TKorobkov), &Korobkov);
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
