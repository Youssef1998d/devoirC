#ifndef BIB_H_INCLUDED
#define BIB_H_INCLUDED

typedef struct MaDate{
    int jj;
    int mm;
    int aa;
}MaDate;                //La definition de la structure MaDate (Question n°1)

typedef struct Etudiant{
    char cn[8];
    char nom[20];
    char prenom[20];
    MaDate dateNais;
}Etudiant;              //La definition de la structure Etudiant (Question n°1)

int SetPos(){
    int x=-1;
    while(x<0){
        scanf("%d", &x);
    }
    return x;
}                       //Question n°2)a)

int Set4(){
    int x=0;
    while(x/1000==0){
        scanf("%d", &x);
    }
    return x;
}                       //Question n°2)b)

void setDate(MaDate *d){
    MaDate newDate={SetPos(), SetPos(), Set4()};
    *d = newDate;
}                       //Question n°2)c)

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
}                       //Question n°2)d)
void infDate(MaDate d){
    printf("Date de naissance : %d/%d/%d", d.jj, d.mm, d.aa);
}                       //Question n°2)e)
void infEt(Etudiant e){
    printf("Nom : %s ", e.nom);
    printf("Prenom : %s \nCIN : %s \n", e.nom, e.prenom, e.cn);
    affDate(e.dateNais);
}                       //Question n°2)f)
#endif // BIB_H_INCLUDED
