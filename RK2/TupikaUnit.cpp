//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TupikaUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTupikaForm *TupikaForm;
//---------------------------------------------------------------------------
__fastcall TTupikaForm::TTupikaForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTupikaForm::Image1MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Canvas->Brush->Color=clBlue;
Canvas->FillRect(Rect(25,25,400,400));
}
//---------------------------------------------------------------------------

void __fastcall TTupikaForm::Button1Click(TObject *Sender)
{
  TupikaForm->Canvas->MoveTo(25,400);
TupikaForm->Canvas->LineTo(25,25);
TupikaForm->Canvas->LineTo(25,400);
TupikaForm->Canvas->LineTo(400,400);
TupikaForm->Canvas->LineTo(400,25);
TupikaForm->Canvas->LineTo(25,25);
}
//---------------------------------------------------------------------------

