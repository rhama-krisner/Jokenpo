#include <iostream>
#include <time.h>

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
        cout << "CONTINUE? Sim = 1 | Nao = 2";
        int sn;
        if (sn == 1)
        {
            goto inicio;
        }
        else
        {
            goto fim;
        }
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
        cout << "REPETIR? 1 = SIM | 2 = NAO"
             << "\n";
        int repeat;
        if (repeat == 1)
        {
            goto inicio;
        }
        else
        {
            goto fim;
        }
    }
    else if (pc > player)
    {
        cout << "PERDEU!"
             << "\n";
        cout << "REPETIR? 1 = SIM | 2 = NAO"
             << "\n";
        int repeat1;
        cin >> repeat1;
        if (repeat1 == 1)
        {
            goto inicio;
        }
        else
        {
            goto fim;
        }
    }
    else
    {
        cout << "EMPATE!"
             << "\n";
        cout << "REPETIR? 1 = SIM | 2 = NAO";
        int repeat2;
        cin >> repeat2;
        if (repeat2 == 1)
        {
            goto inicio;
        }
        else
        {
            goto fim;
        }
    }
    cout << endl;
fim:
    return 0;
}