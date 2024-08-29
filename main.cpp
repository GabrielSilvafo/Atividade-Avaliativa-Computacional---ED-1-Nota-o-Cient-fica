#include <iostream>
#include <iomanip>

void menu() {
    std::cout << "\n===== Menu =====\n";
    std::cout << "1) Adicao\n";
    std::cout << "2) Subtracao\n";
    std::cout << "3) Multiplicacao\n";
    std::cout << "4) Divisao\n";
    std::cout << "5) Sair\n";
    std::cout << "Selecione uma opcao: ";
}

int main() {
    double valor1, valor2, resultado;
    int opcao;

    do {
        std::cout << "Digite o primeiro valor em notacao cientifica (ex: 1.23e4): ";
        std::cin >> valor1;
        std::cout << "Digite o segundo valor em notacao cientifica (ex: 4.56e-3): ";
        std::cin >> valor2;

        menu();
        std::cin >> opcao;


        switch (opcao) {
            case 1:
                resultado = valor1 + valor2;
                std::cout << "Resultado da adicao: " << std::scientific << resultado << "\n";
                break;
            case 2:
                resultado = valor1 - valor2;
                std::cout << "Resultado da subtracao: " << std::scientific << resultado << "\n";
                break;
            case 3:
                resultado = valor1 * valor2;
                std::cout << "Resultado da multiplicacao: " << std::scientific << resultado << "\n";
                break;
            case 4:
                if (valor2 != 0) {
                    resultado = valor1 / valor2;
                    std::cout << "Resultado da divisao: " << std::scientific << resultado << "\n";
                } else {
                    std::cout << "Erro: Divisao por zero!\n";
                }
                break;
            case 5:
                std::cout << "Saindo...\n";
                break;
            default:
                std::cout << "Opcao invalida! Tente novamente.\n";
                break;
        }

    } while (opcao != 5);

    return 0;
}
