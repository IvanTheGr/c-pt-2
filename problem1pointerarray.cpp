#include <stdio.h>

int main() {
    int N, Q;
    scanf("%d", &N);

    int views[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &views[i]);
    }

    scanf("%d", &Q);

    for (int i = 0; i < Q; i++) {
        int Ai, Bi;
        scanf("%d %d", &Ai, &Bi);

        int totalViews = 0;
        for (int j = Ai - 1; j < Bi; j++) {
            totalViews += views[j];
        }

        printf("Case #%d: %d\n", i + 1, totalViews);
    }

    return 0;
}

