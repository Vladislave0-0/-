#include "Stack.h"
#include "StackDebug.h"

//============================================================

int main()
{
    Stack* stk1 = stack_ctor();
    assert(stk1 != nullptr);  
    
    stack_push(stk1, 0);
    stack_print_log(stk1);

    stack_push(stk1, 1);
    stack_print_log(stk1);

    stack_push(stk1, 2);
    stack_print_log(stk1);

    stack_push(stk1, 3);
    stack_print_log(stk1);

    stack_pop(stk1);
    stack_print_log(stk1);

    stack_dtor(stk1);
}
