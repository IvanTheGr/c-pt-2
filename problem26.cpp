#include <stdio.h>

int main()
{
	char c1[11], c2[11], c3[11], c4[11], c5[11]; 
	int h1, h2, h3, h4, h5, h6, h7, h8, h9, h10;
	int m1, m2, m3, m4, m5, m6, m7, m8, m9, m10;
	
	scanf("%s %d:%d-%d:%d", c1, &h1, &m1, &h2, &m2);
	scanf("%s %d:%d-%d:%d", c2, &h3, &m3, &h4, &m4);
	scanf("%s %d:%d-%d:%d", c3, &h5, &m5, &h6, &m6);
	scanf("%s %d:%d-%d:%d", c4, &h7, &m7, &h8, &m8);
	scanf("%s %d:%d-%d:%d", c5, &h9, &m9, &h10, &m10);
	
	printf("%s %02d:%02d-%02d:%02d\n", c1, h1-1, m1, h2-1, m2);
	printf("%s %02d:%02d-%02d:%02d\n", c2, h3-1, m3, h4-1, m4);
	printf("%s %02d:%02d-%02d:%02d\n", c3, h5-1, m5, h6-1, m6);
	printf("%s %02d:%02d-%02d:%02d\n", c4, h7-1, m7, h8-1, m8);
	printf("%s %02d:%02d-%02d:%02d\n", c5, h9-1, m9, h10-1, m10);
	
	return 0;
}
