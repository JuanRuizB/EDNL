#include <iostream>
#include <cstring>

#include "alg_grafo_E-S.h"
#include "alg_grafo_E-S.cpp"
#include "alg_grafoPMC.h"
#include "grafoPMC.h"


int main()
{

	std::string a = "grafo2.txt";
	GrafoP<unsigned> G(a);
	vector<typename GrafoP<unsigned>::vertice> P;
	GrafoP<unsigned>::vertice V = 0;
	std::cout << "hola";
	//vector<unsigned> H = DijkstraInv(G,V,P);
	//vector<unsigned> X = Dijkstra(G,V,P);
	//bool ciclo = esAciclico(G);

	
	//viajeZuelandes(G, ciudades, carreteras, 4)
	std::cout << "Matriz de costes:\n" << G.diametro() << std::endl;
	//std::cout << "\nMatriz de costes:\n" << X << std::endl;
	//std::cout << "Matriz de coste:\n" << viajeZuelandes(G, ciudades, carreteras, 4) << std::endl;
}

