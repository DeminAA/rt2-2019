//---------------------------------------------------------------------------

#ifndef RKorobkov1H
#define RKorobkov1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TKorobkov : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TEdit *Edit1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TKorobkov(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TKorobkov *Korobkov;
//---------------------------------------------------------------------------
#endif
