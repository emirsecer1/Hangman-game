#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 50000
int size(char array[]);
int main(void)
{
int size_of_str,i,j,k,t=0,m=0,c=0,a,z,v,g=0,r,q,w=0,x=0,lengthStrDogru,lengthStrYanlis,lengthStrYanlisDogru;
char predict,tahmin;//kullanicinin tahmin ettigi harfler
char str1[SIZE]="melankoli";
char str2[SIZE]="depresyon";
char str3[SIZE]="dinazor";
char str4[SIZE]="akvaryum";
char str5[SIZE]="karnibahar";
char str6[SIZE]="solaryum";
char str7[SIZE]="brokoli";
char str8[SIZE]="trabzon";
char str9[SIZE]="salyangoz";
char str10[SIZE]="saklambac";
char str11[SIZE]="psikolog";
char str12[SIZE]="menekse";
char str13[SIZE]="bilgisayar";
char str14[SIZE]="sandalye";
char str15[SIZE]="sizofreni";
char str16[SIZE]="lisansustu";
char str17[SIZE]="pardesu";
char str18[SIZE]="imambayildi";
char str19[SIZE]="jupiter";
char str20[SIZE]="buzdolabi";
char karsilastirma[SIZE];
char str[SIZE];              //bilgisayaryn rastgele sectigi stringi str ye atiyoruz.
char str_yanlis[SIZE];
char str_dogru[SIZE];      //kullanicinin girdigi yanlis harfler bu stringde toplaniyor.
char str0[SIZE];             //'_'leri oldugu kullaniciya ait ilk string.
srand(time(NULL));
a=rand () %20 + 1;
/*Bu bolumde bilgisayarin rastgele atadigi 'a' degerine gore stringlerden biri str'ye ataniyor.*/
switch (a)
{
case 1:
strcpy(str,str1);
break;
case 2:
strcpy(str,str2);
break;
case 3:
strcpy(str,str3);
break;
case 4:
strcpy(str,str4);
break;
case 5:
strcpy(str,str5);
break;
case 6:
strcpy(str,str6);
break;
case 7:
strcpy(str,str7);
break;
case 8:
strcpy(str,str8);
break;
case 9:
strcpy(str,str9);
break;
case 10:
strcpy(str,str10);
break;
case 11:
strcpy(str,str11);
break;
case 12:
strcpy(str,str12);
break;
case 13:
strcpy(str,str13);
break;
case 14:
strcpy(str,str14);
break;
case 15:
strcpy(str,str15);
break;
case 16:
strcpy(str,str16);
break;
case 17:
strcpy(str,str17);
break;
case 18:
strcpy(str,str18);
break;
case 19:
strcpy(str,str19);
break;
case 20:
strcpy(str,str20);
break;
}
/*Burada bilgisayar tarafindan otomatik olarak atanan stringin uzunlugu hesaplaniyor.*/
size_of_str=size(str);
r=size_of_str;
/*Burada '_' lerle dolu ilk string olusturuluyor.*/
for(k=0; k<size_of_str; ++k)
{
str0[k]='-';
}
/*Burada bilgisayaryn sectigi stringin uzunlugunun bir fazlasi kadar kullaniciya tahmin hakki veriliyor.*/
for(i=0; i<size_of_str; ++i)
{
t=size_of_str - i;  //Kalan tahmin hakki hesaplaniyor.
printf("Kelime %d harfli.",r);
printf("\n%d hakkiniz kaldi.",t);
printf("\nBir tahminde bulununuz.     Yanlis soyledigin harfler:\n %53s\n",str_yanlis);
printf("%s\n",str0);
lengthStrYanlis = strlen(str_yanlis);
lengthStrDogru = strlen(str_dogru);
if(lengthStrYanlis > lengthStrDogru)
lengthStrYanlisDogru = lengthStrYanlis;
else
lengthStrYanlisDogru = lengthStrDogru;
scanf(" %c",&predict); //Kullanicidan harf tahmini aliniyor.
q=0;
while(q < lengthStrYanlisDogru)
{
if(predict == str_yanlis[q] || predict == str_dogru[q])
{
printf("Bu harfi zaten soylemistiniz.\n");
scanf(" %c",&predict); //Kullanicidan harf tahmini aliniyor.
q=-1;
}
++q;
}
/*Burada kullanicinin harf tahmini bilgisayarin sectigi stringin her bir harfiyle karsilastiriliyor.
Kullanicinin tahmininin dogru oldugu bolumler aciliyor.*/
for(j=0; j<size_of_str; ++j)
{
if(str[j]==predict)
{
c +=1;
str0[j]=str[j];
str_dogru[x] = predict;
x +=1;
}
}
if(c != 0)
size_of_str +=1;
/*Eger kullanicinin yaptigi harf tahmini bilgisayarin sectigi stringin icerisinde yoksa
o harfler str_yanlis stringine ataniyor.*/
if(c==0)
{
str_yanlis[m]=predict;
++m;
}
c=0;
printf("%s",str0);
/*Bu bolumde bilgisayarin sectigi stringle kullanicinin tahmin etmekte oldugu string karsilastiriliyor.
Eger esit cikarsa kullanici butun '_' leri acmis,stringi dogru tahmin etmis demektir.*/
z=strcmp(str,str0);
if(z==0)
{
printf("\n\n\n           KAZANDINIZ.");
break;
}
/*Bu bolumde bilgisayarin sectigi stringle kullanicinin tahmin etmekte oldugu string karsilastiriliyor.
Eger esit degilse kullanici butun '_' leri acamamis,stringi dogru tahmin edememis demektir.*/
//VE OYUN BYTER.
if(t==1 && strcmp(str0,str)!=0 )
{
printf("\n\n\n           KAYBETTIN SENDEN BI CACIK OLMAZ.");
break;
}
system("cls");
}
getch();
return (0);
}
int size(char array[])
{
int l=0;
while(array[l]!='\0')
++l;
return l;
}