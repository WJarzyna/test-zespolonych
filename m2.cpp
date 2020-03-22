#include <iostream>
#include "LZespolona.cpp"
#include "WyrazenieZesp.cpp"

using std::cin;
using std::cout;

int main(void)
{
  WZesp wyr;

  cout<<"Podaj wyrazenie\n";
  get_exp(wyr);
  cout<<'\n';
  show(wyr);
  cout<<'='<<Oblicz(wyr);
}


