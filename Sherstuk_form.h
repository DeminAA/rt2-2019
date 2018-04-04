//---------------------------------------------------------------------------

#ifndef Sherstuk_formH
#define Sherstuk_formH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TShersteforma : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGrid1;
	TButton *Button1;
	TLabel *Label1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TShersteforma(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TShersteforma *Shersteforma;
extern char *G_16_Sherstuk="Artyomchik";
//---------------------------------------------------------------------------
#endif
