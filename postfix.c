#include<stdio.h>
#include<stdlib.h>

float solve(char* , int);
void push(float* , int* , int, float);
float pop(float*, int* );
void print(float*, int);
float eval(float left, float right, char op);

int main(){
    printf("%.2f", solve( "[12]14+3*+2/\0",50));
    return 0;
}

float solve(char* postfix,int size){
    float right;
    float left ;
    float store[size];
    int top = -1;
    int i = 0;
    while(postfix[i] != '\0'){
       if (postfix[i] == '[') {
    char temp[10];
    int j = 0;

    while (postfix[i + 1] != ']') {
        temp[j] = postfix[i + 1];
        j++;
        i++;
    }

    temp[j] = '\0';
    push(&store[0], &top, size, atof(temp));
}
        else if(postfix[i] >= 48 && postfix[i] <= 57){
            push(&store[0], &top, size, (float)(postfix[i] - '0'));
        }
        else if(postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/' || postfix[i] == '^'){
            right = pop(&store[0], &top);
            left = pop(&store[0], &top);
            float res = eval(left,right,postfix[i]);
            push(&store[0], &top,size,res);
        }
      i += 1;
    }
    return store[0];
}

void push(float* arr, int* top, int size, float Item){
    if(*top == size - 1){
        return ;
    }
    else{
        *top += 1;
        arr[*top] = Item;
    }
}

float pop(float* arr, int* top){
    float item;
    if (*top == -1){
        printf("UnderFlow\n");
    }
    else {
        item = arr[*top];
        *top -= 1 ;
    }
    return item;
}

void print(float* arr, int size){
    for(int i = 0 ; i < size ; i++){
        printf("%f ", arr[i]);
    }
}
float eval(float left, float right, char op){
    if (op == '+'){
        return left + right;
    }
    else if(op == '-'){
        return left - right;
    }
    else if(op == '*'){
        return left * right;
    }
    else if(op == '/'){
        return left / right;
    }

}
