#define PI 3.14
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define joint1 "/base_link_respondable[0]/joint_1"
#define joint2 "/base_link_respondable[0]/joint_1/joint_2"
#define joint3 "/base_link_respondable[0]/joint_1/joint_2/joint_3"
#define joint4 "/base_link_respondable[0]/joint_1/joint_2/joint_3/joint_4"
#define joint5 "/base_link_respondable[0]/joint_1/joint_2/joint_3/joint_4/joint_5"
#define joint6 "/base_link_respondable[0]/joint_1/joint_2/joint_3/joint_4/joint_5/joint_6"

extern "C" {
#include "extApi.h"
}

void resetJoint1(int clientID, simxChar* handlerName, int* handler){
    strcpy(handlerName, joint1);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0.1 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);
}

void resetJoint2(int clientID, simxChar* handlerName, int* handler) {
    strcpy(handlerName, joint2);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0.2 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);
}

void resetJoint3(int clientID, simxChar* handlerName, int* handler) {
    strcpy(handlerName, joint3);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0.1 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);
}

void resetJoint4(int clientID, simxChar* handlerName, int* handler) {
    strcpy(handlerName, joint4);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0.1 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);
}

void resetJoint5(int clientID, simxChar* handlerName, int* handler) {
    strcpy(handlerName, joint5);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.06 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);
}

void resetJoint6(int clientID, simxChar* handlerName, int* handler) {
    strcpy(handlerName, joint6);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);
}

void resetPos(int clientID, simxChar* handlerName, int* handler) {
    resetJoint1(clientID, handlerName, handler);

    resetJoint2(clientID, handlerName, handler);

    resetJoint3(clientID, handlerName, handler);

    resetJoint4(clientID, handlerName, handler);

    resetJoint5(clientID, handlerName, handler);

    resetJoint6(clientID, handlerName, handler);
}

void press0(int clientID, simxChar* handlerName, int* handler) {
    strcpy(handlerName, joint1);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint2);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint3);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint4);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint5);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    resetPos(clientID, handlerName, handler);
}

void press1(int clientID, simxChar* handlerName, int* handler) {
    strcpy(handlerName, joint1);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint2);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint3);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint4);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint5);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    resetPos(clientID, handlerName, handler);
}

void press2(int clientID, simxChar* handlerName, int* handler) {
    strcpy(handlerName, joint1);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint2);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint3);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint4);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint5);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    resetPos(clientID, handlerName, handler);
}

void press3(int clientID, simxChar* handlerName, int* handler) {
    strcpy(handlerName, joint1);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint2);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint3);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint4);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint5);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    resetPos(clientID, handlerName, handler);
}

void press4(int clientID, simxChar* handlerName, int* handler) {
    strcpy(handlerName, joint3);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.13 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint5);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0.23 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint1);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0.04 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint2);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0.30 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    resetJoint2(clientID, handlerName, handler);
    resetJoint1(clientID, handlerName, handler);
    resetJoint5(clientID, handlerName, handler);
    resetJoint3(clientID, handlerName, handler);
}

void press5(int clientID, simxChar* handlerName, int* handler) {
    strcpy(handlerName, joint1);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint2);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint3);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint4);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint5);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    resetPos(clientID, handlerName, handler);
}

void press6(int clientID, simxChar* handlerName, int* handler) {
    strcpy(handlerName, joint1);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint2);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint3);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint4);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint5);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    resetPos(clientID, handlerName, handler);
}

void press7(int clientID, simxChar* handlerName, int* handler) {
    strcpy(handlerName, joint1);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint2);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint3);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint4);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint5);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    resetPos(clientID, handlerName, handler);
}

void press8(int clientID, simxChar* handlerName, int* handler) {
    strcpy(handlerName, joint1);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint2);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint3);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint4);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint5);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    resetPos(clientID, handlerName, handler);
}

void press9(int clientID, simxChar* handlerName, int* handler) {
    strcpy(handlerName, joint1);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint2);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint3);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint4);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint5);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    resetPos(clientID, handlerName, handler);
}

void pressConf(int clientID, simxChar* handlerName, int* handler) {
    strcpy(handlerName, joint1);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint2);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint3);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint4);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    strcpy(handlerName, joint5);
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0 * PI), (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(3000);

    resetPos(clientID, handlerName, handler);
}

int main(int argc, char* argv[]) {

    //variavei para handler das juntas
    int handler = 0;
    simxChar handlerName[150] = "/base_link_respondable[0]";
    FILE* arq = NULL;
    char numeroCandidato[11] = "a";

    //conecta com o coppelia
    int clientID = simxStart((simxChar*)"127.0.0.1", 19999, true, true, 2000, 5);
    extApi_sleepMs(500);

    //verifica conexao com simulador
    if (clientID == -1) { printf("Erro conectando ao Coppelia!\n"); exit(1); }
    else printf("Conectado ao Coppelia!\n");

    simxGetObjectHandle(clientID, handlerName, &handler, (simxInt)simx_opmode_oneshot_wait);
    press4(clientID, handlerName, &handler); // define a posicao inicial do braco, prepara para clicar

    arq = fopen("C:\\Users\\DaviD\\OneDrive\\Área de Trabalho\\vrep\\vrep\\votos.txt", "rt");
    if (arq == NULL) { printf("Erro na hora de abrir o arquivo"); exit(1); }

    while (!feof(arq)) {
        fscanf(arq, "%10[^\n]\n", numeroCandidato); // le um voto

        for (int i = 0; i < strlen(numeroCandidato); i++) { // roda uma vez para cada algarismo
            switch (numeroCandidato[i]) { // seleciona o algarismo atual e executa o clique
            case '0':
                //press0(clientID, handlerName, &handler);//Lembrar de colocar o reset pos dentro da funcao
                printf("Entramos no 0, %c\n", numeroCandidato[i]);
                break;
            case '1':
                //press1(clientID, handlerName, &handler);//Lembrar de colocar o reset pos dentro da funcao    
                printf("Entramos no 1, %c\n", numeroCandidato[i]);
                break;
            case '2':
                //press2(clientID, handlerName, &handler);//Lembrar de colocar o reset pos dentro da funcao                  
                printf("Entramos no 2, %c\n", numeroCandidato[i]);
                break;
            case '3':
                //press3(clientID, handlerName, &handler);//Lembrar de colocar o reset pos dentro da funcao                  
                printf("Entramos no 3, %c\n", numeroCandidato[i]);
                break;
            case '4':
                //press4(clientID, handlerName, &handler);//Lembrar de colocar o reset pos dentro da funcao                  
                printf("Entramos no 4, %c\n", numeroCandidato[i]);
                break;
            case '5':
                //press5(clientID, handlerName, &handler);//Lembrar de colocar o reset pos dentro da funcao                  
                printf("Entramos no 5, %c\n", numeroCandidato[i]);
                break;
            case '6':
                //press6(clientID, handlerName, &handler);//Lembrar de colocar o reset pos dentro da funcao                  
                printf("Entramos no 6, %c\n", numeroCandidato[i]);
                break;
            case '7':
                //press7(clientID, handlerName, &handler);//Lembrar de colocar o reset pos dentro da funcao                  
                printf("Entramos no 7, %c\n", numeroCandidato[i]);
                break;
            case '8':
                //press8(clientID, handlerName, &handler);//Lembrar de colocar o reset pos dentro da funcao                  
                printf("Entramos no 8, %c\n", numeroCandidato[i]);
                break;
            case '9':
                //press9(clientID, handlerName, &handler);//Lembrar de colocar o reset pos dentro da funcao                  
                printf("Entramos no 9, %c\n", numeroCandidato[i]);
                break;
            default:
                printf("Entramos no DEFO, %c\n", numeroCandidato[i]);
                break;
            }
        }
        //pressConf(clientID, handlerName, &handler); // pressiona o Confirma
        printf("Entramos no CONFIRMA\n");
    }

    // Fecha a conexao
    simxFinish(clientID);

    return(0);
}