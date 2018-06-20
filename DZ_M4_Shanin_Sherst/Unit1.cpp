//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

struct meta_data {
	int studcount;
	int module_count;

	char **student_id;
	char **discipline_id;
	char **module_id;

};

//struct dsheet{
//	int studcount;
//	int module_count;
//	char ***M_Point;
//};

struct dsheet{
	int studcount;
	int module_count;
	char **FIO_group; //список группы
	int       RK_count; //кол РК (мероприятий)
	char    ***RK_point; //баллы за РК
	int      Sem_count;
	char   ***Sem_point;
	int      LR_count;
	char   ***LR_point;
	int      Lec_count;
	char   ***Lec_point;
	int    *Exz_point;
};



meta_data data1;
dsheet data2;

//data1.studcount = 0;
//data1.module_count = 0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
/*
Akhmetov
<input type="text"
class="pr_text module-write no-display no-print"
name="val[c3eb33d2-1cb0-11e5-baff-005056962143][a233aa99-a249-508d-9629-b3d9d7f0ca02][ћ][8022a62c-fff2-11e6-9d2f-005056960017][10]"
title="2018-04-20 20:06:13"
data-xord="8022a62c-fff2-11e6-9d2f-005056960017"
value="30"
hkid="td.headcol_body > input.pr_text">

<input type="text"
class="pr_text module-write no-display no-print"
name="val[c3eb33d2-1cb0-11e5-baff-005056962143][a233aa99-a249-508d-9629-b3d9d7f0ca02][ћ][8022a7e4-fff2-11e6-9925-005056960017][10]"
title="2018-05-16 14:12:33"
data-xord="8022a7e4-fff2-11e6-9925-005056960017"
value="10"
hkid="td.headcol_body > input.pr_text">


Borodin bez 2 modulya
<input type="text"
class="pr_text module-write no-display no-print"
name="val[d7c8040a-de52-11e2-983c-005056962143][a233aa99-a249-508d-9629-b3d9d7f0ca02][ћ][8022a62c-fff2-11e6-9d2f-005056960017][10]"
title="2018-04-20 20:06:13"
data-xord="8022a62c-fff2-11e6-9d2f-005056960017"
value="30"
hkid="td.headcol_body > input.pr_text">

<input type="text"
class="pr_text module-write no-display no-print"
name="val[d7c8040a-de52-11e2-983c-005056962143][a233aa99-a249-508d-9629-b3d9d7f0ca02][ћ][8022a7e4-fff2-11e6-9925-005056960017][10]"
title=""
data-xord="8022a7e4-fff2-11e6-9925-005056960017"
hkid="td.headcol_body > input.pr_text">

Struktura:
1: Student-id
2: Discipline-id
3: M
4: Module-id
5: 10



  */
//     data


void __fastcall TForm1::Button1Click(TObject *Sender)
{
TMemoryStream *mStream=new TMemoryStream;
AnsiString euhtml;
  TStringList *SL= new TStringList;
  SL->Add("login=player2012");   // ? nick=player2012
  SL->Add("password=test");     // & password=test

 htmltext->Text=IdHTTP->Get(url->Text);
 euhtml=htmltext->Text;

   int strpos = 0;

   do {
	 strpos = euhtml.Pos("class=\"pr_text module-write no-display no-print\"");     //нашли позицию студента
	 if (strpos>0){
	  data1.studcount++;
	  euhtml=euhtml.SubString(strpos+6,euhtml.Length()-(strpos+6));
	 }
   } while(strpos>0);


   euhtml=htmltext->Text;
   strpos = 0;
   do {
	 strpos = euhtml.Pos("class=\"headcol-discipline\"");     //нашли позицию студента
	 if (strpos>0){
	  data1.module_count++;
	  euhtml=euhtml.SubString(strpos+6,euhtml.Length()-(strpos+6));
	 }
   } while(strpos>0);

   data1.student_id = (char**)malloc(data1.studcount*sizeof(char*));
   data1.discipline_id = (char**)malloc(sizeof(char*));
   data1.module_id = (char**)malloc(data1.module_count*sizeof(char*));

   AnsiString str;
   euhtml=htmltext->Text;              //ID студентов
   int i_student=0;
   do {
	 str = "";
	 strpos = euhtml.Pos("class=\"pr_text module-write no-display no-print\"");     //нашли позицию студента
	 if (strpos>0){
	  euhtml=euhtml.SubString(strpos+6,euhtml.Length()-(strpos+6));
	 }
	 strpos = euhtml.Pos("name=\"val[");     //нашли позицию студента
	 if (strpos>0){
	  euhtml=euhtml.SubString(strpos+10,euhtml.Length()-(strpos+1));
	 }

	 str = euhtml.SubString(0,euhtml.Pos("]")-1);
	 data1.student_id[i_student] = (char*) malloc(str.Length()*sizeof(char)+1);
	 strcpy(data1.student_id[i_student],str.c_str());

	 i_student++ ;
   } while(i_student<data1.studcount);

   data1.studcount = data1.studcount/data1.module_count; //kostil
   for (int i = 0; i < data1.studcount; i++) {
	   strcpy(data1.student_id[i],data1.student_id[i*data1.module_count+1]);
   }
   for (int i = data1.studcount; i < data1.studcount*data1.module_count; i++) {
	   data1.student_id[i] = "";
   }

   euhtml=htmltext->Text;          //получаем ID дисциплины
   str = "";
   strpos = euhtml.Pos("class=\"pr_text module-write no-display no-print\"");     //нашли позицию студента
   strpos = euhtml.Pos("name=\"val[");     //нашли позицию студента
   if (strpos>0){
		euhtml=euhtml.SubString(strpos+48,euhtml.Length()-(strpos+1));
	   }

   str = euhtml.SubString(0,euhtml.Pos("]")-1);

   data1.discipline_id[0] = (char*) malloc(str.Length()*sizeof(char)+1);
   strcpy(data1.discipline_id[0],str.c_str());

   int i_module=0;
   euhtml=htmltext->Text;

   do {
	   str = "";
	   strpos = euhtml.Pos("class=\"pr_text module-write no-display no-print\"");     //нашли позицию студента
	   strpos = euhtml.Pos("name=\"val[");     //нашли позицию студента
	   if (strpos>0){
			euhtml=euhtml.SubString(strpos+48+38+3,euhtml.Length()-(strpos+1));
	   }

	   str = euhtml.SubString(0,euhtml.Pos("]")-1);

	   data1.module_id[i_module] = (char*) malloc(str.Length()*sizeof(char)+1);
	   strcpy(data1.module_id[i_module],str.c_str());

	   i_module++;
   } while (i_module<data1.module_count);

	//Edit1->Text = str;

	StringGrid1 -> Cells[0][0] = "#";
	StringGrid1 -> Cells[1][0] = "Stud ID";
	StringGrid1 -> Cells[2][0] = "Modules ID";
	StringGrid1 -> Cells[3][0] = "Discipline ID";
	StringGrid1->RowCount = data1.studcount+1;
	StringGrid1->ColWidths[0]=35;
	StringGrid1->ColWidths[1]=256;
	StringGrid1->ColWidths[2]=256;
	StringGrid1->ColWidths[3]=256;

	StringGrid1->Width = 256*3+35+5;

		for (int i = 1; i <= data1.studcount; i++) {
			StringGrid1 -> Cells[0][i] = i;
		}
		for (int i = 1; i <= data1.studcount; i++) {
			StringGrid1 -> Cells[1][i] = data1.student_id[i-1];
		}
		for (int i = 1; i <= data1.module_count; i++) {
			StringGrid1 -> Cells[2][i] = data1.module_id[i-1];
		}
		StringGrid1 -> Cells[3][1] = data1.discipline_id[0];

	//Блок заполнения временных данных таблицы
	data2.studcount = data1.studcount;
	data2.module_count = data1.module_count;

	data2.Sem_point =(char ***) malloc(data2.module_count*sizeof(char***));

	for (int i = 0; i <= data2.module_count; i++) {
			data2.Sem_point[i] = (char**) malloc(data2.studcount*sizeof(char**));
			for (int j = 0; j <= data2.studcount; j++) {
				data2.Sem_point[i][j] = (char*) malloc(3*sizeof(char)+1);
			}
		}



	i_student=0;
   euhtml=htmltext->Text;



   do {                                                        //Блок для заполнения баллов за 1 модуль
	 str = "";

	 strpos = euhtml.Pos("tabindex=\"1\" data-disabled=\"");     //нашли позицию студента
	 if (strpos>0){
	  euhtml=euhtml.SubString(strpos+28,euhtml.Length()-(strpos+28));
	 }
	 if (euhtml.Pos("d")<2) {
		//StringGrid1 -> Cells[2][i_student+1] = "";
		i_student++ ;
		continue;
	 }
	 else {
		euhtml=euhtml.SubString(98,euhtml.Length()-(98));
	 }
	 strpos = euhtml.Pos(">");     //нашли позицию студента
	 if (strpos>0){
		 euhtml=euhtml.SubString(strpos+1,euhtml.Length()-(strpos+1));
	 }
	 str = euhtml.SubString(0,euhtml.Pos("<")-1);

	 strcpy(data2.Sem_point[0][i_student],str.c_str());


	 str = "";
	 strpos = euhtml.Pos("td xmlns:color=\"http://example.net/xsl\"");
     if (strpos>0){
	  euhtml=euhtml.SubString(strpos+72,euhtml.Length()-(strpos+72));
	 }
     strpos = euhtml.Pos(">");     //нашли позицию студента
	 if (strpos>0){
		 euhtml=euhtml.SubString(strpos+1,euhtml.Length()-(strpos+1));
	 }
	 str = euhtml.SubString(0,euhtml.Pos("<")-1);
	 //StringGrid1 -> Cells[3][i_student+1] = str;
	 strcpy(data2.Sem_point[1][i_student],str.c_str());


	 i_student++ ;
   } while(i_student<data2.studcount);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::GetClick(TObject *Sender)
{
{
//	IdHTTP->CookieManager= IdCookieManager1;
//	IdHTTP->AllowCookies= true;
//	IdHTTP->HandleRedirects=true;
	AnsiString data;
	AnsiString url=Edit2->Text;
	data = IdHTTP->Get(url);
	htmltext->Text = data;
}

}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button3Click(TObject *Sender)
{
//	char *post_data = (char*)malloc(studcount*module_count*(5*2+3+3+4+student_id[0].Length()+module_id[0].Length()+discipline_id[0].Length())*sizeof(char*));
	AnsiString post_data;
	for (int i = 0; i < data1.studcount*data1.module_count; i++) {
		for (int m = 0; m < data1.module_count; m++) {
			post_data = post_data + "val[" + data1.student_id[i] + "][" + data1.discipline_id[0] + "][M][" + data1.module_id[m]+"][10]: " + data2.Sem_point[m][i%16]+" ";
		}
	}
	htmltext->Text = post_data;

}
//---------------------------------------------------------------------------


