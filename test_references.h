#include "deklaracje.h"


//1. zmienna referencyjna musi byc zainicjalizowana z jakas wartoscia!
//2. nie moze zmieniac skojarzen
//3. referencja jest const -> u32 & cos to u32 & const u32
//4. referencja musi miec taki sam typ, gdyby const int & cos = x to mozemy zmienic x, ale nie cos.


void TestingReferences (u8 x,u16 y, u32 z){

u8 norm = x;
u16 norm16 = y;
u32 norm32 = z;

cout<<"uchar= "<< norm << "adres = "<< &norm<<endl;
cout<<"ushort= "<< norm16 << "adres = "<< &norm16<<endl;


u32 & refnorm32 = norm32;
u32 noref32 = norm;



refnorm32 = 10;

cout<<"uint= "<< norm32 << "adres = "<< &norm32<<endl;
cout<<"uintref= "<< refnorm32 << "adres = "<< &refnorm32<<endl;
cout<<"uintnoref= "<< noref32 << "adres = "<< &noref32<<endl;

}



void Swap (u32 x, u32 y){

u32 a = x;
u32 b = y;
u32 t;
x=t;
x=y;
y=t;

cout<<"a= "<< a << "adres = "<< a<<endl;
cout<<"b= "<< a << "adres = "<< a<<endl;
cout<<"t= "<< a << "adres = "<< a<<endl;
}

void SwapRef (u32 &x, u32 &y){

u32 a = x;
u32 b = y;
u32 t;

x=t;
x=y;
y=t;

cout<<"a= "<< a << "adres = "<< a<<endl;
cout<<"b= "<< b << "adres = "<< b<<endl;
cout<<"t= "<< t << "adres = "<< t<<endl;
}