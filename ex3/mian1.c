#include <stdio.h>
void print_sp(int i, int n){
    return (i = n)? i: " ";
}
void print_num(int n){
    return n;
}

int main()
{
    int rows = 6;
    print_sp(1, 6);
    print_num(1);

    return 0;
}
