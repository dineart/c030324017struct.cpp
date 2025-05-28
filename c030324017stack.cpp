#include <iostream>
using namespace std;

#define MAXSTACK 100

typedef int ItemType;


typedef struct{
    ItemType Item[MAXSTACK];
    int Count;
}Stack;



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
    if (S->Count==0)
     cout<<"Stack masih kosong!"<<endl;
    else{
        --(S->Count);
        *x = S->Item[S->Count];

    }
}

void Push(ItemType x, Stack *S)
{
    if (S->Count==MAXSTACK)
        cout << "Stack penuh! Data tidak dapat masuk!" <<endl;
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

    Push(10, &s);
    Push(20, &s);
    Push(30, &s);

    PrintStack(&S);

    Pop(&S, &x);
    cout << "Item yang di-pop:" << x << endl;

    PrintStack(&S);

    
    return 0;
}