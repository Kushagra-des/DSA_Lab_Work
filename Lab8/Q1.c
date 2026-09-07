#include <stdio.h>
#define MAX 5
int stack[MAX], top = -1;

void push(int x){ 
    if(top==MAX-1) 
    printf("Overflow!\n"); 
    else
    stack[++top]=x; 
}

void pop(){ 
    if(top==-1) 
    printf("Underflow!\n"); 
    else 
    printf("Deleted element is %d\n", stack[top--]); 
}

void display(){ 
    if(top==-1) 
    printf("Stack is empty!\n"); 
    else 
    for(int i=top;i>=0;i--) 
    printf("%d\n",stack[i]); 
}

int main(){
    int ch, val;
    do{
        printf("\n*** Stack Menu ***\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
            printf("Enter element: "); 
            scanf("%d",&val); 
            push(val); 
            break;
            case 2: 
            pop();
            break;
            case 3: 
            display(); 
            break;
        }
    }while(ch!=4);
return 0;
}
