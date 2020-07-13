#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <netinet/in.h>

int main(int argc, char* argv[]){

    FILE *fp1 = fopen(argv[1], "rb");
    FILE *fp2 = fopen(argv[2], "rb");

    uint32_t n1, n2;

    fread(&n1, 1, 4, fp1);
    fread(&n2, 1, 4, fp2);

    n1 = ntohl(n1);
    n2 = ntohl(n2);

    printf("%1$d(0x%1$x)  + %2$d(0x%2$x) = %3$d(0x%3$x)\n", n1, n2, n1+n2);
}
