//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DimitrovDD.h"
#include "lab4.h"
#include "lab4_2.h"
#include "Sherstuk_form.h"
#include "TupikaUnit.h"
#include "GorbunoV.h"
#include "AhmeTau.h"
#include "SOboLEV.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDimitrovDima *DimitrovDima;
//---------------------------------------------------------------------------
__fastcall TDimitrovDima::TDimitrovDima(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDimitrovDima::UpdateTableClick(TObject *Sender)
{
	int i;
	StringGridDimitrov -> Cells [0][0] = "¹";
	StringGridDimitrov -> Cells [1][0] = "Value";
	for (i = 1; i < 17; i++) {
		StringGridDimitrov -> Cells [0][i] = i;
	}
	StringGridDimitrov -> Cells [0][5] = G_5_Dimitrov;
	StringGridDimitrov -> Cells[1][1] = G_01_Akhmetov;
	StringGridDimitrov -> Cells[1][3] = G_03_Gorbunov;
	StringGridDimitrov -> Cells[1][5] = G_05_Zabelov;
	StringGridDimitrov -> Cells[1][12] = G_12_Sobolev;
	StringGridDimitrov -> Cells[1][13] = G_13_Tupika;
	StringGridDimitrov -> Cells[1][15] = G_15_Shanin;
	StringGridDimitrov -> Cells[1][16] = G_16_Sherstuk;
}
//---------------------------------------------------------------------------
