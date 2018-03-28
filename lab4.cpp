//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "lab4.h"
#include "lab4_2.h"
#include "Sherstuk_form.h"
#include "TupikaUnit.h"
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
//int num = 2;
  //	StringGrid1 -> RowCount = num;
   //	for (int i = 0; i < num+1; i++) {
		StringGrid1 -> Cells[0][0] = "Number:";
		StringGrid1 -> Cells[1][0] = "Tape here";
		//StringGrid1->
		for (int i = 1; i <= 16; i++) {
			StringGrid1 -> Cells[0][i] = i;
		}
		StringGrid1 -> Cells[0][15] = StringGrid1 -> Cells[0][15] + " Shanin";
		StringGrid1 -> Cells[1][15] = "lol";
		StringGrid1 -> Cells[0][16] = "16 Sherstuk";
		StringGrid1 -> Cells[1][16] = G_16_Sherstuk;
		StringGrid1 -> Cells[0][17] = "17 Fomenkov";
		StringGrid1 -> Cells[1][17] = G_17_Fomenkov;
   //	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Shersteforma->Show();     //мен€йте на свою форму, кому нужно
	Tupikaforma->Show();
}
//---------------------------------------------------------------------------
