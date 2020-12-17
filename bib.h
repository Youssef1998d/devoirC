#ifndef BIB_H_INCLUDED
#define BIB_H_INCLUDED

typedef struct MaDate{
    int jj;
    int mm;
    int aa;
}MaDate;

typedef struct Etudiant{
    char cn[8];
    char nom[20];
    char prenom[20];
    MaDate dateNais;
}Etudiant;

int SetPos(){
    int x=-1;
    while(x<0){
        scanf("%d", &x);
    }
    return x;
}

int Set4(){
    int x=0;
    while(x/1000==0){
        scanf("%d", &x);
    }
    return x;
}

void setDate(MaDate *d){
    MaDate newDate={SetPos(), SetPos(), Set4()};
    *d = newDate;
}

void setEtudiant(Etudiant *E){
    char n[20], p[20], c[8];
    MaDate date ;
    Etudiant newE;
    setDate(&date);
    printf("Entrer le nom : ");
    scanf("%s", newE.nom);
    printf("Entrer le prenom : ");
    scanf("%s", newE.prenom);
    printf("Entrer la cin : ");
    scanf("%s", newE.cn);
    newE.dateNais = date;
    *E = newE;
}
void affDate(MaDate d){
    printf("Date de naissance : %d/%d/%d", d.jj, d.mm, d.aa);
}
void affEt(Etudiant e){
    printf("Nom : %s ", e.nom);
    printf("Prenom : %s \nCIN : %s \n", e.nom, e.prenom, e.cn);
    affDate(e.dateNais);
}
#endif // BIB_H_INCLUDED
