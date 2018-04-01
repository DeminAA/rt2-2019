//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "AhmeTau.h"
#include "Sherstuk_form.h"
#include "lab4.h"
#include "TupikaUnit.h"
#include "GorbunoV.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TShersteforma *Shersteforma;
//---------------------------------------------------------------------------
__fastcall TShersteforma::TShersteforma(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TShersteforma::FormCreate(TObject *Sender)
{
  StringGrid1->Cells[0][0]="№ по журналу";
  StringGrid1->Cells[1][0]="Текст";
  for (int i = 1; i < 17 ; i++) {
	StringGrid1->Cells[0][i] = i;
  }
}
//---------------------------------------------------------------------------
void __fastcall TShersteforma::Button1Click(TObject *Sender)
{
	StringGrid1 -> Cells[1][1] = G_01_Akhmetov;
	StringGrid1->Cells[1][13] = G_13_Tupika;
	StringGrid1->Cells[1][15] = G_15_Shanin;
	StringGrid1->Cells[1][16] = G_16_Sherstuk;
	StringGrid1 -> Cells[1][3] = G_03_Gorbunov;
}
//---------------------------------------------------------------------------
