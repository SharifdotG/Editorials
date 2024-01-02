// D - এখানে আজ গত দুই এক দিন ধরে তীব্র শীত 🥶

#include <stdio.h>
#include <string.h>

int main() {
    char line1[101], line2[101];
    fgets(line1, sizeof(line1), stdin);
    fgets(line2, sizeof(line2), stdin);

    char word1[51], word2[51];
    sscanf(line1, "%[^|]", word1);
    sscanf(line2, "%[^|]", word2);

    printf("%s%s ", word1, word2);

    char word3[51], word4[51];
    sscanf(strchr(line1, '|') + 1, "%[^\n]", word3);
    sscanf(strchr(line2, '|') + 1, "%[^\n]", word4);

    printf("%s%s\n", word3, word4);

    return 0;
}
