#include "lists.h"

#define MAX_KEY_LENGTH 64

char *generate_key(const char *username) {
    char *key = malloc(MAX_KEY_LENGTH);
    if (key == NULL) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    snprintf(key, MAX_KEY_LENGTH, "%s_12345", username);

    return (key);
}

int main(int argc, char *argv[]) {
    const char *username;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <username>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    username = argv[1];
    char *key = generate_key(906609);

    printf("%s\n", key);

    free(key);

    return (0);
}

