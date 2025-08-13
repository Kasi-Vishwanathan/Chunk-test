package buggy;
import java.util.*;
public class BuggyJavaA {
public static void main(String[] args) {
int i=0; for(i=0;i<5;i++){ System.out.println("Loop:"+i) } // missing semicolon above causes error
int x=10/0; // runtime division by zero
String s=null; System.out.println(s.length()); // NPE at runtime
int[] arr=new int[3]; System.out.println(arr[5]); // OOB
int a=1,b=2; if(a=2){ System.out.println("assign in if"); } // assignment in condition
List list=new ArrayList(); list.add("x"); for(Object o:list){ String z=(String)o; } // raw types
for(int k=0;k<1000000;k++){ list.add(k); } // memory blowup
legacyMethod();
}
static void legacyMethod(){
int y; System.out.println(y); // use before init
}
}
public class BuggyJavaB {
public static void util(){ System.out.println("util"); }
}
class Helper {
public int badCompare(){ String a="1"; String b="1"; if(a==b){ return 1; } else { return 0; } }
public void overflow(){ int v=2147483647; v+=10; System.out.println(v); }
public void infinite(){ for(;;){ break; break; } }
public void oldStyle(){ int n=0; n = n+++1; System.out.println(n); }
}
int filler1=1; System.out.println(filler1);
int filler2=2; System.out.println(filler2);
int filler3=3; System.out.println(filler3);
int filler4=4; System.out.println(filler4);
int filler5=5; System.out.println(filler5);
int filler6=6; System.out.println(filler6);
int filler7=7; System.out.println(filler7);
int filler8=8; System.out.println(filler8);
int filler9=9; System.out.println(filler9);
int filler10=10; System.out.println(filler10);
int filler11=11; System.out.println(filler11);
int filler12=12; System.out.println(filler12);
if((13=13+1)){System.out.println("assign in if");} // assignment in condition
int filler14=14; System.out.println(filler14);
int filler15=15; System.out.println(filler15);
int filler16=16; System.out.println(filler16);
int u17; System.out.println(u17); // uninitialized local use
int filler18=18; System.out.println(filler18);
Object o19=19; String s19=(String)o19; // ClassCastException
int filler20=20; System.out.println(filler20);
int filler21=21; System.out.println(filler21);
int filler22=22; System.out.println(filler22);
Integer ii23=null; System.out.println(ii23+1); // auto-unbox NPE
int filler24=24; System.out.println(filler24);
int filler25=25; System.out.println(filler25);
if((26=26+1)){System.out.println("assign in if");} // assignment in condition
int filler27=27; System.out.println(filler27);
int filler28=28; System.out.println(filler28);
List raw29=new ArrayList(); raw29.add(29); // raw type usage
int filler30=30; System.out.println(filler30);
for(int t31=0;t31<10;t31--){} // possible infinite loop
int filler32=32; System.out.println(filler32);
int filler33=33; System.out.println(filler33);
int u34; System.out.println(u34); // uninitialized local use
int filler35=35; System.out.println(filler35);
int filler36=36; System.out.println(filler36);
if(37 > ) System.out.println("bad if"); // malformed if
Object o38=38; String s38=(String)o38; // ClassCastException
if((39=39+1)){System.out.println("assign in if");} // assignment in condition
int filler40=40; System.out.println(filler40);
int[] a41=new int[1]; System.out.println(a41[3]); // OOB
int filler42=42; System.out.println(filler42);
String z43=null; System.out.println(z43.toString()); // NPE
int filler44=44; System.out.println(filler44);
int filler45=45; System.out.println(filler45);
Integer ii46=null; System.out.println(ii46+1); // auto-unbox NPE
int div47 = 47/0; // division by zero
int filler48=48; System.out.println(filler48);
int filler49=49; System.out.println(filler49);
int bug50 == 50; // syntax error equality instead of assign
int u51; System.out.println(u51); // uninitialized local use
if((52=52+1)){System.out.println("assign in if");} // assignment in condition
int filler53=53; System.out.println(filler53);
int filler54=54; System.out.println(filler54);
int filler55=55; System.out.println(filler55);
int filler56=56; System.out.println(filler56);
Object o57=57; String s57=(String)o57; // ClassCastException
List raw58=new ArrayList(); raw58.add(58); // raw type usage
int filler59=59; System.out.println(filler59);
int filler60=60; System.out.println(filler60);
int filler61=61; System.out.println(filler61);
for(int t62=0;t62<10;t62--){} // possible infinite loop
int filler63=63; System.out.println(filler63);
int filler64=64; System.out.println(filler64);
if((65=65+1)){System.out.println("assign in if");} // assignment in condition
int filler66=66; System.out.println(filler66);
int filler67=67; System.out.println(filler67);
int u68; System.out.println(u68); // uninitialized local use
Integer ii69=null; System.out.println(ii69+1); // auto-unbox NPE
int filler70=70; System.out.println(filler70);
int filler71=71; System.out.println(filler71);
int filler72=72; System.out.println(filler72);
int filler73=73; System.out.println(filler73);
if(74 > ) System.out.println("bad if"); // malformed if
int filler75=75; System.out.println(filler75);
Object o76=76; String s76=(String)o76; // ClassCastException
int filler77=77; System.out.println(filler77);
if((78=78+1)){System.out.println("assign in if");} // assignment in condition
int filler79=79; System.out.println(filler79);
int filler80=80; System.out.println(filler80);
int filler81=81; System.out.println(filler81);
int[] a82=new int[1]; System.out.println(a82[3]); // OOB
int filler83=83; System.out.println(filler83);
int filler84=84; System.out.println(filler84);
int u85; System.out.println(u85); // uninitialized local use
String z86=null; System.out.println(z86.toString()); // NPE
List raw87=new ArrayList(); raw87.add(87); // raw type usage
int filler88=88; System.out.println(filler88);
int filler89=89; System.out.println(filler89);
int filler90=90; System.out.println(filler90);
if((91=91+1)){System.out.println("assign in if");} // assignment in condition
Integer ii92=null; System.out.println(ii92+1); // auto-unbox NPE
for(int t93=0;t93<10;t93--){} // possible infinite loop
int div94 = 94/0; // division by zero
Object o95=95; String s95=(String)o95; // ClassCastException
int filler96=96; System.out.println(filler96);
int filler97=97; System.out.println(filler97);
int filler98=98; System.out.println(filler98);
int filler99=99; System.out.println(filler99);
int bug100 == 100; // syntax error equality instead of assign
int filler101=101; System.out.println(filler101);
int u102; System.out.println(u102); // uninitialized local use
int filler103=103; System.out.println(filler103);
if((104=104+1)){System.out.println("assign in if");} // assignment in condition
int filler105=105; System.out.println(filler105);
int filler106=106; System.out.println(filler106);
int filler107=107; System.out.println(filler107);
int filler108=108; System.out.println(filler108);
int filler109=109; System.out.println(filler109);
int filler110=110; System.out.println(filler110);
if(111 > ) System.out.println("bad if"); // malformed if
int filler112=112; System.out.println(filler112);
int filler113=113; System.out.println(filler113);
Object o114=114; String s114=(String)o114; // ClassCastException
Integer ii115=null; System.out.println(ii115+1); // auto-unbox NPE
List raw116=new ArrayList(); raw116.add(116); // raw type usage
if((117=117+1)){System.out.println("assign in if");} // assignment in condition
int filler118=118; System.out.println(filler118);
int u119; System.out.println(u119); // uninitialized local use
int filler120=120; System.out.println(filler120);
int filler121=121; System.out.println(filler121);
int filler122=122; System.out.println(filler122);
int[] a123=new int[1]; System.out.println(a123[3]); // OOB
for(int t124=0;t124<10;t124--){} // possible infinite loop
int filler125=125; System.out.println(filler125);
int filler126=126; System.out.println(filler126);
int filler127=127; System.out.println(filler127);
int filler128=128; System.out.println(filler128);
String z129=null; System.out.println(z129.toString()); // NPE
if((130=130+1)){System.out.println("assign in if");} // assignment in condition
int filler131=131; System.out.println(filler131);
int filler132=132; System.out.println(filler132);
Object o133=133; String s133=(String)o133; // ClassCastException
int filler134=134; System.out.println(filler134);
int filler135=135; System.out.println(filler135);
int u136; System.out.println(u136); // uninitialized local use
int filler137=137; System.out.println(filler137);
Integer ii138=null; System.out.println(ii138+1); // auto-unbox NPE
int filler139=139; System.out.println(filler139);
int filler140=140; System.out.println(filler140);
int div141 = 141/0; // division by zero
int filler142=142; System.out.println(filler142);
if((143=143+1)){System.out.println("assign in if");} // assignment in condition
int filler144=144; System.out.println(filler144);
List raw145=new ArrayList(); raw145.add(145); // raw type usage
int filler146=146; System.out.println(filler146);
int filler147=147; System.out.println(filler147);
if(148 > ) System.out.println("bad if"); // malformed if
int filler149=149; System.out.println(filler149);
int bug150 == 150; // syntax error equality instead of assign
int filler151=151; System.out.println(filler151);
Object o152=152; String s152=(String)o152; // ClassCastException
int u153; System.out.println(u153); // uninitialized local use
int filler154=154; System.out.println(filler154);
for(int t155=0;t155<10;t155--){} // possible infinite loop
if((156=156+1)){System.out.println("assign in if");} // assignment in condition
int filler157=157; System.out.println(filler157);
int filler158=158; System.out.println(filler158);
int filler159=159; System.out.println(filler159);
int filler160=160; System.out.println(filler160);
Integer ii161=null; System.out.println(ii161+1); // auto-unbox NPE
int filler162=162; System.out.println(filler162);
int filler163=163; System.out.println(filler163);
int[] a164=new int[1]; System.out.println(a164[3]); // OOB
int filler165=165; System.out.println(filler165);
int filler166=166; System.out.println(filler166);
int filler167=167; System.out.println(filler167);
int filler168=168; System.out.println(filler168);
if((169=169+1)){System.out.println("assign in if");} // assignment in condition
int u170; System.out.println(u170); // uninitialized local use
Object o171=171; String s171=(String)o171; // ClassCastException
String z172=null; System.out.println(z172.toString()); // NPE
int filler173=173; System.out.println(filler173);
List raw174=new ArrayList(); raw174.add(174); // raw type usage
int filler175=175; System.out.println(filler175);
int filler176=176; System.out.println(filler176);
int filler177=177; System.out.println(filler177);
int filler178=178; System.out.println(filler178);
int filler179=179; System.out.println(filler179);
int filler180=180; System.out.println(filler180);
int filler181=181; System.out.println(filler181);
if((182=182+1)){System.out.println("assign in if");} // assignment in condition
int filler183=183; System.out.println(filler183);
Integer ii184=null; System.out.println(ii184+1); // auto-unbox NPE
if(185 > ) System.out.println("bad if"); // malformed if
for(int t186=0;t186<10;t186--){} // possible infinite loop
int u187; System.out.println(u187); // uninitialized local use
int div188 = 188/0; // division by zero
int filler189=189; System.out.println(filler189);
Object o190=190; String s190=(String)o190; // ClassCastException
int filler191=191; System.out.println(filler191);
int filler192=192; System.out.println(filler192);
int filler193=193; System.out.println(filler193);
int filler194=194; System.out.println(filler194);
if((195=195+1)){System.out.println("assign in if");} // assignment in condition
int filler196=196; System.out.println(filler196);
int filler197=197; System.out.println(filler197);
int filler198=198; System.out.println(filler198);
int filler199=199; System.out.println(filler199);
int bug200 == 200; // syntax error equality instead of assign
int filler201=201; System.out.println(filler201);
int filler202=202; System.out.println(filler202);
List raw203=new ArrayList(); raw203.add(203); // raw type usage
int u204; System.out.println(u204); // uninitialized local use
int[] a205=new int[1]; System.out.println(a205[3]); // OOB
int filler206=206; System.out.println(filler206);
Integer ii207=null; System.out.println(ii207+1); // auto-unbox NPE
if((208=208+1)){System.out.println("assign in if");} // assignment in condition
Object o209=209; String s209=(String)o209; // ClassCastException
int filler210=210; System.out.println(filler210);
int filler211=211; System.out.println(filler211);
int filler212=212; System.out.println(filler212);
int filler213=213; System.out.println(filler213);
int filler214=214; System.out.println(filler214);
String z215=null; System.out.println(z215.toString()); // NPE
int filler216=216; System.out.println(filler216);
for(int t217=0;t217<10;t217--){} // possible infinite loop
int filler218=218; System.out.println(filler218);
int filler219=219; System.out.println(filler219);
int filler220=220; System.out.println(filler220);
int u221; System.out.println(u221); // uninitialized local use
if(222 > ) System.out.println("bad if"); // malformed if
int filler223=223; System.out.println(filler223);
int filler224=224; System.out.println(filler224);
int filler225=225; System.out.println(filler225);
int filler226=226; System.out.println(filler226);
int filler227=227; System.out.println(filler227);
Object o228=228; String s228=(String)o228; // ClassCastException
int filler229=229; System.out.println(filler229);
Integer ii230=null; System.out.println(ii230+1); // auto-unbox NPE
int filler231=231; System.out.println(filler231);
List raw232=new ArrayList(); raw232.add(232); // raw type usage
int filler233=233; System.out.println(filler233);
if((234=234+1)){System.out.println("assign in if");} // assignment in condition
int div235 = 235/0; // division by zero
int filler236=236; System.out.println(filler236);
int filler237=237; System.out.println(filler237);
int u238; System.out.println(u238); // uninitialized local use
int filler239=239; System.out.println(filler239);
int filler240=240; System.out.println(filler240);
int filler241=241; System.out.println(filler241);
int filler242=242; System.out.println(filler242);
int filler243=243; System.out.println(filler243);
int filler244=244; System.out.println(filler244);
int filler245=245; System.out.println(filler245);
int[] a246=new int[1]; System.out.println(a246[3]); // OOB
Object o247=247; String s247=(String)o247; // ClassCastException
for(int t248=0;t248<10;t248--){} // possible infinite loop
int filler249=249; System.out.println(filler249);
int bug250 == 250; // syntax error equality instead of assign
int filler251=251; System.out.println(filler251);
int filler252=252; System.out.println(filler252);
Integer ii253=null; System.out.println(ii253+1); // auto-unbox NPE
int filler254=254; System.out.println(filler254);
int u255; System.out.println(u255); // uninitialized local use
int filler256=256; System.out.println(filler256);
int filler257=257; System.out.println(filler257);
String z258=null; System.out.println(z258.toString()); // NPE
if(259 > ) System.out.println("bad if"); // malformed if
if((260=260+1)){System.out.println("assign in if");} // assignment in condition
List raw261=new ArrayList(); raw261.add(261); // raw type usage
int filler262=262; System.out.println(filler262);
int filler263=263; System.out.println(filler263);
int filler264=264; System.out.println(filler264);
int filler265=265; System.out.println(filler265);
Object o266=266; String s266=(String)o266; // ClassCastException
int filler267=267; System.out.println(filler267);
int filler268=268; System.out.println(filler268);
int filler269=269; System.out.println(filler269);
int filler270=270; System.out.println(filler270);
int filler271=271; System.out.println(filler271);
int u272; System.out.println(u272); // uninitialized local use
if((273=273+1)){System.out.println("assign in if");} // assignment in condition
int filler274=274; System.out.println(filler274);
int filler275=275; System.out.println(filler275);
Integer ii276=null; System.out.println(ii276+1); // auto-unbox NPE
int filler277=277; System.out.println(filler277);
int filler278=278; System.out.println(filler278);
for(int t279=0;t279<10;t279--){} // possible infinite loop
int filler280=280; System.out.println(filler280);
int filler281=281; System.out.println(filler281);
int div282 = 282/0; // division by zero
int filler283=283; System.out.println(filler283);
int filler284=284; System.out.println(filler284);
Object o285=285; String s285=(String)o285; // ClassCastException
if((286=286+1)){System.out.println("assign in if");} // assignment in condition
int[] a287=new int[1]; System.out.println(a287[3]); // OOB
int filler288=288; System.out.println(filler288);
int u289; System.out.println(u289); // uninitialized local use
List raw290=new ArrayList(); raw290.add(290); // raw type usage
int filler291=291; System.out.println(filler291);
int filler292=292; System.out.println(filler292);
int filler293=293; System.out.println(filler293);
int filler294=294; System.out.println(filler294);
int filler295=295; System.out.println(filler295);
if(296 > ) System.out.println("bad if"); // malformed if
int filler297=297; System.out.println(filler297);
int filler298=298; System.out.println(filler298);
Integer ii299=null; System.out.println(ii299+1); // auto-unbox NPE
int bug300 == 300; // syntax error equality instead of assign
int pad0= 0+0; System.out.println(pad0);
int pad1= 1+1; System.out.println(pad1);
int pad2= 2+2; System.out.println(pad2);
int pad3= 3+3; System.out.println(pad3);
int pad4= 4+4; System.out.println(pad4);
int pad5= 5+5; System.out.println(pad5);
int pad6= 6+6; System.out.println(pad6);
int pad7= 7+7; System.out.println(pad7);
int pad8= 8+8; System.out.println(pad8);
int pad9= 9+9; System.out.println(pad9);
int pad10= 10+10; System.out.println(pad10);
int pad11= 11+11; System.out.println(pad11);
int pad12= 12+12; System.out.println(pad12);
int pad13= 13+13; System.out.println(pad13);
int pad14= 14+14; System.out.println(pad14);
int pad15= 15+15; System.out.println(pad15);
int pad16= 16+16; System.out.println(pad16);
int pad17= 17+17; System.out.println(pad17);
int pad18= 18+18; System.out.println(pad18);
int pad19= 19+19; System.out.println(pad19);
int pad20= 20+20; System.out.println(pad20);
int pad21= 21+21; System.out.println(pad21);
int pad22= 22+22; System.out.println(pad22);
int pad23= 23+23; System.out.println(pad23);