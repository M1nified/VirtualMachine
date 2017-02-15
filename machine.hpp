#ifndef _VIRTUAL_
#define _VIRTUAL_

#include <cstdio>
#include "thread.hpp"

extern bool DEBUG;

/* 

	Implementacja wirtualnej maszyny pozwalaj�cej na uruchomienie kilku w�tk�w, 
	kt�re realizuj� proste instrukcje komunikacji z innymi w�tkami 
	z mo�liwo�ci� zmiany mechanizmu szeregowania kolejno�ci wykonywania w�tk�w. 
	
	Mechanizm zarz�dzania pami�ci� oparty na rejestrach. 
	Architektura docelowa: x86/x64.
 
*/

class Machine{
	private: 
		ThreadMonitor* tm;
		
		/* gdy zmieni si� 0, maszyna przestaje dzia�a� */
		int isRunning;
		
		/* prywatny konstruktor - to jest singleton */
		Machine();
		
	public: 
		static Machine* getInstance();
		void readProgram(std::vector<int>& code);
		void run();
		void halt();
};

#endif
