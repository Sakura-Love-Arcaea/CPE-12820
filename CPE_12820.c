#include <stdio.h>
int test(char a[]) {    
    int check[26] = {0};
    for (int i = 97; i <= 122; i++) {
        for (size_t j = 0; a[j] != '\0'; j++) {
            if (a[j] == i) {
                check[i - 97] += 1;
            }
        }
    }
    // for (size_t i = 0; i < 26; i++) {
    //     printf("%d", check[i]);
    // }
    // puts("");
    int onlyYou = 0;
    for (size_t u = 0; u < 26; u++) {
        if (check[u] != 0) {
            onlyYou += 1;
        }
    }
    if (onlyYou == 1){
        return 1;
    }
    
    
    
    int p = 0;
    for (size_t k = 0; k < 26; k++) {
        for (size_t l = k+1; l < 26; l++) {
            if (check[l] == check[k] && check[l] != 0) {
                p += 1;
            }
        }
    }
    
    return p;
    
    
    
    
}





int main() {
    int numberOfEachCase, count;
    char coolWord[100] = {'\0'};
    int iam;
    
    while (scanf("%d", &numberOfEachCase) == 1) {
        iam += 1;
        count = 0;
        for (int j = 0; j < numberOfEachCase; j++){
            scanf("%s", coolWord);
            // printf("%s ", coolWord);
            // printf("%d\n", test(coolWord));
            
            if (test(coolWord) == 0){
                count++;
            }
        }
        printf("Case %d: %d\n", iam, count);
    }
    
    return 0;
}
	
