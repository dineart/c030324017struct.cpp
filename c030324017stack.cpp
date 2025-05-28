#include <iostream>
using namespace std;

#define MAXSTACK 100

typedef int ItemType;


struct Stack {
    ItemType Item[MAXSTACK];
    int Count = 0;
}



void InitializeStack(Stack *S){
    S->Count = 0;
}

int Empty(Stack *S){
    return (S->Count == 0);
}

int Full(Stack *S){
    return (S->Count == MAXSTACK);
}
void Pop(Stack *S, ItemType *x){
    if (Empty(S)){
        cout<<"Stack masih kosong!"<<endl;
    }
    else{
        --(S->Count);
        *x = S->Item[S->Count];

    }
}

void Push(ItemType x, Stack *S)
{
    if (Full(S)){
        cout << "Stack penuh! Data tidak dapat masuk!" <<endl;
    }
    else{
        S->Item[S->Count]=x;
        ++(S->Count);
    }
}

void PrintStack(Stack *S) {
    cout << "Isi stack:";
    for (int i = 0; i < S->Count; i++) 
        cout << S->Item[i] << " ";
    cout << endl;

}


int main() {
    Stack S;
    ItemType x;
    InitializeStack(&S);

    Push(10, &S);
    Push(20, &S);
    Push(30, &S);

    PrintStack(&S);

    Pop(&S, &x);
    cout << "Item yang di-pop:" << x << endl;

    PrintStack(&S);

    
    return 0;
}