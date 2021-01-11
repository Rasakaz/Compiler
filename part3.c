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
int **Lelments;
int l_Index = 0;
bool absFlag = false;
bool goToFlag = false;
char *Code = "";
FILE *f;

void openFile(){
	f = fopen("code.txt", "w");
	fclose(f);
}

void printWhile(){
	if(l_Index > 0){
		f = fopen("code.txt", "a");
		if(f){
			fprintf(f, "\tgoto L%d\n", Lelments[l_Index - 1]);
			fprintf(f, "  L%d:", Li);
			fclose(f);
		}
		// printf("\tgoto L%d\n", Lelments[l_Index - 1]);
		// printf("  L%d:", Li);
		

		// char temp[100];
		// sprintf(temp, "\tgoto L%d\n", Lelments[l_Index - 1]);	
		// concat(Code, temp);
		// memcpy(Code, temp, strlen(temp) )
		// sprintf(temp, "  L%d:", Li);
		// concat(Code, temp);
		// printf("PRINT CODE: %s", Code);
	}
}

void printReturn(){
	f = fopen("code.txt", "a");
	if(Li > 0){
		// printf("  L%d:", Li);
		fprintf(f, "  L%d:", Li);
	}
	fprintf(f, "\tt%d = ", t_index);
	// printf("\tt%d = ", t_index);
	for(int i = 0, j = ri - 1; i <= j; i++, j--){
		if(i == j ){
			// printf("%s ", right[i]);
			fprintf(f, "%s ", right[i]);
		} else {
			// printf("%s ", right[i]);
			// printf("%s ", right[j]);

			fprintf(f, "%s ", right[i]);
			fprintf(f, "%s ", right[j]);
		}	
	}
	//printf("\n");
	// printf("\tReturn t%d\n", t_index++);
	
	fprintf(f, "\n");
	fprintf(f, "\tReturn t%d\n", t_index++);
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
	fclose(f);
}

void printGoTo(){
	f = fopen("code.txt", "a");
	Li++;
	// printf("\tGoto L%d\n", Li);
	// printf("  L%d:", Li - 1);

	fprintf(f, "\tGoto L%d\n", Li);
	fprintf(f, "  L%d:", Li - 1);
	fclose(f);
}

void printCallFunc(char *name){
	f = fopen("code.txt", "a");
	// printf("function call name\n");
	fprintf(f, "\tt%d = LCall %s\n", t_index, strtok(name, "("));
	fprintf(f, "\tPopParams \n");
	fprintf(f, "\t%s = t%d\n", left, t_index++);

	// printf("\tt%d = LCall %s\n", t_index, strtok(name, "("));
	// printf("\tPopParams \n");
	// printf("\t%s = t%d\n", left, t_index++);
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
	fclose(f);
}

void printL(){
	// printf("  L%d:", Li);
}

// void printFunc(){
// 	free(functionName);
// }

void printCond()
{
	// printf("print cond\n");
	// for(int i = 0; i < ri; i++){
	// 	printf("%s \n", right[i]);
	// }
	// printf("\n");
	f = fopen("code.txt", "a");
	for(int i = 0, j = ri - 1; i <= j; i++, j--){
		if(i == j){
			fprintf(f, "%s ", right[i]);
			// printf("%s ", right[i]);
		} else {
			fprintf(f, "%s ", right[i]);
			fprintf(f, "%s ", right[j]);

			// printf("%s ", right[i]);
			// printf("%s ", right[j]);
		}	
	}


	// }
	// ri=0;
	// printf("print cond2\n");


	Li++;
	fprintf(f,"Goto L%d\n",Li);

	// printf("Goto L%d\n",Li);
	Li++;
	fprintf(f, "\tGoto L%d\n",Li);
	// printf("\tGoto L%d\n",Li);
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
	fprintf(f, "  L%d:", Li - 1);
	// printf("  L%d:", Li - 1);
	fclose(f);
}


void printIfCond(char *cond)
{
	f = fopen("code.txt", "a");
	if(Li > 0 || strcmp(cond, "while") == 0){
			fprintf(f, "  L%d:", Li);
			// printf("  L%d:", Li);
	}
	if(strcmp(cond, "while") == 0){
		// printf("WHILE\n");
		l_Index++;
		if(l_Index - 1 > 0){
			Lelments = (int**)realloc(Lelments, l_Index);
		} else {
			Lelments = (int**)malloc(sizeof(int*));
		}
		// printf("33\n");
		Lelments[l_Index - 1] = Li;
		// printf("44\n");
	}
	// printf("cond: %s\n", cond);
	fprintf(f, "\tif ");
	// printf("\tif ");
	fclose(f);
}

void endFunc(){
	f = fopen("code.txt", "a");

	fprintf(f, "\tendFunc\n");
	// printf("\tendFunc\n");
	// Li = 0;
	t_index = 0;
	fclose(f);
}

void printFuncName(char *name){
	f = fopen("code.txt", "a");

	fprintf(f, "%s:\n", name);
	fprintf(f, "\tBeginFunc\n");
	// printf("%s:\n", name);
	// printf("\tBeginFunc\n");
	fclose(f);
}

void function(){
	printf("FUNCTION \n");
}


void printParam(){
	// printf("param\t right is: %s\n", right[2]);
	// if(strlen(p) > 1){
	// 	p[strlen(p) - 1] = '\0';
	// }
	// char *c = "";
	f = fopen("code.txt", "a");
	// printf("ri = %d\n", ri);
	for(int i = 0; i < ri; i++){
		fprintf(f, "\tt%d = %s\n", t_index, right[i]);
		fprintf(f, "\tPushParam t%d\n", t_index++);
		
		// printf("\tt%d = %s\n", t_index, right[i]);
		// printf("\tPushParam t%d\n", t_index++);
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
	fclose(f);
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
	f = fopen("code.txt", "a");
	fprintf(f, "\tt%d = ", t_index);
	// printf("\tt%d = ", t_index);
	if(absFlag){
		for(int i = 0; i < ri; i++){
			
			fprintf(f, "%s", right[i]);
			// printf("%s", right[i]);

		}
		absFlag = false;
	} else {
		for(int i = 0; i <= (ri)/2; i++){
			if(i  >= ri / 2){
				fprintf(f, "%s", right[i]);
				// printf("%s", right[i]);
			} else {
				fprintf(f, "%s", right[i]);
				fprintf(f, "%s", right[ri - 1 - i]);
				// printf("%s", right[i]);
				// printf("%s", right[ri - 1 - i]);
			}
		}
	}

	fprintf(f, "\n\t%s = t%d\n", left, t_index++);
	// printf("\n\t%s = t%d\n", left, t_index++);
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
	fclose(f);
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
	printf("CONCAT: %s\n", s);
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
	if(strtok(t, "||")){
		t = strtok(t, "||");
	}
	if(strtok(t, "&&")){
		t = strtok(t, "&&");
	}
	if(strtok(t, "!")){
		t = strtok(t, "!");
	}	
	if(strtok(t, "==")){
		t = strtok(t, "==");
	}
	if(strtok(t, "*")){
		t = strtok(t, "*");
	}	
	if(strtok(t, "/")){
		t = strtok(t, "/");
	}	
	if(strtok(t, "+")){
		t = strtok(t, "+");
	}
	if(strtok(t, "-")){
		t = strtok(t, "-");
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