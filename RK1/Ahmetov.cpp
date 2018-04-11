//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Ahmetov.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAhme *Ahme;
//---------------------------------------------------------------------------
__fastcall TAhme::TAhme(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAhme::Button1Click(TObject *Sender)
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
void __fastcall TAhme::Button2Click(TObject *Sender)
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
