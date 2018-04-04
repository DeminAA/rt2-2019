//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RK2.h"
#include "Shanin.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
   //	ListBox1->Items->Add("Shersteforma");      //0
	ListBox1->Items->Add("Shanin");      //1
   //	ListBox1->Items->Add("TupikaForm");      //2
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ShowClick(TObject *Sender)
{
	switch (ListBox1->ItemIndex) {
		case 0:
			ShaninForm->Show();
			break;
		case 1:
			//Shersteforma->Show();
			break;
		case 2:
		   //	TupikaForm->Show();
			break;
		default:
			ShowMessage("»м€ формы не выбрано или данной формы не существует.");
	}
}
//---------------------------------------------------------------------------
