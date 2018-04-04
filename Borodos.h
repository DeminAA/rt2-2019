//---------------------------------------------------------------------------

#ifndef BorodosH
#define BorodosH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TBorodin : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGrid1;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TBorodin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBorodin *Borodin;
extern char *G_02_Borodin="Бородос";

//---------------------------------------------------------------------------
#endif
