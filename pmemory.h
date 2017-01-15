#ifndef _PMEM_
#define _PMEM_
#include <cstdio>
#include <vector>
/*

	Pami�� programu

*/

class ProgramMemory{
	
	private:
		std::vector<int> program;
		/* program counter */
		int pc;
		int psize;
	
	public:
		// wczytanie programu do pami�ci
		int read(){
			// FIXME - doda� w�asciwe wczytywanie programu i okreslanie ilosci instrukcji
			program.push_back(0x1064); 
			program.push_back(0x11C8);
			program.push_back(0x2201);
			program.push_back(0x0000);
			pc = 0;
			psize = program.size();
		}
		// zwraca pojedyncz� instrukcj�
		int fetch()
		{
			if(pc<psize)
				return program[ pc++ ];
			else
				return 0x0000;
		}
};

#endif
