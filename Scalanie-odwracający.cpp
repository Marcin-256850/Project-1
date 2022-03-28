#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <chrono>
#include <ratio>
int *pom;
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
void scal(int tab[], int l, int srod, int p) 
{
	int i = l, j = srod + 1;
 
  //kopiujemy obie części do drugiej tablicy
  for(int i = l;i<=p; i++) 
    pom[i] = tab[i];  
  
  /*scalenie dwóch podtablic pomocniczych i zapisanie ich 
  we własciwej tablicy*/
  for(int k=l;k<=p;k++) 
  if(i<=srod)
    if(j <= p)
         if(pom[j]<pom[i])
             tab[k] = pom[j++];
         else
             tab[k] = pom[i++];
    else
        tab[k] = pom[i++];
  else
      tab[k] = pom[j++];
}

void sortowanie_przez_scalanie(int tab[],int l, int p)
{

	if(p<=l) return; 
	//znajdujemy srodek 
	int srod = (p+l)/2;
	//dzielimy tablice na dwie cześci
	sortowanie_przez_scalanie(tab, l, srod); 
	sortowanie_przez_scalanie(tab, srod+1, p);
	

	scal(tab, l, srod, p);
}



int main()
{		
	using namespace std::chrono;
	ofstream fout;
	fout.open("Scalanie-odwracajace.txt");
	int g=0;
	int a=0;
	int n=10000;
while(g<5)
{
		if(g==0)
	{
		while(a<100)
		{
	int *tab=new int [n];
	pom = new int[n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
quick_sort_od(tab,0,n-1);
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		sortowanie_przez_scalanie(tab,0,n-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] tab;
	delete [] pom;
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
	pom = new int[n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
quick_sort_od(tab,0,n-1);
/*    for(int i=0;i<n;i++)
   {
   	cout<<tab[i]<<endl;
	}*/
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		sortowanie_przez_scalanie(tab,0,n-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
/*    for(int i=0;i<n;i++)
   {
   	cout<<tab[i]<<endl;
	}*/
  fout<<time_span.count();
	delete [] tab;
	delete [] pom;
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
	pom = new int[n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
quick_sort_od(tab,0,n-1);
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		sortowanie_przez_scalanie(tab,0,n-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] tab;
	delete [] pom;
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
	pom = new int[n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
quick_sort_od(tab,0,n-1);
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		sortowanie_przez_scalanie(tab,0,n-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] tab;
	delete [] pom;
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
	pom = new int[n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
quick_sort_od(tab,0,n-1);
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		sortowanie_przez_scalanie(tab,0,n-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] tab;
	delete [] pom;
	fout<<endl;
	   a++;
}

	}
g++;	//	cout<<tab[i]<<" ";
}
fout.close();
return 0;
}
