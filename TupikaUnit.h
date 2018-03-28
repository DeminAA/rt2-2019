//---------------------------------------------------------------------------

#ifndef TupikaUnitH
#define TupikaUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TTupikaforma : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGrid1;
	TButton *ShowText;
	void __fastcall ShowTextClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TTupikaforma(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTupikaforma *Tupikaforma;
extern char *G_13_Tupika="TuNika";
//---------------------------------------------------------------------------
#endif
