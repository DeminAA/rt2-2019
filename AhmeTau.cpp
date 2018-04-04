//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
 #include "lab4.h"
#include "lab4_2.h"
#include "Sherstuk_form.h"
#include "TupikaUnit.h"
#include "GorbunoV.h"
#include "AhmeTau.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAhmeForma228 *AhmeForma228;
//---------------------------------------------------------------------------
__fastcall TAhmeForma228::TAhmeForma228(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAhmeForma228::FormCreate(TObject *Sender)
{
	StringGrid1->Cells[0][0]="4idori";
	StringGrid1->Cells[1][0]="raikiri";
	for (int i = 1; i < 18; i++ ) {
		StringGrid1->Cells[0][i]= i ;
	}
}
//---------------------------------------------------------------------------
void __fastcall TAhmeForma228::Button1Click(TObject *Sender)
{
	StringGrid1 -> Cells[0][1] = "1";
	StringGrid1 -> Cells[1][1] = G_01_Akhmetov;
	StringGrid1 -> Cells[1][3] = G_03_Gorbunov;
	StringGrid1->Cells[1][13] = G_13_Tupika;
	StringGrid1->Cells[1][15] = G_15_Shanin;
	StringGrid1->Cells[1][16] = G_16_Sherstuk;
}
//---------------------------------------------------------------------------
