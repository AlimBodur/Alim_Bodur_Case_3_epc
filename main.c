#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>

char* Workers[] = { "W1", "W2", "W3", "W4", "W5", "W6", "W7", "W8", "W9", "W10",
                   "W11", "W12", "W13", "W14", "W15", "W16", "W17", "W18", "W19", "W20",
                   "W21", "W22", "W23", "W24", "W25", "W26", "W27", "W28", "W29", "W30",
                   "W31", "W32", "W33", "W34", "W35", "W36", "W37", "W38", "W39", "W40",
                   "W41", "W42", "W43", "W44", "W45", "W46", "W47" };

char* seniorWorkers[] = { "LW-1", "LW-2", "LW-3", "LW-4", "LW-5", "LW-6", "LW-7", "LW-8", "LW-9", "LW-10" };

char* A[20], * B[9], * C[10], * D[8], * E[4], * F[3], * G[6], * H[1], * J[1];

void array_set(char** pw, const int size)
{
    for (int i = 0; i < size; i++){
        int cnt = 0;
        for (int j = 0; j < size; j++){
            if (Workers[i]==pw[j]){
                cnt = 1;
                break;
            }
        }
        if(cnt == 0)
            pw[i] = Workers[i]; //        
    }
}


void print_workers_array(const char** names, const int size, const char cmpnyname)
{
    for (int i = 0; i < size; ++i)
        printf("%c: %s ", cmpnyname, names[i]);
    printf("\n\n");
}

void workers_arrays_delete(char** workersarr, const int size, const int loopcnt)
{
    for (int n = 0; n < loopcnt; n++) {
        char* first = workersarr[0];

        for (int i = 0; i < size - 1; i++) {
            workersarr[i] = workersarr[i + 1];
        }
        char* last = workersarr[size - 1];
        workersarr[size - 1] = first;
    }
}

void seniorworkers_assignment(void)
{
    for (int n = 0; n < 10; n++) {
        int xs = rand() % 10;
        int ys = rand() % 10;
        char* temp_s = seniorWorkers[xs];
        seniorWorkers[xs] = seniorWorkers[ys];
        seniorWorkers[ys] = temp_s;
    }
    for (int i = 0; i < 1; i++) {
        A[i + 4] = seniorWorkers[i];
    }
    for (int i = 0; i < 1; i++) {
        B[i + 8] = seniorWorkers[i + 1];
    }
    for (int i = 0; i < 2; i++) {
        C[i + 8] = seniorWorkers[i + 2];
    }
    for (int i = 0; i < 2; i++) {
        D[i + 6] = seniorWorkers[i + 4];
    }
    for (int i = 0; i < 1; i++) {
        E[i + 3] = seniorWorkers[i + 6];
    }
    for (int i = 0; i < 1; i++) {
        F[i + 2] = seniorWorkers[i + 7];
    }
    for (int i = 0; i < 1; i++) {
        G[i + 5] = seniorWorkers[i + 8];
    }
}

void workers_randomize(void)
{
    for (int i = 0; i < 47; i++) {

        int xw = rand() % 47;
        int yw = rand() % 47;
        char* temp = Workers[xw];
        Workers[xw] = Workers[yw];
        Workers[yw] = temp;
    }
}




int main()
{

    srand(time(NULL));
    workers_randomize();
 

    for (int i = 0; i < 20; i++) {
        array_set(A, 4);
        workers_arrays_delete(Workers, 47, 4);
        
        array_set(B, 8);
        workers_arrays_delete(Workers, 43, 8);

        array_set(C, 8);
        workers_arrays_delete(Workers, 35, 8);

        array_set(D, 6);
        workers_arrays_delete(Workers, 27, 6);

        array_set(E, 3);
        workers_arrays_delete(Workers, 21, 3);

        array_set(F, 2);
        workers_arrays_delete(Workers, 18, 2);

        array_set(G, 6);
        workers_arrays_delete(Workers, 16, 6);

        array_set(H, 1);
        workers_arrays_delete(Workers, 10, 1);

        array_set(J, 1);
        workers_arrays_delete(Workers, 9, 1);
        
        seniorworkers_assignment();

        printf("A Grubu: \n");
        print_workers_array(A, 5, 'A');
        
        printf("B Grubu \n");
        print_workers_array(B, 9, 'B');

        printf("C Grubu \n");
        print_workers_array(C, 10, 'C');

        printf("D Grubu \n");
        print_workers_array(D, 8, 'D');

        printf("E Grubu \n");
        print_workers_array(E, 4, 'E');

        printf("F Grubu \n");
        print_workers_array(F, 3, 'F');

        printf("G Grubu \n");
        print_workers_array(G, 6, 'G');

        printf("H Grubu \n");
        print_workers_array(H, 1, 'H');

        printf("J Grubu \n");
        print_workers_array(J, 1, 'J');
        
        printf("%d. iterasyon tamamlandi\n",i+1);
    }
    printf("MAKSIMUM ITERASYON DOLDU");

}

