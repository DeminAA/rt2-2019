//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("sherstuk.cpp", shersteform);
USEFORM("Shanin.cpp", ShaninForm);
USEFORM("TupikaUnit.cpp", TupikaForm);
USEFORM("sobolevrk.cpp", SobolevForma);
USEFORM("rk1MSI.cpp", Sidorov);
USEFORM("RK2.cpp", Form1);
USEFORM("RK_Semenova\Unit3.cpp", Form3);
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
		Application->CreateForm(__classid(TForm3), &Form3);
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
