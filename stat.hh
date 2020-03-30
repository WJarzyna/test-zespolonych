#include <iostream>


struct stat
{
  int good;
  int all;
};

void init_stat (stat &st);
void add_good (stat &st);
void add_bad (stat &st);
int get_good (const stat &st);
int get_all (const stat &st);
double score_percent (const stat  &st);

std::ostream & operator << (std::ostream &str, const stat &st);
