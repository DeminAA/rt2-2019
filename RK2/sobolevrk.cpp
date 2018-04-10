//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "sobolevrk.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSobolevForma *SobolevForma;
//---------------------------------------------------------------------------
__fastcall TSobolevForma::TSobolevForma(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSobolevForma::BitBtn2Click(TObject *Sender)
{
		SobolevForma->Canvas->Brush->Color=clGreen;
		SobolevForma->Canvas->Ellipse(25,25,200,200);
}
//---------------------------------------------------------------------------
void __fastcall TSobolevForma::BitBtn1Click(TObject *Sender)
{
SobolevForma->Canvas->Brush->Color=clRed;
SobolevForma->Canvas->Ellipse(25,25,200,200);
}
//---------------------------------------------------------------------------
void __fastcall TSobolevForma::Button1Click(TObject *Sender)
{
 SobolevForma->Canvas->Brush->Color=clWhite;
 SobolevForma->Canvas->Ellipse(25,25,200,200);
}
//---------------------------------------------------------------------------

void __fastcall TSobolevForma::BitBtn3Click(TObject *Sender)
{
	SobolevForma->Canvas->Brush->Color=clBlue;
	SobolevForma->Canvas->Ellipse(25,25,200,200);
}
//---------------------------------------------------------------------------
