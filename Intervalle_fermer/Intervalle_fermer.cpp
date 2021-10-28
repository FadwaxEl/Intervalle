#include "Intervalle.h"
using namespace INterv;
int main() {
	/*---------------------------------------------------*/
          Intervalle s(1, 4);
	      Intervalle s2(4, 7);
		  //OPERATEUR DE L'UNION
	      Intervalle s3 = s | s2;
    /*----------------------------------------------------*/
		  cout << "\n--------------------- Affichage de s3------------------\n" << endl;
	    s3.consulter();
		  cout << "\n--------------------- Affichage de s ------------------\n" << endl;
	    s.consulter();
	          cout << "le munimum est " << s.min() << endl;
	          cout << "le maximum est " << s.max() << endl;

	          cout << s[3] << endl;

	//Intervalle s4(0, 5
	cout << "l'intervalle resultant de l'intersection";

	Intervalle s5 = s + s2;
	s5.consulter();
	return 0;
}