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
void quick_sort(int *tab, int l, int p)
{
	if(p <= l) return;
	
	int i = l - 1, j = p + 1, 
	pivot = tab[(l+p)/2]; //wybieramy punkt odniesienia
	
	while(1)
	{
		/*szukamy elementu wiekszego lub rownego pivotowi stojacego po prawej stronie
		*/
		while(pivot>tab[++i]);
		/*szukamy elementu mniejszego lub rownego pivotowi stojacego po lewej stronie
		*/
		while(pivot<tab[--j]);

		if( i <= j) //jesli i i j mina się przerywamy petle
			swap(tab[i],tab[j]);
		else
			break;
	}

	if(j > l)
	quick_sort(tab, l, j);
	if(i < p)
	quick_sort(tab, i, p);
}

int main()
{
	using namespace std::chrono;		
	ofstream fout;
	fout.open("Quicksort-odwracajace.txt");
	int g=0;
	int a=0;
	int n=10000;
while(g<5)
{
		if(g==0)
	{
		int *tab=new int [n];

		while(a<100)
		{
	int *tab=new int [n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
		quick_sort_od(tab,0, n-1);
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		quick_sort(tab,0,n-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] tab;
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
	int *tab=new int [n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
		quick_sort_od(tab,0, n-1);
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		quick_sort(tab,0,n-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] tab;
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
	int *tab=new int [n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
		quick_sort_od(tab,0, n-1);
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		quick_sort(tab,0,n-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] tab;
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
	int *tab=new int [n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
		quick_sort_od(tab,0, n-1);
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		quick_sort(tab,0,n-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] tab;
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
	int *tab=new int [n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
		quick_sort_od(tab,0, n-1);
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		quick_sort(tab,0,n-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] tab;
	fout<<endl;
	   a++;
}

	}
g++;
}
fout.close();
return 0;
}
