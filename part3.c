#include "part3.h"
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>


char *concat(char *st1, char *st2);

node *tree;
int t_index = 0;
char *functionName;
char **right;
int ri = 0;
char *left;
int Li = 0;
char Lelements[100][100];
bool absFlag = false;

void printGoTo(){
	Li++;
	printf("\tGoto L%d\n", Li);
}

void printCallFunc(char *name){
	// printf("function call name\n");
	printf("\tt%d = LCall %s\n", t_index, strtok(name, "("));
	printf("\tPopParams \n");
	printf("\t%s = t%d\n", left, t_index++);
	if(left){
		free(left);
	}
	if(right){
		for(int i = 0; i < ri; i++){
			if(right[i]){
				// printf("%s\n", right[i]);
				// printf("END\n");
				free(right[i]);
				right[i] = NULL;
			}
		}
		ri = 0;
		free(right);
	}
}

void printL(){
	printf("  L%d:", Li);
}

// void printFunc(){
// 	free(functionName);
// }

void printCond()
{
	// printf("print cond\n");
	// printf("printf:\t");
	// for(int i = 0; i < ri; i++){
	// 	printf("%s \n", right[i]);
	// }
	// printf("\n");

	for(int i = 0, j = ri - 1; i <= j; i++, j--){
		if(i == j ){
			printf("%s ", right[i]);
		} else {
			printf("%s ", right[i]);
			printf("%s ", right[j]);
		}	
	}


	// }
	// ri=0;
	// printf("print cond2\n");


	Li++;
	printf("Goto L%d\n",Li);
	Li++;
	printf("\tGoto L%d\n",Li);
	if(right){
		for(int i = 0; i < ri; i++){
			if(right[i]){
				// printf("%s\n", right[i]);
				// printf("END\n");
				free(right[i]);
				right[i] = NULL;
			}
		}
		ri = 0;
		free(right);
	}
	printf("  L%d:", Li - 1);
}


void printIfCond(char *cond)
{
	printf("\t%s ",cond);
}

void endFunc(){
	printf("\tendFunc\n");
	Li = 0;
	t_index = 0;
}

void printFuncName(char *name){
	printf("%s:\n", name);
	printf("\tBeginFunc\n");

}

void function(){
	printf("FUNCTION \n");
}


void printParam(){
	// printf("param\t right is: %s\n", right[2]);
	// if(strlen(p) > 1){
	// 	p[strlen(p) - 1] = '\0';
	// }
	char *c = "";
	// printf("ri = %d\n", ri);
	for(int i = 0; i < ri; i++){
		printf("\tt%d = %s\n", t_index, right[i]);
		printf("\tPushParam t%d\n", t_index++);
		// printf("!!!!!!!!!!!!!!!\n");
		// if(!strpbrk(right[i], ",")){
		// 	if(!strpbrk(right[i], ")")) {
		// 		c = concat(c, right[i]);
		// 	} else {
		// 		c = concat(c, strtok(right[i], ")"));
		// 		c = "";
		// 	}
		// } else {
		// 	c = concat(c, strtok(right[i], ","));
		// 	printf("\tt%d = %s\n", t_index, c);
		// 	printf("\tPushParam t%d\n", t_index++);
		// 	c = "";
		// }
	}
	// printf("param p is: %s\n",p);
	// printf("function function: %s\n", functionName);
}

void printCode(){
	// printf("printf Code\n");
	// printf("size: %d\n", ri);
	// for(int i = 0; i < ri; i++){
	// 	printf("%s", right[i]);
	// }
	// printf("\n");
	// printf("print CODE\n");

	printf("\tt%d = ", t_index);
	if(absFlag){
		for(int i = 0; i < ri; i++){
			printf("%s", right[i]);

		}
		absFlag = false;
	} else {
		for(int i = 0; i <= (ri)/2; i++){
			if(i  >= ri / 2){
				printf("%s", right[i]);
			} else {
				printf("%s", right[i]);
				printf("%s", right[ri - 1 - i]);
			}
		}
	}

	printf("\n\t%s = t%d\n", left, t_index++);
	if(left){
		free(left);
	}
	if(right){
		for(int i = 0; i < ri; i++){
			if(right[i]){
				free(right[i]);
				right[i] = NULL;
			}
		}
		ri = 0;
		free(right);
	}
}


char *concat(char *st1, char *st2){
	int i, j = 0;
	// printf("right: %s st2: %s\n", st1, st2);
	char *s = (char*)malloc((strlen(st1) + strlen(st2) + 1) * sizeof(char));
	for(i = 0; i < strlen(st1); i++){
		s[i] = st1[i];
	}
	for(i; i < strlen(st1) + strlen(st2); i++){
		s[i] = st2[j];
		j++;
	}
	s[i] = '\0';
	return s;
}

void setRight(char *r){
	
	// printf("set right: %s\n", r);
	if(strcmp(r, "|") == 0){
		absFlag = true;
		// printf("inside the flag!\n");
	}
	char *t = (char*)malloc(sizeof(r) + 1);
	strcpy(t, r);
	// printf("set right: %s\n", t);
	ri++;
	if(right && ri - 1 > 0){
		// printf("1\n");
		// printf("ri = %d\n", ri);
		right = (char**)realloc(right, ri * 10);
		// printf("2\n");
	} else {
		// printf("PPPP\n");
		right = (char**)malloc(sizeof(char*));
	}
	if(strtok(t, ">")){
		t = strtok(t, ">");
	}
	if(strtok(t, "<")){
		t = strtok(t, "<");
	}
	t = strtok(t, ";");
	t = strtok(t, ")");
	t = strtok(t, ",");
		// printf("3 ************\n");	
	right[ri - 1] = t;
	// printf("3\n");
	// printf("4\n");
	// printf("SET RIGHT  %s\n", right[ri - 1]);
	// printf("END\n");
	// printf("SET RIGHT END\n");

	// printf("============= set right:%s ============= \n", r);
	// printf("COND == ");
	// printf("right: %s\n", r);
	// strcpy(right[ri++], r);
	// printf("strlen(st1): %d strlen(st2): %d\n", strlen(), strlen(r));
	// right = concat(right, r);
	// right = concat(right, " ");
}

void setLeft(char *l){
	left = (char*)malloc(sizeof(l) * 2);
	strcpy(left, l);
	left = strtok(left, " ");
}

void setFunctionName(char *name){
	if(functionName){
		free(functionName);
	}
	// printf("function name: %s\n", name);
	char *t = (char*)malloc(sizeof(name) * 2);
	strcpy(t, name);
	functionName = t;
	functionName = strtok(functionName, "(");
	printf("function: %s\n", functionName);
}

void createNode(char *token){
	if(!tree){
		tree = (node*)malloc(sizeof(node));
		tree->token = (char*)malloc(sizeof(token) + 1);
	}
}