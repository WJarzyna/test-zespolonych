#include "stat.hh"

void init_stat (stat &st)
{
  st.good=0;
  st.all=0;
}

void add_good (stat &st)
{
  st.good++;
  st.all++;
}

void add_bad (stat &st)
{
  st.all++;
}

int get_good (const stat &st)
{
  return st.good;
}

int get_all (const stat &st)
{
  return st.all;
}

double score_percent (const stat  &st)
{
  return st.good/st.all*100;
}

std::ostream & operator << (std::ostream &str, const stat &st)
{
  str<<"Twoj wynik to "<<score_percent(st)<<"% ("<<get_good(st)<<'/'<<get_all(st)<<").";
  return str;
}
