//---------------------------------------------------------------------------

#ifndef enterH
#define enterH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TBorodin : public TForm
{
__published:	// IDE-managed Components
	TEdit *login;
	TEdit *pass;
	TButton *Button1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *correct;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TBorodin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBorodin *Borodin;
//---------------------------------------------------------------------------
#endif
