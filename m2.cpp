#include <iostream>
#include "LZespolona.cpp"
#include "WyrazenieZesp.cpp"

using std::cin;
using std::cout;

int main(void)
{
  WZesp wyr;

  cout<<"Podaj wyrazenie\n";
  cin>>wyr;

  if(wyr.Arg1==wyr.Arg2)cout<<"Rowne!";
  
  cout<<'\n';
  cout<<wyr<<'='<<Oblicz(wyr);
}


