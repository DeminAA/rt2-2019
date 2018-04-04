//---------------------------------------------------------------------------

#ifndef UkolovH
#define UkolovH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TUkolov_form : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGrid1;
	TButton *Button1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TUkolov_form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TUkolov_form *Ukolov_form;
extern char *G_14_Ukolov="UVN";
//---------------------------------------------------------------------------
#endif
