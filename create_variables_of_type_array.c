/*
int tableau[4];

ableau[0] = 10;
tableau[1] = 23;
tableau[2] = 505;
tableau[3] = 8;
*/
/*
printf("%d", tableau);
*/
/*
printf("%d", tableau[0]);
*/
/*
printf("%d", *tableau);
*/
/*
tableau[1] // Renvoie la valeur de la seconde case (la première case étant 0)
*(tableau + 1) // Identique : renvoie la valeur contenue dans la seconde case
*/
/*
int main(int argc, char *argv[])
{
    int tableau[4], i = 0;

    tableau[0] = 10;
    tableau[1] = 23;
    tableau[2] = 505;
    tableau[3] = 8;

    for (i = 0 ; i < 4 ; i++)
    {
        printf("%d\n", tableau[i]);
    }

    return 0;
}
*/
/*
int main(int argc, char *argv[])
{
    int tableau[4], i = 0;

    // Initialisation du tableau
    for (i = 0 ; i < 4 ; i++)
    {
        tableau[i] = 0;
    }

    // Affichage de ses valeurs pour vérifier
    for (i = 0 ; i < 4 ; i++)
    {
        printf("%d\n", tableau[i]);
    }

    return 0;
}
*/
/*
int main(int argc, char *argv[])
{
    int tableau[4] = {0, 0, 0, 0}, i = 0;

    for (i = 0 ; i < 4 ; i++)
    {
        printf("%d\n", tableau[i]);
    }

    return 0;
}
*/
/*
void affiche(int *tableau, int tailleTableau);
 
int main(int argc, char *argv[])
{
    int tableau[4] = {10, 15, 3};
 
    // On affiche le contenu du tableau
    affiche(tableau, 4);
 
    return 0;
}
 
void affiche(int *tableau, int tailleTableau)
{
    int i;
 
    for (i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableau[i]);
    }
}
*/
/*
int sommeTableau(int tableau[], int tailleTableau)
{
    int somme = 0;
    for(int i = 0; i < tailleTableau; i++)
    {
        somme += tableau[i];
    }
    return somme;
}
*/

double moyenneTableau(int tableau[], int tailleTableau)
{
    int somme = 0;
    for(int i = 0; i < tailleTableau; i++)
    {
        somme += tableau[i];
    }
    return (double)somme/(double)tailleTableau;
}