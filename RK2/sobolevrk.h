//---------------------------------------------------------------------------

#ifndef sobolevrkH
#define sobolevrkH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TSobolevForma : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TBitBtn *BitBtn1;
	TBitBtn *BitBtn2;
	TBitBtn *BitBtn3;
	void __fastcall BitBtn2Click(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall BitBtn3Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TSobolevForma(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSobolevForma *SobolevForma;
//---------------------------------------------------------------------------
#endif
