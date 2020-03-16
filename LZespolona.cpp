#include "LZespolona.hh"

using std::cout;
using std::cin;

std::ostream & operator << (std::ostream &str, LZespolona in)
{
  str << '(' << in.re << std::showpos << in.im << std::noshowpos << "i)";
}


std::istream & operator >> (std::istream &str,LZespolona &in)
{
  char znak;
  str>>znak;
  if(znak!='(')str.setstate(std::ios::failbit);
  str>>in.re;
  str>>in.im;
  str>>znak;
  if(znak!='i')str.setstate(std::ios::failbit);
  str>>znak;
  if(znak!=')')str.setstate(std::ios::failbit);
}


//bool getexp(WZesp &in)
//{
  








LZespolona make(double re, double im)
{
  LZespolona out;
  out.re=re;
  out.im=im;
  return out;
}

LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;
  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}

LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;
  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}

LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;
  Wynik.re = Skl1.re*Skl2.re-Skl1.im*Skl2.im;
  Wynik.im = Skl1.im*Skl2.re+Skl2.im*Skl1.re;
  return Wynik;
}

LZespolona sprzeg(LZespolona in)
{
  in.im=-in.im;
  return in;
}

double modul(LZespolona in)
{
  return sqrt(in.re*in.re+in.im*in.im);
}

LZespolona  operator / (LZespolona  Skl1, double  div)
{
  LZespolona out;
  out.re=Skl1.re/div;
  out.im=Skl1.im/div;
  return out;
}


LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2)
{
  return ( Skl1 * sprzeg(Skl2)  ) / ( modul(Skl2) * modul(Skl2) );
}
 
/*
klasa lz na operatorach
klasa wyrazenia
konwersja znak->enum
*/
