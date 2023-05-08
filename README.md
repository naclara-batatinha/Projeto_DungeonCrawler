# Projeto-Dungeon Crawler

## Introdução

    Foi pedido um jogo em C 

    
## Jogo

    - Instruções 
    O jogo é do estilo aventura/puzzle onde o objetivo é o jogador conseguir passar de três fases. Em cada fase o jogador deve se movimentar para pegar uma chave para abrir a porta fechada.
        O jogador possui os seguintes comando:
            W: O jogador movimenta uma unidade para cima;
            A: O jogador movimenta uma unidade para esquerda;
            S: O jogador movimenta uma unidade para baixo;
            D: O jogador movimenta uma unidade para direita;
            I: O jogador interage com o objeto que está em cima.
        O jogo possui os seguintes elementos nas fases:
            &: Símbolo que representa o jogador.
            *: Símbolo que representa uma parede, o jogador ao se movimentar não pode passar pela parede.
            @: Símbolo que representa a chave para abrir a porta para finalizar a fase, a porta abre no momento que o jogador interage com a chave.
            D: Símbolo que representa a porta fechada.
            =: Símbolo que representa a porta aberta quando o jogador interage com a chave.
            O: Símbolo que representa um botão que o usuário pode interagir, o botão fica no chão e o jogador deve ficar em cima dele para poder interagir.
            #: Símbolo que representa um espinho. A fase é reiniciada quando o jogador toca no espinho, caso a fase seja reiniciada três vezes, o jogo volta para o menu principal.
            >: Símbolo que representa um teletransporte. O teletransporte sempre deve vir em pares, quando o jogador toca em um ele é transportado para o outro e vice-versa.
            ¬: Símbolo que representa o monstro nível 1. O mostro tem um movimento aleatório, logo, ele movimenta um bloco para cima ou para direita ou para esquerda ou para baixo. O mostro sempre faz uma movimentação depois do usuário se movimentar ou interagir com um objeto.
            K: Símbolo que representa o monstro nível 2. O mostro nível dois tem uma inteligência de se movimentar na direção do jogador. O monstro não precisa saber desviar de obstáculos, ele sempre vai andar em linha reta em direção do jogador.
        O jogo possui um total de 8 telas:
            Menu Principal: Menu com com três escolhas para o usuário (Jogar, Tutorial, Sair);
            Tutorial: Texto ensinando o jogador a jogar o jogo;
            Sair: Texto de despedida e encerramento do programa;
            Fase 1: A Fase 1 é inicializada quando o jogador seleciona a opção Jogar no Menu Principal;
            Fase 2: A Fase 2 é inicializada quando o jogador termina a Fase 1;
            Fase 3: A Fase 3 é inicializada quando o jogador termina a Fase 2;
            Vitória: Texto elogiando o jogador por ter conseguido terminar o jogo, depois dessa tela o jogador volta para o Menu Principal. Essa tela só pode ser acessada se o jogador finalizar a Fase 3;
            Derrota: Texto caçoando o jogador, depois dessa tela o jogador volta para o Menu Principal. Essa tela só pode ser acessada quando o jogador perde em uma fase. 

    - Fase 1
        Essa fase possui uma dimensão de 15x15 e possui os seguintes elementos: jogador, parede, chave e porta.

    - Fase 2
        Essa fase possui uma dimensão de 30x30 e possui os seguintes elementos: todos da Fase 1, botão, espinhos e mostro nível 1.

    - Fase 3
        Essa fase possui uma dimensão de 60x60 e possui os seguintes elementos: todos da Fase 2, teletransporte e monstro nível 2.

## Participantes

### Ana Clara Oliveira Baratinha 

[![Gmail](https://img.shields.io/badge/Gmail-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:)

### Paulo Victor Frazão 

[![Github](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/Pvictorfrazao) 


### Enzo Guimarães Bevilaqua

[![Github](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/EnzoGuimaraesBevilaqua) 
