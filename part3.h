// #include "part2.h"

// typedef struct left {
// 	char *token;
// } left;

typedef struct node {
	char *token;
	struct node *left;
	struct node *right;
} node;


void setLeft(char *l);
void setRight(char *r);
void printCode();
void printFunc();
void function();
void endFunc();
void printIfCond(char *cond);
void printCond();
void printFuncName(char *name);
void printParam();
void printL();
void printGoTo();
void printReturn();
void printWhile();
void openFile();