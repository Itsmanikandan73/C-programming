#include <stdio.h>
#include <stdint.h>

// A union to inspect raw bytes of a 32-bit integer
union DataPacket {
    uint32_t value;
    uint8_t bytes[4];
};

int main(void) {
    union DataPacket packet;
    packet.value = 0xAABBCCDD;  // hexdecimal value is assigned

    printf("Union overall size: %zu bytes\n", sizeof(packet));
    printf("Full 32-bit value:  0x%X\n", packet.value);

    printf("\nByte-by-byte memory layout:\n");
    for (size_t i = 0; i < 4; i++) {
        printf(" Byte [%zu]: 0x%02X\n", packet.bytes[i]);
    }

    return 0;
}