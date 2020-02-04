#include <stdio.h>
int decisionJoueur=0;
int item1 =1;

struct inventaire {
    char name[50];
    int prix;

} i;
int main() {


    printf("Pour ouvrir l'inventaire tapez : 1 \n");
    scanf("%d",&decisionJoueur);
    if(decisionJoueur == 1){
			printf("\n Vous ouvrez votre inventaire\n");
    }
    printf("%s", i);

    printf("Entrer informations:\n");
    printf("Entrer nom : ");
    fgets(i.name, sizeof(i.name), stdin);
    printf("Entrer prix: ");
    scanf("%d", &i.prix);
    printf("Displaying Information:\n");
    printf("Nom de l'item : ");
    printf("%s", i.name);
    printf("Prix: %d euros\n", i.prix);

    return 0;
}
