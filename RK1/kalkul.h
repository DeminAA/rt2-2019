//---------------------------------------------------------------------------

#ifndef kalkulH
#define kalkulH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TLatishev : public TForm
{
__published:	// IDE-managed Components
	TBitBtn *BitBtn1;
	TBitBtn *BitBtn2;
	TBitBtn *BitBtn3;
	TBitBtn *BitBtn4;
	TBitBtn *BitBtn5;
	TBitBtn *BitBtn6;
	TBitBtn *BitBtn7;
	TBitBtn *BitBtn8;
	TBitBtn *BitBtn9;
	TBitBtn *BitBtn10;
	TBitBtn *BitBtn11;
	TBitBtn *BitBtn12;
	TBitBtn *BitBtn13;
	TBitBtn *BitBtn14;
	TBitBtn *BitBtn15;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TLabel *Label1;
	TBitBtn *BitBtn16;
	TLabel *Label2;
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall BitBtn15Click(TObject *Sender);
	void __fastcall BitBtn13Click(TObject *Sender);
	void __fastcall BitBtn14Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLatishev(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLatishev *Latishev;
//---------------------------------------------------------------------------
#endif
