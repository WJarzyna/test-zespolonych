#include "WyrazenieZesp.hh"
using std::cout;

void show(WZesp WyrZ)
{
  char op[]={'+','-','*','/'};
  cout<<WyrZ.Arg1<<op[WyrZ.Op]<<WyrZ.Arg2;
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

void get_exp(WZesp &exp)
{
  char c;
  cin>>exp.Arg1;
  cin>>c;
  switch(c)
    {
    case '+':exp.Op=Op_Dodaj;break;
    case '-':exp.Op=Op_Odejmij;break;
    case '*':exp.Op=Op_Mnoz;break;
    case '/':exp.Op=Op_Dziel;break;
    }
  cin>>exp.Arg2;
}

  
/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
