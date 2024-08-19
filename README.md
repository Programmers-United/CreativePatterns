# CreativePatterns
Software Design Patterns project, where algorithms will be developed using creative patterns

## Padrões Criacionais

### Singleton

### Builder

### Factory Method

### Abastract Factory

### Propotype

<!-- Resumo -->
<p>Demonstração de uma aplicação do padrão de projeto Prototype em C++ para criar e gerenciar diferentes tipos de personagens, como Guerreiro, Mago e Ninja. O padrão Prototype é um padrão criacional que permite a clonagem de objetos existentes sem depender das suas classes concretas, facilitando a criação de novos objetos a partir de um modelo ou protótipo.</p>

<details>
  <summary>Ver mais...</summary>

  ### Estrutura do código
  ##### 1. Prototype.h
  Esta é a classe base abstrata que define a interface para o padrão Prototype. Ela declara um método virtual puro clone() que deve ser implementado por todas as classes derivadas. O método clone() é responsável por criar uma cópia do objeto atual.

  ##### 2. Guerreiro.h && Guerreiro.cpp
  Representa um tipo específico de personagem. Herda de Prototype< Guerreiro >, implementando os métodos clone() e info(). A classe Guerreiro inclui atributos como name, description, e power, e permite a clonagem e a modificação de personagens.

  ##### 3. Mago.h && Mago.cpp
  Similar à classe Guerreiro, a classe Mago representa outro tipo de personagem, com atributos como name, description, e typeMago. Também implementa a clonagem e exibição das informações.

  ##### 4. Ninja.h && Ninja.cpp
Adiciona um novo tipo de personagem ao sistema, seguindo o mesmo padrão das classes Guerreiro e Mago. Permite a clonagem e a modificação dos atributos.

  ##### 5. main.cpp
  O ponto de entrada do programa. Demonstra a criação de personagens, clonagem e exibição das informações. Um menu interativo permite criar, clonar e listar personagens.

  ### Como funciona:
  O padrão Prototype permite que novos personagens sejam criados a partir de um protótipo existente. As classes derivadas (Guerreiro, Mago, Ninja) implementam o método clone() para criar uma cópia do objeto atual. O sistema pode então modificar e exibir essas cópias sem precisar criar novos objetos do zero, proporcionando flexibilidade e eficiência na criação e gestão de personagens.
</details>

### Injeção de Dependências

<!-- Resumo -->
<p>Demonstração da injeção de dependência em C++ usando o Boost.DI. O sistema gerencia um carro que pode utilizar diferentes tipos de motores, como um motor a gasolina ou um motor elétrico, sem precisar modificar a classe `HyperCar`.</p>

<details>
  <summary>Ver mais...</summary>

### Pré-requisitos

Certifique-se de que você tenha as seguintes ferramentas instaladas:

- [CMake](https://cmake.org/) (versão 3.10 ou superior)
- [Boost](https://www.boost.org/) (incluindo a biblioteca Boost.DI)
- Um compilador C++ que suporte C++14 ou superior

### Passos para Configurar o Projeto

#### 1. Baixar e Instalar o Boost

1. Faça o download do Boost a partir do [site oficial](https://www.boost.org/users/download/).
2. Extraia o arquivo para um diretório de sua escolha.
3. Opcional: Se quiser compilar as bibliotecas (não necessário para Boost.DI), siga as instruções do arquivo `README` dentro do diretório do Boost.

#### 2. Configurar o CMakeLists.txt

No seu projeto, você deve configurar o arquivo `CMakeLists.txt` para incluir o Boost e o Boost.DI:

```cmake
cmake_minimum_required(VERSION 3.10)
project(CarSystem)

set(CMAKE_CXX_STANDARD 14)

# Defina o caminho para o Boost
set(BOOST_ROOT "caminho/para/boost")
set(BOOST_INCLUDE_DIRS "${BOOST_ROOT}")
set(BOOST_LIBRARY_DIRS "${BOOST_ROOT}/stage/lib")

# Adicione o diretório include do Boost
include_directories(${BOOST_INCLUDE_DIRS})

# Adicione as bibliotecas Boost necessárias
find_package(Boost REQUIRED)

add_executable(CarSystem main.cpp src/Car.cpp src/Engines/PetrolEngine.cpp src/Engines/ElectricEngine.cpp)

# Linkar as bibliotecas Boost ao projeto
target_link_libraries(CarSystem ${Boost_LIBRARIES})
```

#### 3. Configurar a Variável de Ambiente no CLion (ou outra IDE)
Se você estiver usando o CLion, defina o caminho para o Boost nas configurações do CMake:

1. Vá em Settings > Tools > CMake.
2. Em CMake Options, adicione:
```
-DBOOST_ROOT="caminho/para/boost"
```
3. Após isso é somente compilar e executar o código

</details>
