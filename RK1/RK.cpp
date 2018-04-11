//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RK.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGorbunov *Gorbunov;
//---------------------------------------------------------------------------
__fastcall TGorbunov::TGorbunov(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TGorbunov::Button1Click(TObject *Sender)
{

Image1 ->Width=260;
Image1 ->Height=100;
}
//---------------------------------------------------------------------------
void __fastcall TGorbunov::Button2Click(TObject *Sender)
{

Image1 ->Width=300;
Image1 ->Height=200;
}
//---------------------------------------------------------------------------
