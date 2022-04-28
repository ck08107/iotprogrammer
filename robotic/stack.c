// ======================================================================
// stack ADT의 연산

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// ======================================================================

void init_stack(STACK * s)
{
  s->top = -1;
}

// ======================================================================

void print_stack(STACK * s)
{
  printf("(%d: ", (s->top)+1);
  for(int i = 0; i <= s->top; i++){
    if(i == s->top)
      printf("%d", s->data[i]);
    else
      printf("%d,", s->data[i]);
  }
  printf(")\n");
}

// ======================================================================


int empty_stack(STACK * s)
{
  if(s->top == -1) return 1;
  else return 0;
}

// ======================================================================

int push_stack(STACK * s, int item)
{
  if((s->top)+1 >= MAX_STACK_SIZE)
    return ERROR;
  else{
    s->data[++(s->top)] = item;
    return s->top;
  }
}

// ======================================================================

int pop_stack(STACK * s)
{
  if(s->top < 0)
    return ERROR;
  else{
    int popItem = s->data[s->top];
    s->data[(s->top)--] = 0;
    return popItem;
  }
}

// ======================================================================
