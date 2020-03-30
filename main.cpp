#include <iostream>
#include "WyrazenieZesp.hh"
#include "stat.hh"
#include "test.hh"

using std::cin;
using std::cout;
using std::cerr;

int main(int argc, char* argv[])
{
  std::ifstream file;

  if(!set_test(argv[1],file))
    {
      cerr<<"Blad testu";
      return -1;
    }
    
  WZesp wyr;
  LZespolona ans;
  stat st;

  
  init_stat(st);

  
  cout<<"Rozpoczynam test: "<<argv[1]<<'\n';
  while(getq(file,wyr))
    {
      if(!file.good())
	{
	  cerr<<"Blad w pytaniu";
	  file.clear();
	}

      else
	{
	  cout<<wyr<<'='<<'\n';
	  cin>>ans;
	  
	  if(!cin.good())
	    {
	      cerr<<"Blad w odpowiedzi"<<'\n';
	      cin.clear();
	      add_bad(st);
	    }
	  
	  else
	    {
	      if(ans==Oblicz(wyr))
		{
		  add_good(st);
		  cout<<"Poprawna odpowiedz"<<'\n';
		}
	      
	      else
		{
		  add_bad(st);
		  cout<<"Bledna odpowiedz"<<'\n';
		}
	    }
	}
    }
  file.close();
  cout<<st;
}


