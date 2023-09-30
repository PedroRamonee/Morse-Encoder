#include "src/morse.hpp"

int main(int argc, char const *argv[]) {
    

    vector<string> traducao;
    string palavra;

    getline(cin, palavra);

    for (int i = 0; i < palavra.size(); i++) {
        palavra[i] = tolower(palavra[i]);
    }

    traducao = conversor(palavra);

    cout << palavra << " em codigo morse e: ";

    for (string &letra : traducao) {
        cout << letra << " ";
    }

    return 0;
}
