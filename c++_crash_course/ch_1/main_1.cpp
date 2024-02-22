#include<cstdio>

constexpr int isqrt(int n) {
    int i=1;
    while (i*i<n) 
    {
        /* code */
        ++i;
    }
    return i-(i*i!=n);    
}

int main() {
    int num =26;
    constexpr int x = isqrt(28);
    printf("%d", x);
}