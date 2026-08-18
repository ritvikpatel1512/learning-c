#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int check(char, char);
void push(char* , int* , int, char);
char pop(char*, int* );
void convert(char*, char*,int);



int main(){
    int size = 50;
    char infix[size];
    printf("Enter the Infix Expression :\n");
    scanf(" %[^\n]", infix);
    char postfix[size];
    convert(&infix[0], &postfix[0], size);
    printf("%s", postfix);
    //solve(&postfix[0],size);
    return 0;
}

void convert(char* infix, char* newpostfix, int size){
    int stop = -1;
    int ptop = -1;
    char store[size];
    char postfix[size];
    int i = 0;
    while( i < size && infix[i] != '\0' ){
        if (infix[i] == ' '){
                i += 1;
            continue;
        }
        else if (infix[i] >= 48 && infix[i] <= 57){
                if((infix[i +  1] >= 48 && infix[i + 1] <= 57) || infix[i + 1] == '.'){
                        push(&postfix[0], &ptop, size,'[');
                    while((infix[i + 1] >= 48 && infix[ i+1 ] <= 57) || infix[i + 1] == '.'){
                        push(&postfix[0], &ptop, size, infix[i]);
                        i += 1;
                    }
                    push(&postfix[0], &ptop, size, infix[i]);
                    push(&postfix[0], &ptop, size, ']');

                }
                else{
                    push(&postfix[0], &ptop, size, infix[i]);
                }

        }
        else if(stop < 0 || infix[i] == '('){
            push(&store[0], &stop, size, infix[i]);
        }
        else if(infix[i] == ')'){
            while(store[stop] != '('){
                    char item = pop(&store[0],&stop);
                    push(&postfix[0], &ptop, size, item);
                   // printf("Visited at 3\n");

            }
            pop(&store[0],&stop);
        }
         else if(check(store[stop],infix[i]) >= 0){
            push(&store[0],&stop,size,infix[i]);
        }
        else{
            while( stop >= 0 && check(store[stop],infix[i]) < 0){
                char item = pop(&store[0],&stop);
                push(&postfix[0], &ptop, size, item);
            }
            push(&store[0],&stop,size,infix[i]);
        }
        i += 1 ;
    }
    while( stop >= 0){
                char item = pop(&store[0],&stop);
                push(&postfix[0], &ptop, size, item);
            }
    postfix[ptop + 1] = '\0';
    strcpy(newpostfix,postfix);
}


int check(char first, char second){
    char store[] = {'(','-','+','*','/','^',')'};
    int index[] = {-1,2,2,3,3,4,1};
    int a = -2;
    int b = -2;
    for(int i = 0 ; i < 8 ; i++){
        if (store[i] == first) {
            a = i;
        }
        if(store[i] == second){
            b = i;
        }
    }
    if(a == -2 || b == -2){
        printf("Invalid");
        return -5 ;
    }
    else{
        return index[b] - index[a];
    }
}

void push(char* arr, int* top, int size, char Item){
    if(*top == size - 1){
        return ;
    }
    else{
        *top += 1;
        arr[*top] = Item;
    }
}

char pop(char* arr, int* top){
    char item;
    if (*top == -1){
        printf("UnderFlow\n");
    }
    else {
        item = arr[*top];
        *top -= 1 ;
    }
    return item;
}



