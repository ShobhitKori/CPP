//Create a structure specification related to the band's scores by a student appearing for IELTS tests thrice with the following members –
//char reg_no[15] ;
//float bnd1,bnd2,bnd3 ;
//read the values and pass the structure to a function that calculates and returns the average band score.
#include<stdio.h>
struct IELTS{
    char reg_no[15] ;
    float bnd1,bnd2,bnd3 ;
};
int main(){
    struct IELTS ivar;
    printf("\nEnter reg_no: ");
    gets(ivar.reg_no);
    printf("\nEnter three scores in tests: ");
    scanf("%f%f%f",&ivar.bnd1,&ivar.bnd2,&ivar.bnd3);
    float getAverage(struct IELTS*);
    float avg = getAverage(&ivar);
    printf("\nAverage of band score: %f", avg);
    return 0;
}
float getAverage(struct IELTS *vvar){
    float avgg = (vvar->bnd1 + vvar->bnd2 + vvar->bnd3) / 3;
    return avgg;
}