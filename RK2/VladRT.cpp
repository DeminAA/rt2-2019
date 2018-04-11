//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tjustform *justform;
//---------------------------------------------------------------------------
__fastcall Tjustform::Tjustform(TComponent* Owner)
	: TForm(Owner)
{
		Square->Canvas->Brush->Color= RGB(40,231,232);
		Square->Canvas->FillRect(Rect(0,0,305,305));
}
//---------------------------------------------------------------------------
void __fastcall Tjustform::SquareMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
		Square->Canvas->Brush->Color= RGB(40,X,Y);
		Square->Canvas->FillRect(Rect(0,0,305,305));
}
//---------------------------------------------------------------------------
