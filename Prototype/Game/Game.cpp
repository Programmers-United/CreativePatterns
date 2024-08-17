#include "Game.h"

Game::Game() : hasCharacters(false), hasClones(false) {}

void Game::criarPersonagens() {
    guerreiroPrototype = make_unique<Guerreiro>("Conan", "Um guerreiro forte e valente.", "Forca Bruta");
    magoPrototype = make_unique<Mago>("Merlin", "Um mago sabio e poderoso.", "Feiticeiro");
    ninjaPrototype = make_unique<Ninja>("Shuriken", "Um ninja agil e furtivo.", "Shuriken");

    hasCharacters = true;
    cout << "\nPersonagens criados com sucesso." << endl;
}

void Game::clonarPersonagens() {
    if (hasCharacters) {
        guerreiroClone = guerreiroPrototype->clone();
        magoClone = magoPrototype->clone();
        ninjaClone = ninjaPrototype->clone();

        static_cast<Guerreiro*>(guerreiroClone.get())->setNameClone("Conan Clone");
        static_cast<Mago*>(magoClone.get())->setNameClone("Merlin Clone");
        static_cast<Ninja*>(ninjaClone.get())->setNameClone("Shuriken Clone");

        hasClones = true;
        cout << "\nPersonagens clonados com sucesso." << endl;
    } else {
        cout << "\nCrie os personagens antes de cloná-los." << endl;
    }
}

void Game::listarPersonagensOriginais() const {
    if (hasCharacters) {
        cout << "\nInformacao do Personagem: Guerreiro" << endl;
        guerreiroPrototype->info();

        cout << "\nInformacao do Personagem: Mago" << endl;
        magoPrototype->info();

        cout << "\nInformacao do Personagem: Ninja" << endl;
        ninjaPrototype->info();
    } else {
        cout << "\nNenhum personagem criado ainda." << endl;
    }
}

void Game::listarPersonagensClonados() const {
    if (hasClones) {
        cout << "\nInformacao do Personagem Clonado: Guerreiro" << endl;
        guerreiroClone->info();

        cout << "\nInformacao do Personagem Clonado: Mago" << endl;
        magoClone->info();

        cout << "\nInformacao do Personagem Clonado: Ninja" << endl;
        ninjaClone
        ->info();
    } else {
        cout << "\nNenhum personagem clonado ainda." << endl;
    }
}