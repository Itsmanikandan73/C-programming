#include <stdio.h>

typedef enum {
    STATE_IDLE,
    STATE_CONNECTING,
    STATE_AUTHENTICATED,
    STATE_DISCONNECTED,
    STATE_ERROR
} SessionState;

void print_status(SessionState state) {
    switch (state) {
        case STATE_IDLE:
            printf("[STATUS]: Idle - Waiting for trigger.\n");
            break;
        case STATE_CONNECTING:
            printf("[STATUS]: Connecting to target host...\n");
            break;
        case STATE_AUTHENTICATED:
            printf("[STATUS]: Success! Session authenticated.\n");
            break;
        case STATE_DISCONNECTED:
            printf("[STATUS]: Session terminated\n");
            break;
        case STATE_ERROR:
        default:
            printf("[ERROR]: Critical session failure.\n");
            break;
    }   
}

int main(void) {
    SessionState current_state = STATE_IDLE;
    print_status(current_state);

    current_state = STATE_CONNECTING;
    print_status(current_state);

    current_state = STATE_AUTHENTICATED;
    print_status(current_state);

    current_state = STATE_ERROR;
    print_status(current_state);
    
    return 0;
}