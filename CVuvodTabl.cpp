//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "CAvtor.h"
#include "CVuvodTabl.h"
#include "CTab.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "Uni"
#pragma resource "*.fmx"
TVuvodTabl *VuvodTabl;
extern int t;
String Nt;
String Km;
String Id;
String St;
//---------------------------------------------------------------------------
__fastcall TVuvodTabl::TVuvodTabl(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TVuvodTabl::Timer1Timer(TObject *Sender)
{
UVuvod->Active=true;
UVuvod->Execute();
Vuvod->Columns[0]->Header=(L"�����");
Vuvod->Columns[1]->Header=(L"ʳ������");
Vuvod->Columns[2]->Header=(L"�� �������");
Vuvod->Columns[3]->Header=(L"ֳ��");
Vuvod->Columns[0]->Width=100;
Vuvod->Columns[1]->Width=70;
Vuvod->Columns[2]->Width=100;
Vuvod->Columns[3]->Width=40;
St=t;
UKilkist->Open();
UKilkist->First();
while (St!=Id)
{
	Nt=UKilkist->FieldByName("Ntable")->AsString;
	Km=UKilkist->FieldByName("kmisc")->AsString;
	Id=UKilkist->FieldByName("idtable")->AsString;
	UKilkist->Next();
}
ENt->Text=Nt;
EKm->Text=Km;

}
//---------------------------------------------------------------------------
void __fastcall TVuvodTabl::IBackClick(TObject *Sender)
{
Timer1->Enabled=false;
Tab->Visible=true;
VuvodTabl->Close();
}
//---------------------------------------------------------------------------

