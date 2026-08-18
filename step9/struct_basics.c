#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Processinfo {
    int pid;
    char name[32];
    double memory_mb;
};

void display_process(const struct Processinfo *ptr) {
    if (ptr == NULL) return;

    // Using arrow operator -> for struct pointers
    printf("PID:  %d | Name:  %-8s | Memory:  %.2f MB\n", ptr->pid, ptr-> name, ptr->memory_mb);
}

int main(void) {
    // Initialize struct instance directly
    struct Processinfo proc1 = {101, "systemd", 12.4};

    struct Processinfo proc2;
    proc2.pid = 1024;
    strncpy(proc2.name, "bash", sizeof(proc2.name) -1);
    proc2.name[sizeof(proc2.name) - 1] = '\0';
    proc2.memory_mb = 4.8;

    printf("--- Process Listing ---\n\n");
    display_process(&proc1);
    display_process(&proc2);

    return 0;
}