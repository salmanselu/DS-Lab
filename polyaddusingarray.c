#include<stdio.h>

struct polynomial{
    int coefficient;
    int exponent;
};

void readpoly(struct polynomial p[], int nterms);
void showpoly(struct polynomial p[], int nterms);
int addpoly(struct polynomial p1[], struct polynomial p2[], int n1terms, int n2terms, struct polynomial p3[]);
void main(){
    struct polynomial p1[10], p2[10],p3[10];
    int t1 = 0, t2 = 0;
    printf("\nEnter the number of terms in poly1:");
    scanf("%d", &t1);
    readpoly(p1, t1);
    printf("\nEnter the number of terms in poly2:");
    scanf("%d", &t2);
    readpoly(p2, t2);
    int t3 = addpoly(p1, p2, t1, t2, p3);
    showpoly(p3, t3);
}

void readpoly(struct polynomial p[], int nterms){
    printf("Enter coefficient and exponents in descending order of exponent\n");
    for(int i = 0; i < nterms; i++){
        printf("Enter coefficient and exponent of term %d :", i + 1);
        scanf("%d %d", &p[i].coefficient, &p[i].exponent);
    }
        
}

void showpoly(struct polynomial p[], int nterms){
    for(int i = 0; i < nterms; i++)
        printf("+%dx^%d ", p[i].coefficient, p[i].exponent);       
}

int addpoly(struct polynomial p1[], struct polynomial p2[], int n1terms, int n2terms, struct polynomial p3[]){
    int n3terms = 0;
    int i = 0;
    int j = 0;
    
    while(i < n1terms && j < n2terms)
    {
        if(p1[i].exponent == p2[j].exponent)
        {
            p3[n3terms].coefficient = p1[i].coefficient + p2[j].coefficient;
            p3[n3terms].exponent = p1[i].exponent;
            i++; j++; n3terms++;
        }
        else if(p1[i].exponent > p2[j].exponent)
        {
            p3[n3terms].exponent = p1[i].exponent;
            p3[n3terms].coefficient = p1[i].coefficient;
            i++; n3terms++;
        }
        else{
            p3[n3terms].exponent = p2[j].exponent;
            p3[n3terms].coefficient = p2[j].coefficient;
            j++; n3terms++;
        }
    }
    
    return n3terms;
}
