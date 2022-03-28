#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <chrono>
#include <ratio>
using namespace std;

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
	float opcje[6]={0.25,0.5,0.75,0.95,0.99,0.997};
	using namespace std::chrono;
	ofstream fout;
	fout.open("Quicksort-procenty.txt");
	int g=0;
	int a=0,o=0;
	int n=10000;
while(g<5)
{
		if(g==0)
	{
		o=0;
	while(o<6){
		fout<<endl<<"Opcja numer"<<o<<endl<<endl;
		a=0;
		while(a<100)
		{
	int *tab=new int [n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
	

			quick_sort(tab,0,n-1);
		for(int i=(n-1)*opcje[o];i<n;i++)
		{
		tab[i]=rand();
	}
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		quick_sort(tab,0,n-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] tab;
	fout<<endl;
	   a++;
}
o++;
}
	}else if(g==1)
	{       
			n=50000;
		o=0;
	while(o<6){
		fout<<endl<<"Opcja numer"<<o<<endl<<endl;
		a=0;
		while(a<100)
		{
	int *tab=new int [n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
	

			quick_sort(tab,0,n-1);
		for(int i=(n-1)*opcje[o];i<n;i++)
		{
		tab[i]=rand();
	}
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		quick_sort(tab,0,n-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] tab;
	fout<<endl;
	   a++;
}
o++;
}
	}else if(g==2)
	{
				n=100000;
		o=0;
	while(o<6){
		fout<<endl<<"Opcja numer"<<o<<endl<<endl;
		a=0;
		while(a<100)
		{
	int *tab=new int [n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
	

			quick_sort(tab,0,n-1);
		for(int i=(n-1)*opcje[o];i<n;i++)
		{
		tab[i]=rand();
	}
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		quick_sort(tab,0,n-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] tab;
	fout<<endl;
	   a++;
}
o++;
}
	}else if(g==3)
	{
				n=500000;
		o=0;
	while(o<6){
		fout<<endl<<"Opcja numer"<<o<<endl<<endl;
		a=0;
		while(a<100)
		{
	int *tab=new int [n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
	

			quick_sort(tab,0,n-1);
		for(int i=(n-1)*opcje[o];i<n;i++)
		{
		tab[i]=rand();
	}
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		quick_sort(tab,0,n-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] tab;
	fout<<endl;
	   a++;
}
o++;
}
	}else if(g==4)
	{
				n=1000000;
		o=0;
	while(o<6){
		fout<<endl<<"Opcja numer"<<o<<endl<<endl;
		a=0;
		while(a<100)
		{
	int *tab=new int [n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
	

			quick_sort(tab,0,n-1);
		for(int i=(n-1)*opcje[o];i<n;i++)
		{
		tab[i]=rand();
	}
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		quick_sort(tab,0,n-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] tab;
	fout<<endl;
	   a++;
}
o++;
}
}
g++;
}
fout.close();
return 0;
}
