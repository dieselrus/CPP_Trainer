#include <iostream>
#include "MemReader.h"

void main()
{
	//MemReader* mem = new MemReader("generals.exe");
	MemReader* mem = new MemReader("archeage.exe");
	mem->Open();
	printf("PID: %X\n", mem->getPID());
	printf("Test float: %f\n", mem->Read(0x0268F14, 4).toFloat());

	float healts = 100.f;
	mem->Write(&healts, 0x0268F14, 4);
	system("PAUSE");
}