//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "kal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tkal_form *kal_form;
//---------------------------------------------------------------------------
__fastcall Tkal_form::Tkal_form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tkal_form::FormCreate(TObject *Sender)
{
Memo1->Color= clGreen;
Memo1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall Tkal_form::Button1Click(TObject *Sender)
{
 Memo1->Width=88;
 Memo1->Height=40;
}
//---------------------------------------------------------------------------
void __fastcall Tkal_form::Button2Click(TObject *Sender)
{
 Memo1->Width=250;
 Memo1->Height=120;
}
//---------------------------------------------------------------------------
void __fastcall Tkal_form::Button3Click(TObject *Sender)
{
 Memo1->Width=185;
 Memo1->Height=89;
}
//---------------------------------------------------------------------------
