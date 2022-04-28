// ======================================================================

#include "stack.h"

// ======================================================================

#define MAX_MAZE_SIZE   6

#define FOUND           1
#define FINDING         2
#define FAILED          3

// ======================================================================

typedef struct maze_struct {
  char (*map)[MAX_MAZE_SIZE];
  STACK *stack;
  int here_r;
  int here_c;
} MAZE;

// ======================================================================

void print_maze(MAZE * maze);
void push_loc(MAZE * maze, int r, int c);
int run_maze(MAZE * maze);

// ======================================================================
