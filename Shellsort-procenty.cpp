#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>
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
 		int N=10000;
		int a=0,o=0;
			ofstream fout;
fout.open("Shellsort-procenty.txt");
	float opcje[6]={0.25,0.5,0.75,0.95,0.99,0.997};
	int g=0;

while(g<5)
{
	if(g==0)
	{

	while(o<6){
		a=0;
				fout<<endl<<"Opcja numer"<<o<<endl<<endl;
		while(a<100)
		{
	int *d=new int [N];
	srand((unsigned)time(NULL));
	for(int i = 0; i < N; i++) d[i] = rand();
	

			quick_sort(d,0,N-1);
		for(int i=(N-1)*opcje[o];i<N;i++)
		{
		d[i]=rand();
	}
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		shellsort(d,N-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] d;
	fout<<endl;
	   a++;
}
o++;
}
	}else if(g==1)
	{
		N=50000;
		o=0;
		fout<<endl<<"Opcja numer"<<o<<endl<<endl;
	while(o<6){
		a=0;
				fout<<endl<<"Opcja numer"<<o<<endl<<endl;
		while(a<100)
		{
	int *d=new int [N];
	srand((unsigned)time(NULL));
	for(int i = 0; i < N; i++) d[i] = rand();
	

			quick_sort(d,0,N-1);
		for(int i=(N-1)*opcje[o];i<N;i++)
		{
		d[i]=rand();
	}
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		shellsort(d,N-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] d;
	fout<<endl;
	   a++;
}
o++;
}
}else if(g==2)
{
	N=100000;
		o=0;
	while(o<6){
		a=0;
		fout<<endl<<"Opcja numer"<<o<<endl<<endl;
		while(a<100)
		{
	int *d=new int [N];
	srand((unsigned)time(NULL));
	for(int i = 0; i < N; i++) d[i] = rand();
	

			quick_sort(d,0,N-1);
		for(int i=(N-1)*opcje[o];i<N;i++)
		{
		d[i]=rand();
	}
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		shellsort(d,N-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] d;
	fout<<endl;
	   a++;
}
o++;
}
}else if(g==3)
{
		N=500000;
		o=0;
	while(o<6){
		a=0;
		fout<<endl<<"Opcja numer"<<o<<endl<<endl;
		while(a<100)
		{
	int *d=new int [N];
	srand((unsigned)time(NULL));
	for(int i = 0; i < N; i++) d[i] = rand();
	

			quick_sort(d,0,N-1);
		for(int i=(N-1)*opcje[o];i<N;i++)
		{
		d[i]=rand();
	}
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		shellsort(d,N-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] d;
	fout<<endl;
	   a++;
}
o++;
}
}else if(g==4)
{
		N=1000000;
		o=0;
	while(o<6){
		fout<<endl<<"Opcja numer"<<o<<endl<<endl;
		a=0;
		while(a<100)
		{
	int *d=new int [N];
	srand((unsigned)time(NULL));
	for(int i = 0; i < N; i++) d[i] = rand();
	

			quick_sort(d,0,N-1);
		for(int i=(N-1)*opcje[o];i<N;i++)
		{
		d[i]=rand();
	}
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
		
		shellsort(d,N-1);

 high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  fout<<time_span.count();
	delete [] d;
	fout<<endl;
	   a++;
}
o++;
}
}
g++;
}
fout.close();
  cout << endl;

  return 0;
}
