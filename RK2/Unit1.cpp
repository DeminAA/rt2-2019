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
		//Square->Canvas->Pen->Color = RGB(40,231,232);
		Square->Canvas->Brush->Color= RGB(40,231,232);
		//Square->Canvas->Rectangle(0,0,305,305);
		Square->Canvas->FillRect(Rect(0,0,305,305));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SquareMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
		Square->Canvas->Brush->Color= RGB(40,X,Y);
		//Square->Canvas->Rectangle(0,0,305,305);
		Square->Canvas->FillRect(Rect(0,0,305,305));
}
//---------------------------------------------------------------------------
