//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("sherstuk.cpp", shersteform);
USEFORM("sobolevrk.cpp", SobolevForma);
USEFORM("TupikaUnit.cpp", TupikaForm);
USEFORM("Shanin.cpp", ShaninForm);
USEFORM("RK2.cpp", Form1);
USEFORM("rk1MSI.cpp", Sidorov);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TShaninForm), &ShaninForm);
		Application->CreateForm(__classid(Tshersteform), &shersteform);
		Application->CreateForm(__classid(TSobolevForma), &SobolevForma);
		Application->CreateForm(__classid(TTupikaForm), &TupikaForm);
		Application->CreateForm(__classid(TSidorov), &Sidorov);
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
