#include <iostream>
using namespace std;

#include "Game/Game.h"

int main() {
    Game jogo; //Instanciando o game
    int choice; //Escolha de menu

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Criar Personagens\n";
        cout << "2. Clonar Personagens\n";
        cout << "3. Listar Personagens Originais\n";
        cout << "4. Listar Personagens Clonados\n";
        cout << "5. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> choice;

        switch (choice) {
            case 1:
                jogo.criarPersonagens();
            break;
            case 2:
                jogo.clonarPersonagens();
            break;
            case 3:
                jogo.listarPersonagensOriginais();
            break;
            case 4:
                jogo.listarPersonagensClonados();
            break;
            case 5:
                cout << "\nSaindo do programa." << endl;
            return 0;
            default:
                cout << "\nOpcao invalida. Tente novamente." << endl;
            break;
        }
    }
}