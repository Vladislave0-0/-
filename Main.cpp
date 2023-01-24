#include "Stack.h"
#include "StackDebug.h"

//============================================================

int main()
{
    double result = 0;
    size_t capacity = 10;

    Stack* stk1 = stack_ctor(capacity);
    assert(stk1 != nullptr); 
    assert(stk1->data != nullptr);   

    stk1 = nullptr;

    for(size_t i = 0; i < capacity*2; i++)
    {
        stack_push(stk1, i);
        stack_print_log(stk1);   
    }

    stack_pop(stk1, &result);    

    stack_dtor(stk1);
}
