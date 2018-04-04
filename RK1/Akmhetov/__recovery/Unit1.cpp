//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
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
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int edit1, edit2;
	edit1 = StrToInt(Edit1->Text);
	edit2 = StrToInt(Edit2->Text);
	for(int i = 0; i < edit2 - 1;i++) {
		edit1 *= edit1;
	}
	Label1->Caption = edit1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	int edit1;
	int test;
	edit1 = StrToInt(Edit1->Text);
	int itera = 1;
	for(int i = 1; i <= edit1;i++) {
		itera = itera*i;
	}
	Label1->Caption = itera;
}
//---------------------------------------------------------------------------
