#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "Bem-vindo ao Jogo de Adivinhacao do Alvo!" << endl;
    cout << "Tente, apenas tente adivinhar o alvo escolhido pelo computador." << endl;

    srand(time(0));
    int alvo = rand() % 20 + 1;

    while (true) {
        cout << "Tente seu palpite (entre 1 e 20): ";
        int palpite;
        cin >> palpite;

        if (palpite == alvo) {
            cout << "Parabens! Você acertou o alvo " << alvo << ". Vitoria do usuario! (foi sorte)" << endl;
            break;
        }
        else {
            cout << "Seu palpite (" << palpite << ") nao e o alvo. Tente novamente HAHA." << endl;
            alvo += rand() % 20 + 1;
            if (alvo > 100) {
                cout << "O alvo ultrapassou 100 (" << alvo << "). Vitoria do computador!" << endl;
                break;
            }
        }
    }

    return 0;
}
