//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "kalkul.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TLatishev *Latishev;
//---------------------------------------------------------------------------
int a,b,c;
char d;
bool e=false;
__fastcall TLatishev::TLatishev(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TLatishev::BitBtn1Click(TObject *Sender)
{
if (e==false)
{Edit1->Text=Edit1->Text+((TButton*)Sender)->Caption;
 a=StrToInt(Edit1->Text);}
else {Edit2->Text=Edit2->Text+((TButton*)Sender)->Caption;
b=StrToInt(Edit2->Text);}
}
//---------------------------------------------------------------------------
void __fastcall TLatishev::BitBtn15Click(TObject *Sender)
{
if (Edit1->Text!="") {


Label1->Caption=((TButton*)Sender)->Caption;
  e=true;
}
}
//---------------------------------------------------------------------------

void __fastcall TLatishev::BitBtn13Click(TObject *Sender)
{
if (((Edit1->Text!="") && (Edit2->Text!=""))){
if(Label1->Caption=="+") Edit3->Text=a+b;
if(Label1->Caption=="-") Edit3->Text=a-b;
if(Label1->Caption=="*") Edit3->Text=a*b;
if(Label1->Caption=="/") Edit3->Text=a/b;


}
}
//---------------------------------------------------------------------------
void __fastcall TLatishev::BitBtn14Click(TObject *Sender)
{
a=0;
b=0;
c=0;
e=false;
Edit1->Text="";
Edit2->Text="";
Edit3->Text="";
Label1->Caption="";
}
//---------------------------------------------------------------------------
