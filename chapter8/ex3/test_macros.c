#include <stdio.h>

#define liisaprint(...) printf(__VA_ARGS__);

int main(){

    liisaprint("%d\n", __LINE__);
    return 0;
}