#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 

    int passCount = 0; 
    for (int i = 1; i < N-1; i++) {
    int jojo, lili, bibi;
    scanf("%d %d %d", &jojo, &lili, &bibi);
	int total = jojo+lili+bibi;  
    int averageScore = total/ 3; 
        int participantScore;
        scanf("%d", &participantScore); 

        if (participantScore >= averageScore) {
            passCount++; 
    if (jojo >= averageScore) {
        printf("Jojo lolos\n");
    } else {
        printf("Jojo tidak lolos\n");
    }

    if (lili >= averageScore) {
        printf("Lili lolos\n");
    } else {
        printf("Lili tidak lolos\n");
    }

    if (bibi >= averageScore) {
        printf("Bibi lolos\n");
    } else {
        printf("Bibi tidak lolos\n");
    }
        }
    }


    return 0;
}

