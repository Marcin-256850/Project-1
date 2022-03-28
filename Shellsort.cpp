#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <chrono>
#include <ratio>
using namespace std;

void shellsort(int *d,int n)
{	
	int y,z,i,j;
	  for(y=1;y<n;y=3*y+1) //obliczamy y dopóki nie przekroczy ilości elementów w tablicy
	{
   y/=9;// oblcziamy nasz najlepszy możliwy odstęp
   }
  while(y)
  {
    for(j=n-y-1;j>=0;j--)
    {
      z=d[j];
      i=j+y;
      while((i<n)&&(z>d[i]))
      {
        d[i-y]=d[i];
        i+=y;
      }
      d[i-y]=z;
    }
    y/=3;//zmniejszamy odstep
  }
}

int main()
{
		using namespace std::chrono;
 		int n=10000;
		int a=0;
ofstream fout;
fout.open("Shellsort-losowe.txt");
int g=0;




while(g<5)
{
	if(g==0)
	{

		a=0;
		while(a<100)
		{
	int *d=new int [n];		
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++){
	d[i] = rand();}
 high_resolution_clock::time_point t1 = high_resolution_clock::now();
	shellsort(d,n);
  high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] d;
	fout<<endl;
	   a++;
}
		fout<<endl;

	}else if(g==1)
	{
		n=50000;
		a=0;
		while(a<100)
		{
	int *d=new int [n];		
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++){
	d[i] = rand();}
 high_resolution_clock::time_point t1 = high_resolution_clock::now();
	shellsort(d,n);
  high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] d;
	fout<<endl;
	   a++;
}
		fout<<endl;


}else if(g==2)
{
	n=100000;
	a=0;
		while(a<100)
		{
	int *d=new int [n];		
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++){
	d[i] = rand();}
 high_resolution_clock::time_point t1 = high_resolution_clock::now();
	shellsort(d,n);
  high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] d;
	fout<<endl;
	   a++;
}
		fout<<endl;

	
}else if(g==3)
{
		n=500000;
		a=0;
		while(a<100)
		{
	int *d=new int [n];		
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++){
	d[i] = rand();}
 high_resolution_clock::time_point t1 = high_resolution_clock::now();
	shellsort(d,n);
  high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] d;
	fout<<endl;
	   a++;
}
		fout<<endl;

}else if(g==4)
{
		n=1000000;
		a=0;
		while(a<100)
		{
	int *d=new int [n];		
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++){
	d[i] = rand();}
	
 high_resolution_clock::time_point t1 = high_resolution_clock::now();
	shellsort(d,n);
  high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] d;
	fout<<endl;
	   a++;
}
	}

g++;
}
fout.close();
  cout << endl;

  return 0;
}
