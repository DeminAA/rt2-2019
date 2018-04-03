//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
 #include "AhmeTau.h"
 #include "GorbunoV.h"
 #include "Unit4.h"
 #include "SOboLEV.h"
 #include "TupikaUnit.h"
 #include "Sherstuk_form.h"
 #include "lab4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTupikaforma *Tupikaforma;
//---------------------------------------------------------------------------
__fastcall TTupikaforma::TTupikaforma(TComponent* Owner)
	: TForm(Owner)
{
StringGrid1->Cells[0][0]="Nomer po zhurnaly";
StringGrid1->Cells[1][0]="Text";
for (int i = 1; i < 18; i++ ) {
    StringGrid1->Cells[0][i]= i ;
}
}
//---------------------------------------------------------------------------
void __fastcall TTupikaforma::Button1Click(TObject *Sender)
{
	StringGrid1 -> Cells[1][1] = G_01_Akhmetov;
	StringGrid1 -> Cells[1][3] = G_03_Gorbunov;
	StringGrid1 -> Cells[1][5] = G_05_Zabelov;
	StringGrid1->Cells[1][12] = G_12_Sobolev;
	StringGrid1->Cells[1][13] = G_13_Tupika;
	StringGrid1->Cells[1][15] = G_15_Shanin;
	StringGrid1->Cells[1][16] = G_16_Sherstuk;
}
//---------------------------------------------------------------------------

