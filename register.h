#ifndef _REGISTER_
#define _REGISTER_
#define NUM_REGS 4

/*

	Normal Register

*/

class Register{
	
	private:
		unsigned registerTab [NUM_REGS];
	
	public:
		Register(){
			for(int i=0; i<NUM_REGS; i++)
				registerTab[i]=0;
		}
		// doda� wyrzucanie wyj�tk�w
		unsigned set(int numreg, unsigned value){
			if(numreg<NUM_REGS)
			{
				registerTab[numreg] = value;
				return value;
			}
			return 0;
		}
		// doda� wyrzucanie wyj�tk�w
		unsigned get(int numreg){
			if(numreg<NUM_REGS)
			{
				return registerTab[numreg];
			}
			return 0;
		}
		
};

#endif
