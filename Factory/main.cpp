#include <iostream>
#include <memory>

// Produto
class Brinquedo {
public:
    virtual void brincar() = 0;
    virtual ~Brinquedo() {} // Destrutor
};

// Produtos concretos
class Ursinho : public Brinquedo {
public:
    void brincar() override {
        std::cout << "Abraçando o ursinho" << std::endl;
    }
};

class Carrinho : public Brinquedo {
public:
    void brincar() override {
        std::cout << "Dirigindo o carro" << std::endl;
    }
};

// Criador
class LojaDeBrinquedos {
public:
    virtual std::unique_ptr<Brinquedo> criarBrinquedo() = 0; // Metodo abstrato
    void ordenarBrinquedo(){
        std::unique_ptr<Brinquedo> brinquedo = criarBrinquedo();
    }

    virtual ~LojaDeBrinquedos() {} // Destrutor
};

// Criadores concretos
class LojaDeCarrinhos : public LojaDeBrinquedos {
public:
    std::unique_ptr<Brinquedo> criarBrinquedo() override {
        return std::make_unique<Carrinho>();
    }
};

class LojaDeUrsinhos : public LojaDeBrinquedos {
public:
    std::unique_ptr<Brinquedo> criarBrinquedo() override {
        return std::make_unique<Carrinho>();
    }
};

// Cliente
int main() {
    std::unique_ptr<LojaDeBrinquedos> lojaDeUrsinhos = std::make_unique<LojaDeUrsinhos>();
    lojaDeUrsinhos->ordenarBrinquedo();  // Output: Hugging the Teddy Bear

    std::unique_ptr<LojaDeBrinquedos> lojaDeCarrinhos = std::make_unique<LojaDeCarrinhos>();
    lojaDeCarrinhos->ordenarBrinquedo();  // Output: Driving the Toy Car

    return 0;
}