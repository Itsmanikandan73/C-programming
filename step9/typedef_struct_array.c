#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    int score;
    char tag[16];
} Player;

int main(void) {
    Player roster[] = {{1, 1200, "owl_root"}, {2, 1450, "deamon_x"}, {3, 980, "shell_user"}};

    size_t count = sizeof(roster) / sizeof(roster[0]);

    printf("--- Leaderboard ---\n");
    for (size_t i = 0; i < count; i++) {
        printf("%zu: [%s]\tID:%d\tScore: %d\n", i + 1, roster[i].tag, roster[i].id, roster[i].score);
    }

    return 0;
}
