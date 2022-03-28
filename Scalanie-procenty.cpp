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
	float opcje[6]={0.25,0.5,0.75,0.95,0.99,0.997};
	using namespace std::chrono;
	ofstream fout;
	fout.open("Scalanie-procenty.txt");
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
	pom = new int [n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
	

		sortowanie_przez_scalanie(tab,0,n-1);
		for(int i=(n-1)*opcje[o];i<n;i++)
		{
		tab[i]=rand();
	}
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
	pom = new int [n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
	

		sortowanie_przez_scalanie(tab,0,n-1);
		for(int i=(n-1)*opcje[o];i<n;i++)
		{
		tab[i]=rand();
	}
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
	pom = new int [n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
	

			sortowanie_przez_scalanie(tab,0,n-1);
		for(int i=(n-1)*opcje[o];i<n;i++)
		{
		tab[i]=rand();
	}
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
	pom = new int [n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
	

		sortowanie_przez_scalanie(tab,0,n-1);
		for(int i=(n-1)*opcje[o];i<n;i++)
		{
		tab[i]=rand();
	}
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
	pom = new int [n];
	srand((unsigned)time(NULL));
	for(int i = 0; i < n; i++) {
	tab[i] = rand();
}
	

		sortowanie_przez_scalanie(tab,0,n-1);
		for(int i=(n-1)*opcje[o];i<n;i++)
		{
		tab[i]=rand();
	}
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
o++;
}
}
g++;
}
fout.close();
return 0;
}
