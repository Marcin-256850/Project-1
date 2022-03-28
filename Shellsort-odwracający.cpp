#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <chrono>
#include <ratio>
using namespace std;

void quick_sort_od(int *tab, int l, int p)
{
	if(p <= l) return;
	
	int g = l - 1, h = p + 1, 
	piv = tab[(l+p)/2]; //wybieramy punkt odniesienia
	
	while(1)
	{
		/*szukamy elementu mniejszego lub rownego pivotowi stojacego po prawej stronie
		*/
		while(piv<tab[++g]);
		
	/*szukamy elementu wiekszego lub rownego pivotowi stojacego po lewej stronie
		*/
		while(piv>tab[--h]);
		
		
		if( g <= h) //jesli i i j mina się przerywamy petle
			swap(tab[g],tab[h]);
		else
			break;
	}

	if(h > l)
	quick_sort_od(tab, l, h);
	if(g < p)
	quick_sort_od(tab, g, p);
}

void shellsort(int *d,int N)
{
	int y,z,i,j;
	  for(y = 1; y < N; y = 3 * y + 1);
  {
  
  y /= 9;
}

  while(y)
  {
    for(j = N - y - 1; j >= 0; j--)
    {
      z = d[j];
      i = j + y;
      while((i < N) && (z > d[i]))
      {
        d[i - y] = d[i];
        i += y;
      }
      d[i - y] = z;
    }
    y /= 3;
  }
}


int main()
{
		using namespace std::chrono;
 		int N=10000;
		int a=0;
ofstream fout;
fout.open("Shellsort-odwracajace.txt");
int g=0;




while(g<5)
{
	if(g==0)
	{

		a=0;
		while(a<100)
		{
	int *d=new int [N];		
	srand((unsigned)time(NULL));
	for(int i = 0; i < N; i++){
	d[i] = rand();}
	quick_sort_od(d,0,N-1);
 high_resolution_clock::time_point t1 = high_resolution_clock::now();
	shellsort(d,N);
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
		N=50000;
		a=0;
		while(a<100)
		{
	int *d=new int [N];		
	srand((unsigned)time(NULL));
	for(int i = 0; i < N; i++){
	d[i] = rand();}
		quick_sort_od(d,0,N-1);
 high_resolution_clock::time_point t1 = high_resolution_clock::now();
	shellsort(d,N);
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
	N=100000;
	a=0;
		while(a<100)
		{
	int *d=new int [N];		
	srand((unsigned)time(NULL));
	for(int i = 0; i < N; i++){
	d[i] = rand();}
		quick_sort_od(d,0,N-1);
 high_resolution_clock::time_point t1 = high_resolution_clock::now();
	shellsort(d,N);
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
		N=500000;
		a=0;
		while(a<100)
		{
	int *d=new int [N];		
	srand((unsigned)time(NULL));
	for(int i = 0; i < N; i++){
	d[i] = rand();}
		quick_sort_od(d,0,N-1);
 high_resolution_clock::time_point t1 = high_resolution_clock::now();
	shellsort(d,N);
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
		N=1000000;
		a=0;
		while(a<100)
		{
	int *d=new int [N];		
	srand((unsigned)time(NULL));
	for(int i = 0; i < N; i++){
	d[i] = rand();}
		quick_sort_od(d,0,N-1);
 high_resolution_clock::time_point t1 = high_resolution_clock::now();
	shellsort(d,N);
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
