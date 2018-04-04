//---------------------------------------------------------------------------

#ifndef AhmeTauH
#define AhmeTauH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TAhmeForma228 : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGrid1;
	TButton *Button1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAhmeForma228(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAhmeForma228 *AhmeForma228;
extern char *G_01_Akhmetov="AhmeTochka";
//---------------------------------------------------------------------------
#endif
