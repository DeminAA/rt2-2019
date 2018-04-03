//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "BorodosForma.h"
#include "Borodos.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBorodin *Borodin;
//---------------------------------------------------------------------------
__fastcall TBorodin::TBorodin(TComponent* Owner)
	: TForm(Owner)
{
for(int i=0; i < 17; i++){
StringGrid1->Cells[0][i]= i+1;
}
StringGrid1->Cells[1][1]= G_02_Borodin;
}


//---------------------------------------------------------------------------
void __fastcall TBorodin::Button1Click(TObject *Sender)
{
BorodosF->Show();
}

