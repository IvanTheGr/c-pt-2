#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long int loseAllMatches = 1;
    long long int totalOutcomes = 1;
    for(int i=0;i<N;i++){
    	totalOutcomes *=2;
	}
   long long int winAtLeastOnce = totalOutcomes - loseAllMatches;

    printf("%lld\n", winAtLeastOnce);

    return 0;
}

