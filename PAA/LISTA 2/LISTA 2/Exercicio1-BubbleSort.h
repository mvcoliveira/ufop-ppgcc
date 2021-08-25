#include <iostream>
#include<stdio.h>
#include <vector>
class VetorBubbleSort {
private:
	std::vector<int> vetor;

public:
	void ordenaVetor() {
		bool troca = true;
		int aux, i;
		while (troca) {
			troca = false;

			for (i = 0; i < vetor.size()-1; i++) {
				if (vetor[i] > vetor[i + 1]) {
					troca = true;
					aux = vetor[i];
					vetor[i] = vetor[i + 1];
					vetor[i + 1] = aux;
				}
			}
		}
	}
	
	void ImprimeVetor() {
		for (int i = 0; i < (vetor.size()); i++) {
			std::cout << "Item: " << vetor[i] << "\n";
		}
	}
	void Exercicio1() {
		vetor.push_back(3);
		vetor.push_back(2);
		vetor.push_back(1);
		vetor.push_back(0);
		ImprimeVetor();
		ordenaVetor();
		ImprimeVetor();

	}
};





