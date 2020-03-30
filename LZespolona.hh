#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH

#include <iostream>

using std::cout;
using std::cin;

/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej 
 *  strukturze.
 */

#include <cmath>

/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};


/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */

std::ostream & operator << (std::ostream &str, LZespolona in);
std::istream & operator >> (std::istream &str,LZespolona &in);

bool operator == (LZespolona arg1, LZespolona arg2);

LZespolona make(double re, double im);
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona sprzeg(LZespolona in);
double modul(LZespolona in);
LZespolona  operator / (LZespolona  Skl1, double  div);
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2);


#endif
