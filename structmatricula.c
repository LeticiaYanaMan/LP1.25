#include <stdio.h>

struct aluno {
    int matricula;
    char curso[200];
};
typedef struct aluno info_aluno;

int main() {
    info_aluno estud[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%d %s", &estud[i].matricula, &estud[i].curso); 
        printf("%d %s \n", estud[i].matricula, &estud[i].curso);
    }
    
    return 0;
    
}
