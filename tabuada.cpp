#include <stdio.h>
 
int main() {
 
    int i, n;
    
    scanf("%d", &n);
    //"i", variavel inteira q guardarar o primeiro valor//
    for(int i = 1; i <=10; i++) {
        printf("%d x %d = %d\n", i, n, i*n); 
    }
 
    return 0;
}
