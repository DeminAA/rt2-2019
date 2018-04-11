//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RKzada4a4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDimitrovDDTest *DimitrovDDTest;
//---------------------------------------------------------------------------
__fastcall TDimitrovDDTest::TDimitrovDDTest(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDimitrovDDTest::Button1Click(TObject *Sender)
{
	int L1 = Edit1 -> Text.Length() + 1;
	double L2 = L1 - 2;
	int Peremen = 0;
	int Summa = 0;
	int i = 1;
	char Peremen2;
	for (i = 1; i < L1; i++) {
		Peremen = ( Edit1 -> Text[i] - 48 ) * ( pow( 2, L2 ));
		Summa = Summa + Peremen;
		L2--;
	}
	if (Label1 -> Caption == "Введённые числа:") {
		Label1 -> Caption = Label1 -> Caption + Summa + ",";
		Label2 -> Caption = Summa;
	}	else	{
		if ( Summa == 6 && Label2 -> Caption == 5 ) {
			Label2 -> Caption = "Последовательно введены числа 5 и 6";
			Label1 -> Caption = Label1 -> Caption  + Summa + ",";
		}  else  {
			Label1 -> Caption = Label1 -> Caption  + Summa + ",";
			Label2 -> Caption = Summa;
		}
	}
}
//---------------------------------------------------------------------------


void __fastcall TDimitrovDDTest::FormCreate(TObject *Sender)
{
	Edit1 -> Text = "Введите двоичное число от 0 до 9";
	Label1 -> Caption = "Введённые числа:";
    Label2 -> Caption = "";
}
//---------------------------------------------------------------------------

void __fastcall TDimitrovDDTest::Edit1Click(TObject *Sender)
{
	Edit1 -> Text = "";
}
//---------------------------------------------------------------------------


void __fastcall TDimitrovDDTest::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
 	if ( Key == 13 ) {
		Button1Click(Sender);
		Edit1 -> Text = "";
	}
}
//---------------------------------------------------------------------------

