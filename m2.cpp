#include <iostream>
#include "LZespolona.cpp"

using std::cin;

int main(void)
{
  LZespolona num;
  if(get(num))return -1;
  
  print(num);
  LZespolona dos=num*num;
  print(num*num);
  print(dos+num);
  print(num-dos);
  print(dos*num);
  print(num/dos);
}

/*
dzialajace zespolone(z funkcjami wysw, wczyt
*/
