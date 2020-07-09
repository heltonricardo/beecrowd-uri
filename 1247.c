#include <stdio.h>
#include <math.h>

int main(void) {
    int D, VF, VG;
    double H, TF, TG;

    while (scanf("%d %d %d", &D, &VF, &VG) == 3) {
        H = sqrt(144 + D * D);
        TF = 12.0 / VF;
        TG = H / VG;

        if (TG <= TF) printf("S\n");
        else printf("N\n");
    }
    return 0;
}

