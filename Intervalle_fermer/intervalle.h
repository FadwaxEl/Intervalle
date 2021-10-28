#pragma once
#include <iostream>
using namespace std;

namespace INterv {
	class Intervalle
	{
	private:
		double minimum;
		double maximum;
	public:
		Intervalle(double a,double b);
		double min()const;
		double max()const;
		bool operator[](double m)const;
		void consulter();
		Intervalle& operator|(Intervalle &m);
		bool operator=(Intervalle m);
		Intervalle& operator+(Intervalle& m);


	};
}


