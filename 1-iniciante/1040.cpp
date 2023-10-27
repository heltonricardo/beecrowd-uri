#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float N1, N2, N3, N4, MEDIA, NE;
    cout << fixed << setprecision(1);

    cin >> N1 >> N2 >> N3 >> N4;
    MEDIA = (N1 * 0.2) + (N2 * 0.3) + (N3 * 0.4) + (N4 * 0.1);
    cout << "Media: " << MEDIA << endl;
    if (MEDIA >= 7.0) cout << "Aluno aprovado." << endl;
    else if (MEDIA < 5.0) cout << "Aluno reprovado." << endl;
    else {
        cout << "Aluno em exame." << endl;
        cin >> NE;
        cout << "Nota do exame: " << NE << endl;
        MEDIA += NE;
        MEDIA /= 2.0;
        if (MEDIA >= 5.0) cout << "Aluno aprovado." << endl;
        else cout << "Aluno reprovado." << endl;
        cout << "Media final: " << MEDIA << endl;
    }
    return 0;
}
