//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//подключение файлов других студентов
#include "Ukolov.h"
#include "SOboLEV.h"
#include "AhmeTau.h"
#include "GorbunoV.h"
#include "TupikaUnit.h"
#include "Sherstuk_form.h"
#include "lab4.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TUkolov_form *Ukolov_form;
//---------------------------------------------------------------------------
__fastcall TUkolov_form::TUkolov_form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TUkolov_form::FormCreate(TObject *Sender)
{   //нумерация таблицы
	StringGrid1->Cells[0][0]="Number";
	StringGrid1->Cells[1][0]="Name";
		for (int i = 1; i < 18; i++ ) {
			StringGrid1->Cells[0][i]= i ;
		}
}
//---------------------------------------------------------------------------
void __fastcall TUkolov_form::Button1Click(TObject *Sender)
{   //добавление глобальных переменных в проект(таблицу)
	StringGrid1 -> Cells[1][1] = G_01_Akhmetov;
	StringGrid1 -> Cells[1][2] = "Undefinded";
	StringGrid1 -> Cells[1][3] = G_03_Gorbunov;
	StringGrid1 -> Cells[1][4] = "Undefinded";
	StringGrid1 -> Cells[1][5] = G_05_Zabelov;
	StringGrid1 -> Cells[1][6] = "Undefinded";
	StringGrid1 -> Cells[1][7] = "Undefinded";
	StringGrid1 -> Cells[1][8] = "Undefinded";
	StringGrid1 -> Cells[1][9] =  "Undefinded";
	StringGrid1 -> Cells[1][10] = "Undefinded";
	StringGrid1 -> Cells[1][11] = "Undefinded";
	StringGrid1 -> Cells[1][12] = G_12_Sobolev;
	StringGrid1 -> Cells[1][13] = G_13_Tupika;
	StringGrid1 -> Cells[1][14] = G_14_Ukolov;
	StringGrid1 -> Cells[1][15] = G_15_Shanin;
	StringGrid1 -> Cells[1][16] = G_16_Sherstuk;
	StringGrid1 -> Cells[1][16] = "AKA dem4ik";

}
//---------------------------------------------------------------------------
