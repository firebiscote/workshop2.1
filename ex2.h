#ifndef DEF_EX2
#define DEF_EX2

class CLcalcul {
public:
	CLcalcul(void);
	CLcalcul(int nb);
	void carre();
	void setN(int nb);
	int getN(void);

private:
	int c_n;
	void ini(int);
	static int cpteObj;
};

#endif
