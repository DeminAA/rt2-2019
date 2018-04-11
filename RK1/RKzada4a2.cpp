//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RKzada4a2.h"
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

void __fastcall TForm1::ButtonLetoClick(TObject *Sender)
{
	Image1 -> Picture -> LoadFromFile("Leto.jpg");
}
//---------------------------------------------------------------------------



void __fastcall TForm1::ButtonOsenClick(TObject *Sender)
{
	Image1 -> Picture -> LoadFromFile("Osen.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonZimaClick(TObject *Sender)
{
	Image1 -> Picture -> LoadFromFile("Zima.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonVesnaClick(TObject *Sender)
{
	Image1 -> Picture -> LoadFromFile("Vesna.jpg");
}
//---------------------------------------------------------------------------



