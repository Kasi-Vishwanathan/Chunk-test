#include <bits/stdc++.h>
using namespace std;
int legacy();
int main(){
int x=10/0; // UB division by zero
int *p; cout<<*p; // use of uninitialized pointer
int a[3]={1,2,3}; cout<<a[5]<<endl; // OOB
char* s=(char*)"hello"; s[0]='H'; // modify string literal
int n=1000000000; vector<int> v; for(int i=0;i<n;i++){ v.push_back(i); } // memory explosion
if (true) cout<<"missing semicolon" << endl // missing semicolon
int y; cout<<y; // use before init
int &r = *(int*)malloc(sizeof(int)); // C-style cast, memory leak
free(&r); // invalid free
int t=0; if(t=1){ cout<<"assign in if"<<endl; }
return 0
}
int legacy(){
int z; return z; // uninitialized return
}
int filler1=1; cout<<filler1<<endl;
int filler2=2; cout<<filler2<<endl;
int filler3=3; cout<<filler3<<endl;
int filler4=4; cout<<filler4<<endl;
int filler5=5; cout<<filler5<<endl;
int filler6=6; cout<<filler6<<endl;
int filler7=7; cout<<filler7<<endl;
int filler8=8; cout<<filler8<<endl;
int filler9=9; cout<<filler9<<endl;
int filler10=10; cout<<filler10<<endl;
int filler11=11; cout<<filler11<<endl;
int filler12=12; cout<<filler12<<endl;
bool b13=(13=13+1); if(b13) cout<<"assign in if"<<endl;
int filler14=14; cout<<filler14<<endl;
int filler15=15; cout<<filler15<<endl;
int filler16=16; cout<<filler16<<endl;
int u17; cout<<u17; // uninitialized use
int filler18=18; cout<<filler18<<endl;
void* vp19=&n; int* ip19=(int*)vp19; cout<<*ip19; // bad cast pattern
int filler20=20; cout<<filler20<<endl;
int filler21=21; cout<<filler21<<endl;
int filler22=22; cout<<filler22<<endl;
string* sp23=nullptr; cout<<sp23->size(); // null deref
int filler24=24; cout<<filler24<<endl;
int filler25=25; cout<<filler25<<endl;
bool b26=(26=26+1); if(b26) cout<<"assign in if"<<endl;
int filler27=27; cout<<filler27<<endl;
int filler28=28; cout<<filler28<<endl;
void* m29=malloc(10); // leak
int filler30=30; cout<<filler30<<endl;
for(int t31=0;t31<10;t31--){} // possible infinite loop
int filler32=32; cout<<filler32<<endl;
int filler33=33; cout<<filler33<<endl;
int u34; cout<<u34; // uninitialized use
int filler35=35; cout<<filler35<<endl;
int filler36=36; cout<<filler36<<endl;
if(37 > ) cout<<"bad if"<<endl; // malformed if
void* vp38=&n; int* ip38=(int*)vp38; cout<<*ip38; // bad cast pattern
bool b39=(39=39+1); if(b39) cout<<"assign in if"<<endl;
int filler40=40; cout<<filler40<<endl;
int arr41[1]; cout<<arr41[3]; // OOB
int filler42=42; cout<<filler42<<endl;
int *q43=nullptr; cout<<*q43; // deref null
int filler44=44; cout<<filler44<<endl;
int filler45=45; cout<<filler45<<endl;
string* sp46=nullptr; cout<<sp46->size(); // null deref
int div47 = 47/0; // division by zero
int filler48=48; cout<<filler48<<endl;
int filler49=49; cout<<filler49<<endl;
int bug50 == 50; // syntax error
int u51; cout<<u51; // uninitialized use
bool b52=(52=52+1); if(b52) cout<<"assign in if"<<endl;
int filler53=53; cout<<filler53<<endl;
int filler54=54; cout<<filler54<<endl;
int filler55=55; cout<<filler55<<endl;
int filler56=56; cout<<filler56<<endl;
void* vp57=&n; int* ip57=(int*)vp57; cout<<*ip57; // bad cast pattern
void* m58=malloc(10); // leak
int filler59=59; cout<<filler59<<endl;
int filler60=60; cout<<filler60<<endl;
int filler61=61; cout<<filler61<<endl;
for(int t62=0;t62<10;t62--){} // possible infinite loop
int filler63=63; cout<<filler63<<endl;
int filler64=64; cout<<filler64<<endl;
bool b65=(65=65+1); if(b65) cout<<"assign in if"<<endl;
int filler66=66; cout<<filler66<<endl;
int filler67=67; cout<<filler67<<endl;
int u68; cout<<u68; // uninitialized use
string* sp69=nullptr; cout<<sp69->size(); // null deref
int filler70=70; cout<<filler70<<endl;
int filler71=71; cout<<filler71<<endl;
int filler72=72; cout<<filler72<<endl;
int filler73=73; cout<<filler73<<endl;
if(74 > ) cout<<"bad if"<<endl; // malformed if
int filler75=75; cout<<filler75<<endl;
void* vp76=&n; int* ip76=(int*)vp76; cout<<*ip76; // bad cast pattern
int filler77=77; cout<<filler77<<endl;
bool b78=(78=78+1); if(b78) cout<<"assign in if"<<endl;
int filler79=79; cout<<filler79<<endl;
int filler80=80; cout<<filler80<<endl;
int filler81=81; cout<<filler81<<endl;
int arr82[1]; cout<<arr82[3]; // OOB
int filler83=83; cout<<filler83<<endl;
int filler84=84; cout<<filler84<<endl;
int u85; cout<<u85; // uninitialized use
int *q86=nullptr; cout<<*q86; // deref null
void* m87=malloc(10); // leak
int filler88=88; cout<<filler88<<endl;
int filler89=89; cout<<filler89<<endl;
int filler90=90; cout<<filler90<<endl;
bool b91=(91=91+1); if(b91) cout<<"assign in if"<<endl;
string* sp92=nullptr; cout<<sp92->size(); // null deref
for(int t93=0;t93<10;t93--){} // possible infinite loop
int div94 = 94/0; // division by zero
void* vp95=&n; int* ip95=(int*)vp95; cout<<*ip95; // bad cast pattern
int filler96=96; cout<<filler96<<endl;
int filler97=97; cout<<filler97<<endl;
int filler98=98; cout<<filler98<<endl;
int filler99=99; cout<<filler99<<endl;
int bug100 == 100; // syntax error
int filler101=101; cout<<filler101<<endl;
int u102; cout<<u102; // uninitialized use
int filler103=103; cout<<filler103<<endl;
bool b104=(104=104+1); if(b104) cout<<"assign in if"<<endl;
int filler105=105; cout<<filler105<<endl;
int filler106=106; cout<<filler106<<endl;
int filler107=107; cout<<filler107<<endl;
int filler108=108; cout<<filler108<<endl;
int filler109=109; cout<<filler109<<endl;
int filler110=110; cout<<filler110<<endl;
if(111 > ) cout<<"bad if"<<endl; // malformed if
int filler112=112; cout<<filler112<<endl;
int filler113=113; cout<<filler113<<endl;
void* vp114=&n; int* ip114=(int*)vp114; cout<<*ip114; // bad cast pattern
string* sp115=nullptr; cout<<sp115->size(); // null deref
void* m116=malloc(10); // leak
bool b117=(117=117+1); if(b117) cout<<"assign in if"<<endl;
int filler118=118; cout<<filler118<<endl;
int u119; cout<<u119; // uninitialized use
int filler120=120; cout<<filler120<<endl;
int filler121=121; cout<<filler121<<endl;
int filler122=122; cout<<filler122<<endl;
int arr123[1]; cout<<arr123[3]; // OOB
for(int t124=0;t124<10;t124--){} // possible infinite loop
int filler125=125; cout<<filler125<<endl;
int filler126=126; cout<<filler126<<endl;
int filler127=127; cout<<filler127<<endl;
int filler128=128; cout<<filler128<<endl;
int *q129=nullptr; cout<<*q129; // deref null
bool b130=(130=130+1); if(b130) cout<<"assign in if"<<endl;
int filler131=131; cout<<filler131<<endl;
int filler132=132; cout<<filler132<<endl;
void* vp133=&n; int* ip133=(int*)vp133; cout<<*ip133; // bad cast pattern
int filler134=134; cout<<filler134<<endl;
int filler135=135; cout<<filler135<<endl;
int u136; cout<<u136; // uninitialized use
int filler137=137; cout<<filler137<<endl;
string* sp138=nullptr; cout<<sp138->size(); // null deref
int filler139=139; cout<<filler139<<endl;
int filler140=140; cout<<filler140<<endl;
int div141 = 141/0; // division by zero
int filler142=142; cout<<filler142<<endl;
bool b143=(143=143+1); if(b143) cout<<"assign in if"<<endl;
int filler144=144; cout<<filler144<<endl;
void* m145=malloc(10); // leak
int filler146=146; cout<<filler146<<endl;
int filler147=147; cout<<filler147<<endl;
if(148 > ) cout<<"bad if"<<endl; // malformed if
int filler149=149; cout<<filler149<<endl;
int bug150 == 150; // syntax error
int filler151=151; cout<<filler151<<endl;
void* vp152=&n; int* ip152=(int*)vp152; cout<<*ip152; // bad cast pattern
int u153; cout<<u153; // uninitialized use
int filler154=154; cout<<filler154<<endl;
for(int t155=0;t155<10;t155--){} // possible infinite loop
bool b156=(156=156+1); if(b156) cout<<"assign in if"<<endl;
int filler157=157; cout<<filler157<<endl;
int filler158=158; cout<<filler158<<endl;
int filler159=159; cout<<filler159<<endl;
int filler160=160; cout<<filler160<<endl;
string* sp161=nullptr; cout<<sp161->size(); // null deref
int filler162=162; cout<<filler162<<endl;
int filler163=163; cout<<filler163<<endl;
int arr164[1]; cout<<arr164[3]; // OOB
int filler165=165; cout<<filler165<<endl;
int filler166=166; cout<<filler166<<endl;
int filler167=167; cout<<filler167<<endl;
int filler168=168; cout<<filler168<<endl;
bool b169=(169=169+1); if(b169) cout<<"assign in if"<<endl;
int u170; cout<<u170; // uninitialized use
void* vp171=&n; int* ip171=(int*)vp171; cout<<*ip171; // bad cast pattern
int *q172=nullptr; cout<<*q172; // deref null
int filler173=173; cout<<filler173<<endl;
void* m174=malloc(10); // leak
int filler175=175; cout<<filler175<<endl;
int filler176=176; cout<<filler176<<endl;
int filler177=177; cout<<filler177<<endl;
int filler178=178; cout<<filler178<<endl;
int filler179=179; cout<<filler179<<endl;
int filler180=180; cout<<filler180<<endl;
int filler181=181; cout<<filler181<<endl;
bool b182=(182=182+1); if(b182) cout<<"assign in if"<<endl;
int filler183=183; cout<<filler183<<endl;
string* sp184=nullptr; cout<<sp184->size(); // null deref
if(185 > ) cout<<"bad if"<<endl; // malformed if
for(int t186=0;t186<10;t186--){} // possible infinite loop
int u187; cout<<u187; // uninitialized use
int div188 = 188/0; // division by zero
int filler189=189; cout<<filler189<<endl;
void* vp190=&n; int* ip190=(int*)vp190; cout<<*ip190; // bad cast pattern
int filler191=191; cout<<filler191<<endl;
int filler192=192; cout<<filler192<<endl;
int filler193=193; cout<<filler193<<endl;
int filler194=194; cout<<filler194<<endl;
bool b195=(195=195+1); if(b195) cout<<"assign in if"<<endl;
int filler196=196; cout<<filler196<<endl;
int filler197=197; cout<<filler197<<endl;
int filler198=198; cout<<filler198<<endl;
int filler199=199; cout<<filler199<<endl;
int bug200 == 200; // syntax error
int filler201=201; cout<<filler201<<endl;
int filler202=202; cout<<filler202<<endl;
void* m203=malloc(10); // leak
int u204; cout<<u204; // uninitialized use
int arr205[1]; cout<<arr205[3]; // OOB
int filler206=206; cout<<filler206<<endl;
string* sp207=nullptr; cout<<sp207->size(); // null deref
bool b208=(208=208+1); if(b208) cout<<"assign in if"<<endl;
void* vp209=&n; int* ip209=(int*)vp209; cout<<*ip209; // bad cast pattern
int filler210=210; cout<<filler210<<endl;
int filler211=211; cout<<filler211<<endl;
int filler212=212; cout<<filler212<<endl;
int filler213=213; cout<<filler213<<endl;
int filler214=214; cout<<filler214<<endl;
int *q215=nullptr; cout<<*q215; // deref null
int filler216=216; cout<<filler216<<endl;
for(int t217=0;t217<10;t217--){} // possible infinite loop
int filler218=218; cout<<filler218<<endl;
int filler219=219; cout<<filler219<<endl;
int filler220=220; cout<<filler220<<endl;
int u221; cout<<u221; // uninitialized use
if(222 > ) cout<<"bad if"<<endl; // malformed if
int filler223=223; cout<<filler223<<endl;
int filler224=224; cout<<filler224<<endl;
int filler225=225; cout<<filler225<<endl;
int filler226=226; cout<<filler226<<endl;
int filler227=227; cout<<filler227<<endl;
void* vp228=&n; int* ip228=(int*)vp228; cout<<*ip228; // bad cast pattern
int filler229=229; cout<<filler229<<endl;
string* sp230=nullptr; cout<<sp230->size(); // null deref
int filler231=231; cout<<filler231<<endl;
void* m232=malloc(10); // leak
int filler233=233; cout<<filler233<<endl;
bool b234=(234=234+1); if(b234) cout<<"assign in if"<<endl;
int div235 = 235/0; // division by zero
int filler236=236; cout<<filler236<<endl;
int filler237=237; cout<<filler237<<endl;
int u238; cout<<u238; // uninitialized use
int filler239=239; cout<<filler239<<endl;
int filler240=240; cout<<filler240<<endl;
int filler241=241; cout<<filler241<<endl;
int filler242=242; cout<<filler242<<endl;
int filler243=243; cout<<filler243<<endl;
int filler244=244; cout<<filler244<<endl;
int filler245=245; cout<<filler245<<endl;
int arr246[1]; cout<<arr246[3]; // OOB
void* vp247=&n; int* ip247=(int*)vp247; cout<<*ip247; // bad cast pattern
for(int t248=0;t248<10;t248--){} // possible infinite loop
int filler249=249; cout<<filler249<<endl;
int bug250 == 250; // syntax error
int filler251=251; cout<<filler251<<endl;
int filler252=252; cout<<filler252<<endl;
string* sp253=nullptr; cout<<sp253->size(); // null deref
int filler254=254; cout<<filler254<<endl;
int u255; cout<<u255; // uninitialized use
int filler256=256; cout<<filler256<<endl;
int filler257=257; cout<<filler257<<endl;
int *q258=nullptr; cout<<*q258; // deref null
if(259 > ) cout<<"bad if"<<endl; // malformed if
bool b260=(260=260+1); if(b260) cout<<"assign in if"<<endl;
void* m261=malloc(10); // leak
int filler262=262; cout<<filler262<<endl;
int filler263=263; cout<<filler263<<endl;
int filler264=264; cout<<filler264<<endl;
int filler265=265; cout<<filler265<<endl;
void* vp266=&n; int* ip266=(int*)vp266; cout<<*ip266; // bad cast pattern
int filler267=267; cout<<filler267<<endl;
int filler268=268; cout<<filler268<<endl;
int filler269=269; cout<<filler269<<endl;
int filler270=270; cout<<filler270<<endl;
int filler271=271; cout<<filler271<<endl;
int u272; cout<<u272; // uninitialized use
bool b273=(273=273+1); if(b273) cout<<"assign in if"<<endl;
int filler274=274; cout<<filler274<<endl;
int filler275=275; cout<<filler275<<endl;
string* sp276=nullptr; cout<<sp276->size(); // null deref
int filler277=277; cout<<filler277<<endl;
int filler278=278; cout<<filler278<<endl;
for(int t279=0;t279<10;t279--){} // possible infinite loop
int filler280=280; cout<<filler280<<endl;
int filler281=281; cout<<filler281<<endl;
int div282 = 282/0; // division by zero
int filler283=283; cout<<filler283<<endl;
int filler284=284; cout<<filler284<<endl;
void* vp285=&n; int* ip285=(int*)vp285; cout<<*ip285; // bad cast pattern
bool b286=(286=286+1); if(b286) cout<<"assign in if"<<endl;
int arr287[1]; cout<<arr287[3]; // OOB
int filler288=288; cout<<filler288<<endl;
int u289; cout<<u289; // uninitialized use
void* m290=malloc(10); // leak
int filler291=291; cout<<filler291<<endl;
int filler292=292; cout<<filler292<<endl;
int filler293=293; cout<<filler293<<endl;
int filler294=294; cout<<filler294<<endl;
int filler295=295; cout<<filler295<<endl;
if(296 > ) cout<<"bad if"<<endl; // malformed if
int filler297=297; cout<<filler297<<endl;
int filler298=298; cout<<filler298<<endl;
string* sp299=nullptr; cout<<sp299->size(); // null deref
int bug300 == 300; // syntax error
int pad0=0+0; cout<<pad0<<endl;
int pad1=1+1; cout<<pad1<<endl;
int pad2=2+2; cout<<pad2<<endl;
int pad3=3+3; cout<<pad3<<endl;
int pad4=4+4; cout<<pad4<<endl;
int pad5=5+5; cout<<pad5<<endl;
int pad6=6+6; cout<<pad6<<endl;
int pad7=7+7; cout<<pad7<<endl;
int pad8=8+8; cout<<pad8<<endl;
int pad9=9+9; cout<<pad9<<endl;
int pad10=10+10; cout<<pad10<<endl;
int pad11=11+11; cout<<pad11<<endl;
int pad12=12+12; cout<<pad12<<endl;
int pad13=13+13; cout<<pad13<<endl;
int pad14=14+14; cout<<pad14<<endl;
int pad15=15+15; cout<<pad15<<endl;
int pad16=16+16; cout<<pad16<<endl;
int pad17=17+17; cout<<pad17<<endl;
int pad18=18+18; cout<<pad18<<endl;
int pad19=19+19; cout<<pad19<<endl;
int pad20=20+20; cout<<pad20<<endl;
int pad21=21+21; cout<<pad21<<endl;
int pad22=22+22; cout<<pad22<<endl;
int pad23=23+23; cout<<pad23<<endl;
int pad24=24+24; cout<<pad24<<endl;
int pad25=25+25; cout<<pad25<<endl;
int pad26=26+26; cout<<pad26<<endl;
int pad27=27+27; cout<<pad27<<endl;
int pad28=28+28; cout<<pad28<<endl;
int pad29=29+29; cout<<pad29<<endl;
int pad30=30+30; cout<<pad30<<endl;