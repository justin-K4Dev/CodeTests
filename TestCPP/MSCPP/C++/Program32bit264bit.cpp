#include "stdafx.h"

namespace Program32Bit264Bit
{
	void print_type_size()
	{
		printf("char : %d byte\n", sizeof(char));
		printf("short : %d byte\n", sizeof(short));
		printf("int : %d byte\n",sizeof(int));
		printf("long int : %d byte\n",sizeof(long int));
		printf("long long int : %d byte\n",sizeof(long long int));
		printf("float : %d byte\n",sizeof(float));
		printf("double : %d byte\n",sizeof(double));
		printf("long double : %d byte\n",sizeof(long double));
		printf("\n");
		printf("(void*) : %d byte\n",sizeof(void *));//32bit: 4byte, 64bit: 8byte
		printf("(int*) : %d byte\n", sizeof(int *));//32bit: 4byte, 64bit: 8byte
		printf("\n");
		printf("INT_MAX = %d\n", INT_MAX);
		printf("UINT_MAX = %u\n", UINT_MAX);
		printf("LONG_MAX = %ld\n", LONG_MAX);
		printf("ULONG_MAX = %lu\n", ULONG_MAX);

		system("pause");

		/*
		output:
			char : 1 byte
			short : 2 byte
			int : 4 byte
			long int : 4 byte
			long long int : 8 byte
			float : 4 byte
			double : 8 byte
			long double : 8 byte

			(void*) : 8 byte
			(int*) : 8 byte

			INT_MAX : 2,147,483,647
			UINT_MAX : 4,294,967,295
			LONG_MAX : 2,147,483,647
			ULONG_MAX : 4,294,967,295
		*/
	}

	void Test()
	{
		//print_type_size();
	}
}