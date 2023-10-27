#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    char CLASSEA[15], CLASSEB[15], CLASSEC[15];
    cin >> CLASSEA; cin.ignore(80, '\n');
    cin >> CLASSEB; cin.ignore(80, '\n');
    cin >> CLASSEC; cin.ignore(80, '\n');

    if ((strcmp(CLASSEA, "vertebrado") == 0) && (strcmp(CLASSEB, "ave") == 0) && (strcmp(CLASSEC, "carnivoro") == 0))
        cout << "aguia" << endl;
    else if ((strcmp(CLASSEA, "vertebrado") == 0) && (strcmp(CLASSEB, "ave") == 0) && (strcmp(CLASSEC, "onivoro") == 0))
        cout << "pomba" << endl;
    else if ((strcmp(CLASSEA, "vertebrado") == 0) && (strcmp(CLASSEB, "mamifero") == 0) && (strcmp(CLASSEC, "onivoro") == 0))
        cout << "homem" << endl;
    else if ((strcmp(CLASSEA, "vertebrado") == 0) && (strcmp(CLASSEB, "mamifero") == 0) && (strcmp(CLASSEC, "herbivoro") == 0))
        cout << "vaca" << endl;
    else if ((strcmp(CLASSEA, "invertebrado") == 0) && (strcmp(CLASSEB, "inseto") == 0) && (strcmp(CLASSEC, "hematofago") == 0))
        cout << "pulga" << endl;
    else if ((strcmp(CLASSEA, "invertebrado") == 0) && (strcmp(CLASSEB, "inseto") == 0) && (strcmp(CLASSEC, "herbivoro") == 0))
        cout << "lagarta" << endl;
    else if ((strcmp(CLASSEA, "invertebrado") == 0) && (strcmp(CLASSEB, "anelideo") == 0) && (strcmp(CLASSEC, "hematofago") == 0))
        cout << "sanguessuga" << endl;
    else if ((strcmp(CLASSEA, "invertebrado") == 0) && (strcmp(CLASSEB, "anelideo") == 0) && (strcmp(CLASSEC, "onivoro") == 0))
        cout << "minhoca" << endl;

    return 0;
}
