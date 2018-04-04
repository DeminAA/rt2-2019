//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "sherstuk.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tshersteform *shersteform;
//---------------------------------------------------------------------------
__fastcall Tshersteform::Tshersteform(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tshersteform::resultClick(TObject *Sender)
{
  /*	float dig1=digit1->Text;
	float dig2=digit2->Text;        */
}
//---------------------------------------------------------------------------
void __fastcall Tshersteform::divideClick(TObject *Sender)
{
	double dig1=StrToFloat(digit1->Text);
	double dig2=StrToFloat(digit2->Text);
	double res;
	res = dig1/dig2;
	result->Caption=res;
	return;
}
//---------------------------------------------------------------------------
void __fastcall Tshersteform::root_butClick(TObject *Sender)
{
	double dig1=StrToFloat(digit1->Text);
	double dig2=StrToFloat(digit2->Text);
	double res;
	double kostil = 1/dig2;
	res = pow(dig1, kostil);
	AnsiString res1 = res;
	result->Caption = res1;
	return;

}
//---------------------------------------------------------------------------
void __fastcall Tshersteform::degreeClick(TObject *Sender)
{
	double dig1=StrToFloat(digit1->Text);
	double dig2=StrToFloat(digit2->Text);
	double res;
	res = pow(dig1, dig2);
	AnsiString res1 = res;
	result->Caption = res1;
	return;
}
//---------------------------------------------------------------------------
