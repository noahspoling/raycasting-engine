#include <stdbool.h>

// Define constants for each direction
#define N  1  // 0001
#define E  2  // 0010
#define S  4  // 0100
#define W  8  // 1000
// ... similarly for NE, NS, NW, SE, EW, etc.

// Define the tile structure
typedef struct {
    unsigned int connections;
} BaseTile;

// Initialize a new tile
void initTile(BaseTile *tile) {
    tile->connections = 0;
}

// Set a connection
void setConnection(BaseTile *tile, unsigned int direction) {
    tile->connections |= direction;
}

// Remove a connection
void removeConnection(BaseTile *tile, unsigned int direction) {
    tile->connections &= ~direction;
}

// Check if a connection exists
bool hasConnection(BaseTile *tile, unsigned int direction) {
    return (tile->connections & direction) != 0;
}
