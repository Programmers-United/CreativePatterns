#ifndef GAME_H
#define GAME_H

#include <memory>
#include "../ConcretPatterns/Guerreiro.h"
#include "../ConcretPatterns/Mago.h"
#include "../ConcretPatterns/Ninja.h"
using namespace std;

class Game {
private:
    //Guerreiro
    unique_ptr<Prototype<Guerreiro>> guerreiroPrototype; //Classe de guerreiro
    unique_ptr<Prototype<Guerreiro>> guerreiroClone; //Classe de guerreiro Clone

    //Ninja
    unique_ptr<Prototype<Ninja>> ninjaPrototype; //Classe de Ninja
    unique_ptr<Prototype<Ninja>> ninjaClone; //Classe de Ninja Clone

    //Mago
    unique_ptr<Prototype<Mago>> magoPrototype; //Classe de mago
    unique_ptr<Prototype<Mago>> magoClone; //Classe de mago clone

    bool hasCharacters; //Se os pesonagens foram criados
    bool hasClones; //Se os personagens foram clonados

public:
    Game();

    void criarPersonagens();
    void clonarPersonagens();
    void listarPersonagensOriginais() const;
    void listarPersonagensClonados() const;
};

#endif //GAME_H