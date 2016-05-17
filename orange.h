#ifndef orange.h
#define orange.h

class Orange : public CitrusFruit {
	public:
		Orange(float ph) : CitrusFruit(ph){}
		const char * getName();
		float getPh();
//		void PrintTheFruits(CitrusFruit &fruit);
};

#endif