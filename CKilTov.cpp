//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "CKilTov.h"
#include "CAvtor.h"
#include "CSozSt.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "Uni"
#pragma link "MemDS"
#pragma resource "*.fmx"
TKilTov *KilTov;
extern int i;
extern int o;
String j;
String one;
String id;
int z;
String zina;

//---------------------------------------------------------------------------
__fastcall TKilTov::TKilTov(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TKilTov::Button1Click(TObject *Sender)
{
SozSt->UVuvod->Active=true;
int idN;
String Nt;
String kilkist;
String zin;
idN=SozSt->Ntab->ItemIndex;
Nt=IntToStr(idN+1);
if(Nt==1)
{SozSt->UVuvod->SQL->Text=("Select tname, kilkist, onesht, zina From haw.tab1;");}
if(Nt==2)
{SozSt->UVuvod->SQL->Text=("Select tname, kilkist, onesht, zina From haw.tab2;");}
if(Nt==3)
{SozSt->UVuvod->SQL->Text=("Select tname, kilkist, onesht, zina From haw.tab3;");}
if(Nt==4)
{SozSt->UVuvod->SQL->Text=("Select tname, kilkist, onesht, zina From haw.tab4;");}
if(Nt==5)
{SozSt->UVuvod->SQL->Text=("Select tname, kilkist, onesht, zina From haw.tab5;");}
if(Nt==6)
{SozSt->UVuvod->SQL->Text=("Select tname, kilkist, onesht, zina From haw.tab6;");}
SozSt->UVuvod->Active=true;
j=IntToStr(i-1);
if(j==1)
{
	if(Nt==1)
	{SDelete->SQL->Text=("UPDATE tab1 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL WHERE idtab>1;");
	 SDelete->Execute(); }
	if(Nt==2)
	{SDelete->SQL->Text=("UPDATE tab2 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL WHERE idtab>1;");
	 SDelete->Execute(); }
	if(Nt==3)
	{SDelete->SQL->Text=("UPDATE tab3 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL WHERE idtab>1;");
	 SDelete->Execute(); }
	if(Nt==4)
	{SDelete->SQL->Text=("UPDATE tab4 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL WHERE idtab>1;");
	 SDelete->Execute(); }
	if(Nt==5)
	{SDelete->SQL->Text=("UPDATE tab5 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL WHERE idtab>1;");
	 SDelete->Execute(); }
	if(Nt==6)
	{SDelete->SQL->Text=("UPDATE tab6 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL WHERE idtab>1;");
	 SDelete->Execute(); }

}

int idkil;
String kilt;
idkil=KilTovariv->ItemIndex;
kilt=IntToStr(idkil+1);
if(Nt==1)
{kilkist=("UPDATE tab1 SET kilkist="+kilt+" WHERE idtab="+j+";");}
if(Nt==2)
{kilkist=("UPDATE tab2 SET kilkist="+kilt+" WHERE idtab="+j+";");}
if(Nt==3)
{kilkist=("UPDATE tab3 SET kilkist="+kilt+" WHERE idtab="+j+";");}
if(Nt==4)
{kilkist=("UPDATE tab4 SET kilkist="+kilt+" WHERE idtab="+j+";");}
if(Nt==5)
{kilkist=("UPDATE tab5 SET kilkist="+kilt+" WHERE idtab="+j+";");}
if(Nt==6)
{kilkist=("UPDATE tab6 SET kilkist="+kilt+" WHERE idtab="+j+";");}
z=o*(idkil+1);
zina=z;
if(Nt==1)
{zin=("UPDATE tab1 SET zina="+zina+" WHERE idtab="+j+";");}
if(Nt==2)
{zin=("UPDATE tab2 SET zina="+zina+" WHERE idtab="+j+";");}
if(Nt==3)
{zin=("UPDATE tab3 SET zina="+zina+" WHERE idtab="+j+";");}
if(Nt==4)
{zin=("UPDATE tab4 SET zina="+zina+" WHERE idtab="+j+";");}
if(Nt==5)
{zin=("UPDATE tab5 SET zina="+zina+" WHERE idtab="+j+";");}
if(Nt==6)
{zin=("UPDATE tab6 SET zina="+zina+" WHERE idtab="+j+";");}
SZapKil->SQL->Text=kilkist+zin;
SZapKil->Execute();
SozSt->UVuvod->Active=false;
SozSt->UVuvod->Active=true;
SozSt->UVuvod->Refresh();
SozSt->Vuvod->Columns[0]->Header=(L"�����");
SozSt->Vuvod->Columns[1]->Header=(L"ʳ������");
SozSt->Vuvod->Columns[2]->Header=(L"�� �������");
SozSt->Vuvod->Columns[3]->Header=(L"ֳ��");
SozSt->Vuvod->Columns[0]->Width=100;
SozSt->Vuvod->Columns[1]->Width=70;
SozSt->Vuvod->Columns[2]->Width=100;
SozSt->Vuvod->Columns[3]->Width=40;
KilTov->Close();
}
//---------------------------------------------------------------------------

