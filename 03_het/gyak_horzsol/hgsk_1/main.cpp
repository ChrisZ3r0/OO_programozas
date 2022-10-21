#include <iostream>
#include "Decl.hpp"

void sor_minta::kiir(int i)
{
	for (int j=0; j<ism; j++)			/* Soron belüli kiírás */
	{
		if (i<sor) cout << kar;
		else cout << "-";
	}
}

void sor_minta::v_i()
{
	do {
		cout << "\n Kérem a változtatás mértékét [+/-]: ";
		cin >> v_m;
		} while((ism+v_m)<=0);
	ism+=v_m;
}
 
void mind(sor_minta nyzj, sor_minta es, sor_minta zzj)
{
	cout << "\n" << endl;
	for (int i=0; i<SK; i++)			/* Sorok kiírása */
	{
		nyzj.kiir(i); es.kiir(i); zzj.kiir(i);
		cout << "\n" << endl;
	}
}
 
int main(void)
{
	sor_minta nyzj('[',2,2), es('&',3,3), zzj(']',4,1), alap;		/* Objektumok példányosítása, beállítása */
	alap.elemek(); es.elemek(); cout << "\n" << endl; 
	mind(nyzj,es,zzj);
	es.v_i();
	mind(nyzj,es,zzj);
	return 0;
}