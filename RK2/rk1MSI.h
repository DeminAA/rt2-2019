//---------------------------------------------------------------------------

#ifndef rk1MSIH
#define rk1MSIH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TSidorov : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TEdit *Edit1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSidorov(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSidorov *Sidorov;
//---------------------------------------------------------------------------
#endif
