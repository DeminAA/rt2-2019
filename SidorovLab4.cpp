//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SidorovLab4.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSIDFORM *SIDFORM;
//---------------------------------------------------------------------------
__fastcall TSIDFORM::TSIDFORM(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSIDFORM::Button1Click(TObject *Sender)
{
StringGrid1 ->Cells[0][0]="Nomer po jurnalu";
StringGrid1 ->Cells[1][0]="Ychenik";
for (int i=1; i < 18; i++) {
StringGrid1 ->Cells[0][i]= i;
}
StringGrid1 ->Cells[1][11]=G_11_Sidorov;
}
//---------------------------------------------------------------------------
