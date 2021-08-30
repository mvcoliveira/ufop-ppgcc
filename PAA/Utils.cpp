#include <stdio.h>
#include <iostream>
#include <vector>
#include <concepts>
#include <string>

	void ordenaVetorBubbleSort(std::vector<int>& vetor) {
		bool troca = true;
		unsigned int i;
		while (troca) {
			troca = false;

			for (i = 0; (i < vetor.size() - 1); i++) {
				if (vetor[i] > vetor[i + 1]) {
					troca = true;
					std::swap(vetor[i], vetor[i + 1]);
				}
			}
		}
	}

	void OrdenaVetorSelectionSort(std::vector<int>& vetor) {
		int menor;
		for (unsigned int i = 0; i < vetor.size(); i++) {
			menor = i;
			for (unsigned int j = i + 1; j < vetor.size(); j++) {
				if (vetor[j] < vetor[menor]) {
					menor = j;
				}
			}
			if (menor != i) {
				std::swap(vetor[i], vetor[menor]);
			}
		}
	}

	int SequentialSearch2(std::vector<int> v, int k) {
		v.push_back(k);
		unsigned int i = 0;
		while (v[i] != k) {
			i++;
		}
		if (i < (v.size() - 1)) return i;
		else return -1;
	}

	int BruteForceStringMatch(std::string texto, std::string busca) {

		unsigned int j;
		unsigned int i;
		for (i = 0; i < texto.size(); i++) {
			j = 0;
			while (j < busca.size() && busca[j] == texto[i + j]) {
				j++;
			}
				if (j == busca.size()) return i;

		}
		return -1;
	}
	void ImprimeVetor(std::vector<int> vetor) {
		
		for (auto i : vetor)
			std::cout << " " << i;
		std::cout << "\n";
	}
