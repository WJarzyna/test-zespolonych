#include "WyrazenieZesp.hh"
using std::cout;


std::ostream & operator << (std::ostream &str, WZesp in)
{
  char op[]={'+','-','*','/'};
  str<<in.Arg1<<op[in.Op]<<in.Arg2;
  return str;
}

LZespolona Oblicz(WZesp WyrZ)
{
  switch(WyrZ.Op)
    {
    case Op_Dodaj: return WyrZ.Arg1+WyrZ.Arg2;
    case Op_Odejmij: return WyrZ.Arg1-WyrZ.Arg2;
    case Op_Mnoz: return WyrZ.Arg1*WyrZ.Arg2;
    case Op_Dziel: return WyrZ.Arg1/WyrZ.Arg2;
    default: cout<<"Bledna operacja";return make(0,0);
    }
}

std::istream & operator >> (std::istream &str, WZesp &exp)
{
  char c;
  str>>exp.Arg1;
  str>>c;
  
  switch(c)
    {
    case '+':exp.Op=Op_Dodaj;break;
    case '-':exp.Op=Op_Odejmij;break;
    case '*':exp.Op=Op_Mnoz;break;
    case '/':exp.Op=Op_Dziel;break;
    default: str.setstate(std::ios::failbit);
    }
  
  str>>exp.Arg2;
  return str;
}
