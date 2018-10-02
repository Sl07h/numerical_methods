#include "head.h"


// Vectors F,  y = L\F,  x = L'\y
class vect {

public:
	
	void getVectX(vector <real> &x) { x = F; };
	int readVectFromFile(std::ifstream& fin, int size);
	void generateVectX(int size);
	void writeVectToFile(std::ofstream& fout, char *str);
	void writexCompError(std::ofstream& fout, char *str);
	bool isXcorrect();


protected:
	vector <real> F;
};