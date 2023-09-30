#include "morse.hpp"

vector<string> conversor(string palavra) {
    vector<string> frase;
    for (int i = 0; i < palavra.size(); i++) {
        switch (palavra[i]) {
            case 'a':
                frase.push_back(".-");
                break;
            case 'b':
                frase.push_back("-...");
                break;
            case 'c':
                frase.push_back("-.-.");
                break;
            case 'd':
                frase.push_back("-..");
                break;
            case 'e':
                frase.push_back(".");
                break;
            case 'f':
                frase.push_back("..-.");
                break;
            case 'g':
                frase.push_back("--.");
                break;
            case 'h':
                frase.push_back("....");
                break;
            case 'i':
                frase.push_back("..");
                break;
            case 'j':
                frase.push_back(".---");
                break;
            case 'k':
                frase.push_back("-.-");
                break;
            case 'l':
                frase.push_back(".-..");
                break;
            case 'm':
                frase.push_back("--");
                break;
            case 'n':
                frase.push_back("-.");
                break;
            case 'o':
                frase.push_back("---");
                break;
            case 'p':
                frase.push_back(".--.");
                break;
            case 'q':
                frase.push_back("--.-");
                break;
            case 'r':
                frase.push_back(".-.");
                break;
            case 's':
                frase.push_back("...");
                break;
            case 't':
                frase.push_back("-");
                break;
            case 'u':
                frase.push_back("..-");
                break;
            case 'v':
                frase.push_back("...-");
                break;
            case 'w':
                frase.push_back(".--");
                break;
            case 'x':
                frase.push_back("-..-");
                break;
            case 'y':
                frase.push_back("-.--");
                break;
            case 'z':
                frase.push_back("--..");
                break;
            case '1':
                frase.push_back(".----");
                break;
            case '2':
                frase.push_back("..---");
                break;
            case '3':
                frase.push_back("...--");
                break;
            case '4':
                frase.push_back("....-");
                break;
            case '5':
                frase.push_back(".....");
                break;
            case '6':
                frase.push_back("-....");
                break;
            case '7':
                frase.push_back("--...");
                break;
            case '8':
                frase.push_back("---..");
                break;
            case '9':
                frase.push_back("----.");
                break;
            case '0':
                frase.push_back("-----");
                break;
            case ' ':
                frase.push_back("/");
                break;
            default:
                break;
        }
    }

    return frase;
}
