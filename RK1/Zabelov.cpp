//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Zabelov.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TZabelovForm *ZabelovForm;
//---------------------------------------------------------------------------
__fastcall TZabelovForm::TZabelovForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TZabelovForm::ButtonLetoClick(TObject *Sender)
{
	Image1 -> Picture -> LoadFromFile("4.jpg");
}
//---------------------------------------------------------------------------



void __fastcall TZabelovForm::ButtonOsenClick(TObject *Sender)
{
	Image1 -> Picture -> LoadFromFile("2.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TZabelovForm::ButtonZimaClick(TObject *Sender)
{
	Image1 -> Picture -> LoadFromFile("1.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TZabelovForm::ButtonVesnaClick(TObject *Sender)
{
	Image1 -> Picture -> LoadFromFile("3.jpg");
}
//---------------------------------------------------------------------------



