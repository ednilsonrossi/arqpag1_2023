#include <stdio.h>

char categoria(int idade);

int main(int argc, char const *argv[])
{
    int idade;

    printf("Digite idade do nadador: \n");
    scanf("%d", &idade);

    printf("Nadador está na categoria: %c\n\n", categoria(idade) );

    return 0;
}

char categoria(int idade){
    if(idade < 5){
        printf("Nadador sem categoria.\n");
        return 'X';
    }else if(idade <= 7) return 'A';
    else if(idade <= 10) return 'B';
    else if(idade <= 13) return 'C';
    else if(idade <= 18) return 'D';
    else return 'E';

}

/*
char categoria(int idade){
    if(idade < 5){
        printf("Nadador sem categoria.\n");
        return 'X';
    }else{
        if(idade <= 7)
            return 'A';
        else
            if(idade <= 10)
                return 'B';
            else    
                if(idade <= 13)
                    return 'C';
                else
                    if(idade <= 18)
                        return 'D';
                    else
                        return 'E';
    }
}
*/

/*
char categoria(int idade){
    if(idade >= 5 && idade <= 7){
        return 'A';
    }

    if(idade >= 8 && idade <= 10){
        return 'B';
    }

    if(idade >= 11 && idade <= 13){
        return 'C';
    }

    if(idade >= 14 && idade <= 18){
        return 'D';
    }

    if(idade > 18){
        return 'E';
    }
}
*/

/*
char categoria(int idade){
    if(idade >= 5){
        if (idade <= 7){
            return 'A';
        }
    }

    if(idade >= 8){
        if(idade <= 10){
            return 'B';
        }
    }

    if(idade >= 11){
        if(idade <= 13){
            return 'C';
        }
    }

    if(idade >= 14){
        if(idade <= 18){
            return 'D';
        }
    }

    if(idade > 18){
        return 'E';
    }
}
*/