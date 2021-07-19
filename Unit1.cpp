//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	String num = Edit1->Text;
	String nums = Edit2->Text;

	double num1 = num.ToDouble();
	double num2 = nums.ToDouble();
	double result = num1 + num2;
	Edit3->Text = result;


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	String num = Edit1->Text;
	String nums = Edit2->Text;

	double num1 = num.ToDouble();
	double num2 = nums.ToDouble();
	double result = num1 - num2;
	Edit3->Text = result;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	String num = Edit1->Text;
	String nums = Edit2->Text;

	double num1 = num.ToDouble();
	double num2 = nums.ToDouble();
	double result = num1 * num2;
	Edit3->Text = result;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	String num = Edit1->Text;
	String nums = Edit2->Text;

	double num1 = num.ToDouble();
	double num2 = nums.ToDouble();
	double result = num1/num2;
	Edit3->Text = result;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
  Edit1->Text="";
  Edit2->Text="";
  Edit3->Text="";
}
//---------------------------------------------------------------------------
