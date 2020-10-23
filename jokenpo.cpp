#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

inicio:
    cout << "Escolha um numero"
         << "\n";
    cout << "1 - PEDRA"
         << "\n"
         << "2 - PAPEL"
         << "\n"
         << "3 - TESOURA"
         << "\n"
         << "\n";
    int player;
    int pc;
    cin >> player;
    cout << "\n";
    pc = rand() % 3;
    if (player == 1)
    {
        cout << "VOCE = PEDRA"
             << "\n";
    }
    else if (player == 2)
    {
        cout << "VOCE = PAPEL"
             << "\n";
    }
    else if (player == 3)
    {
        cout << "VOCE = TESOURA"
             << "\n";
    }
    else
    {
        cout << "[ERROR]"
             << "\n";
        goto repeat;
    }

    if (pc == 1)
    {
        cout << "PC = PEDRA "
             << "\n"
             << "\n";
    }
    else if (pc == 2)
    {
        cout << "PC = PAPEL "
             << "\n"
             << "\n";
    }
    else
    {
        cout << "PC = TESOURA "
             << "\n"
             << "\n";
    }

    if (player > pc)
    {
        cout << "GANHOU!"
             << "\n";
        goto repeat;
    }
    else if (pc > player)
    {
        cout << "PERDEU!"
             << "\n";
        goto repeat;
    }
    else
    {
        cout << "EMPATE!" << "\n";
        goto repeat;
    }

repeat: // Bloco de repetição
    int repeat;
    cout << "REPETIR? 1 = SIM | 2 = NAO"
         << "\n";
    cin >> repeat;
    if (repeat == 1)
    {   
        cout << endl;
        goto inicio;
    }
    else
    {
        cout << endl;
        goto fim;
    }

fim:
    cout << endl;
    return 0;
}