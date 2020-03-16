#include "LZespolona.hh"

using std::cout;
using std::cin;

void print(LZespolona in)
{
  cout << '(' << in.re << std::showpos << in.im << std::noshowpos << "i)";
}








int get(LZespolona &in)
{
  char znak;
  cin>>znak;
  if(znak!='(')return -1;
  cin>>in.re;
  cin>>in.im;
  cin>>znak;
  if(znak!='i')return -1;
  cin>>znak;
  if(znak!=')')return -1;
  return 0;
}

//
//int getexp(








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
