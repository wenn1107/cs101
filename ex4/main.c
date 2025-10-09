#include <stdio.h>

int main()
{
    FILE* fp;
    int a[] = {0,1,2};
    char b[] = "ABC";
    float c[] = {1.1,1.2,1.3};
    int ra[4];
    char rb[4];
    float rc[4];
    fp = fopen("a.bin", "wb+");
    fwrite(a, sizeof(int), 3, fp);
    fwrite(b, sizeof(char), 4, fp);
    fwrite(c, sizeof(float), 3, fp);
    fseek(fp, 0, SEEK_SET);
    fread(ra, sizeof(int), 3, fp);
    fread(rb, sizeof(char), 4, fp);
    fread(rc, sizeof(float), 3, fp);
    fclose(fp);
    
    for (int i = 0; i < 3;i++){
        printf("%d ", ra[i]);
    }
    printf("\n");
    
    for (int j = 0; j < 3;j++){
        printf("%c ", rb[j]);
    }
    printf("\n");
    
    for (int k = 0; k < 3;k++){
        printf("%.6f ", rc[k]);
    }
    printf("\n");
    
    return 0;
}
