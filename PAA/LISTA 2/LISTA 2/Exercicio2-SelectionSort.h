#include <stdio.h>
#include <iostream>
#include <vector>

class VetorSelectionSort {
private:
	std::vector<int> vetor;
public:

	void OrdenaVetor() {
		int menor, aux;
		for (int i = 0; i < vetor.size(); i++) {
			menor = i;
			for (int j = i + 1; j < vetor.size(); j++) {
				if (vetor[j] < vetor[menor]) {
					menor = j;
				}
			}
			if (menor != i) {
				aux = vetor[i];
				vetor[i] = vetor[menor];
				vetor[menor] = aux;
			}
		}
	}
	
	void ImprimeVetor() {
		for (int i = 0; i < vetor.size(); i++) {
			std::cout << "Item: " << vetor[i] << "\n";
		}
	}

	void Exercicio2() {
		vetor.push_back(5);
		vetor.push_back(6);
		vetor.push_back(2);
		vetor.push_back(4);
		vetor.push_back(8);
		vetor.push_back(1);
		ImprimeVetor();
		std::cout << "\n";
		OrdenaVetor();
		ImprimeVetor();
	}
};