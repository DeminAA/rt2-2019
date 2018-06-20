//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Vlados.h"
#include "SOboLEV.h"
#include "AhmeTau.h"
#include "GorbunoV.h"
#include "TupikaUnit.h"
#include "Sherstuk_form.h"
#include "lab4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TVRT *VRT;
//---------------------------------------------------------------------------
__fastcall TVRT::TVRT(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TVRT::FormCreate(TObject *Sender)
{
StringGrid1 -> Cells[1][1] = G_01_Akhmetov;
	tablo -> Cells[1][3] = G_03_Gorbunov;
	tablo->Cells[1][13] = G_13_Tupika;
	tablo->Cells[1][15] = G_15_Shanin;
	tablo->Cells[1][16] = G_16_Sherstuk;
	tablo->Cells[1][12] = G_12_Sobolev;
	tablo->Cells[1][9] = G_09_Vladooos;
}
//---------------------------------------------------------------------------
