#include <stdio.h>

int main() {
    int X, T;
    scanf("%d", &X);
    
    int lahan[X][2];
    
    // Input panjang dan lebar setiap lahan
    for (int i = 0; i < X; ++i) {
        scanf("%d %d", &lahan[i][0], &lahan[i][1]);
    }
    
    // Input jumlah teman
    scanf("%d", &T);
    
    // Hitung total luas lahan
    int total_luas = 0;
    for (int i = 0; i < X; ++i) {
        total_luas += lahan[i][0] * lahan[i][1];
    }
    
    // Hitung luas per bagian
    double luas_per_bagi = (double)total_luas / T;
    
    // Tampilkan hasil dengan tingkat presisi 2 angka dibelakang koma
    printf("%.2lf\n", luas_per_bagi);

    return 0;
}

