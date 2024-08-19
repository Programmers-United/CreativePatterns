#include <boost/di.hpp>
#include "Receptor/HyperCar.h"
#include "Service//IEngine.h"
#include "Concret-Service/EletricEngine.h"
#include "Concret-Service/PetrolEngine.h"
#include <iostream>
using namespace std;

// Função para mostrar o menu
void showMenu() {
    cout << "----- Hypercar Menu -----" << endl;
    cout << "1. Dirigir o Hypercar" << endl;
    cout << "2. Listar o motor em uso" << endl;
    cout << "3. Mudar motor em uso" << endl;
    cout << "0. Sair" << endl;
    cout << "---------------------------" << endl;
}

int main() {
    namespace di = boost::di;

    auto injector = di::make_injector(
        di::bind<IEngine>().to<PetrolEngine>()
    );

    auto car = injector.create<shared_ptr<HyperCar>>();

    int choice;
    do {
        showMenu();
        cout << "Digite sua escolha: ";
        cin >> choice;

        switch (choice) {
            case 1:
                car->drive();
            break;
            case 2: {
                string engineType = car->getEngineType();
                cout << "\nEngine em uso: " << engineType << "\n" << endl;
                break;
            }
            case 3: {
                cout << "Painel de controle: \n 1 para Motor a combustao; \n 2 para Motor Eletrico: ";
                int engineChoice;
                cin >> engineChoice;

                if (engineChoice == 1) {
                    car->changeEngine(std::make_shared<PetrolEngine>());
                } else if (engineChoice == 2) {
                    car->changeEngine(std::make_shared<EletricEngine>());
                } else {
                    cout << "\nOpcao invalida." << std::endl;
                }

                string engineType = car->getEngineType();
                cout << "\nEngine escolhida: " << engineType << endl;
                break;
            }
            case 0:
                cout << "Saindo..." << endl;
            break;
            default:
                cout << "Opcao invalida." << endl;
        }
    } while (choice != 0);
    return 0;
}