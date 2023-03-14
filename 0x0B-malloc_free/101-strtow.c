#include <stdlib.h>
#include <main.h>

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = 0;
    char **words = NULL;

    // Count the number of words in the string
    for (char *p = str; *p != '\0'; p++) {
        if (*p != ' ' && (*p == '\n' || *(p+1) == ' ' || *(p+1) == '\n' || *(p+1) == '\0')) {
            num_words++;
        }
    }

    // Allocate memory for the array of words
    words = malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    // Split the string into words and store them in the array
    int i = 0;
    char *word_start = str;
    for (char *p = str; *p != '\0'; p++) {
        if (*p == ' ' || (*p == '\n' && (*(p+1) == ' ' || *(p+1) == '\n' || *(p+1) == '\0'))) {
            int word_len = p - word_start;
            char *word = malloc((word_len + 1) * sizeof(char));
            if (word == NULL) {
                // Free the memory allocated for the previous words
                for (int j = 0; j < i; j++) {
                    free(words[j]);
                }
                free(words);
                return NULL;
            }
            strncpy(word, word_start, word_len);
            word[word_len] = '\0';
            words[i++] = word;
            word_start = p + 1;
        }
    }

    words[i] = NULL;
    return words;
}
