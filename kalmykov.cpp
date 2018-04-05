//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "kalmykov.h"
#include "AhmeTau.h"
#include "GorbunoV.h"
#include "TupikaUnit.h"
#include "Sherstuk_form.h"
#include "lab4.h"
#include "SOboLEV.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tkalmykov1 *kalmykov1;
//---------------------------------------------------------------------------
__fastcall Tkalmykov1::Tkalmykov1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tkalmykov1::FormCreate(TObject *Sender)
{
for (int i = 1; i < 18; i++ ) {
    StringGrid1->Cells[0][i]= i ;
}
	StringGrid1->Cells[0][0]="Nomer";
	StringGrid1->Cells[1][0]="Name";
}
//---------------------------------------------------------------------------
void __fastcall Tkalmykov1::ButClick(TObject *Sender)
{
	StringGrid1 -> Cells[1][6] = G_06_Kalmykov;
	StringGrid1 -> Cells[1][1] = G_01_Akhmetov;
	StringGrid1 -> Cells[1][3] = G_03_Gorbunov;
	StringGrid1 -> Cells[1][5] =G_05_Zabelov;
	StringGrid1->Cells[1][13] = G_13_Tupika;
	StringGrid1->Cells[1][15] = G_15_Shanin;
	StringGrid1->Cells[1][16] = G_16_Sherstuk;
	StringGrid1->Cells[1][12] = G_12_Sobolev;
}
//---------------------------------------------------------------------------
