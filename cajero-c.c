/*
Iba hacerlo con un Do While para las contraseñas para que se repitiera una y otra vez pero se me paso por alto
Para la parte de 763 de void segunda iba a usar los arrays pero se me olvido y use las  funciones,
Numero de cuenta: 555777
Contraseña 199485
*/


//LIBRERIAS
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include<windows.h>
//LIBRERIAS


//REGISTRO	
#define sradilia 3213104651
#define ninasandra 3168301361
#define yo 3134689977
//REGISTRO


//INICIAR SESION
	
#define sradiliam 3213104656
#define ninasandraa 3168301368
#define yoo 3134689977
#define elyo 555777
#define cont 199485
//INICIAR SESION


//GOTOXY
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
//GOTOXY


//FUNCION INICIAR
void iniciar_sesion();
//FUNCION INICIAR FIN


//CASE 1 DE OPCION
void primero();
//CASE 1 DE OPCION


//CASE 2 DE OPCION
void segundo();
//CASE 2 DE OPCION


//CASE 2 DE OPCION
void tercero();
//CASE 2 DE OPCION


//CASE 4 DE OPCION
void cuatro();
//CASE 4 DE OPCION


//FUNCION AYUDA
void atyuda();
//FUNCION AYUDA


//ESTRUCTURA ENTREGADOS
typedef struct{
	
	char a[90];
	char b[90];
	char c[90];
	char d[90];
	char e[90];
	char f[90];
	char g[90];
	char h[90];
	char i[90];
	char j[90];
	char k[90];
	char l[90];
	char n[90];
	char o[90];
	char p[90];
	
}chat;
//ESTRUCTURA ENTREGADOS


//CHAT
typedef struct{
	
	char ScarTissue[90];
	char RadioVideo[90];
	char Polly[90];
	char LoMaloDeSerBueno[90];
	char ElViejo[90];
	char TrenAlSur[90];
	char ElBaileDeLosQueSobran[90];
	char Sonne[90];
	char StirbNichVorMir[90];
	char LaBaladaDelDiabloYLaMuerte[90];
	char LabiosRotos[90];
	char DontCry[90];
	char Revenge[90];
	char Holiday[90];
	char Californication[90];
	
}CancionesDeRock;
//CHAT





//***********************************************************************************************************************//
int main(){
	
	system("color e4");
	
	gotoxy(55,14);
	printf("¡Bienvenido!\n\n");
	system("\n\t\t\tpause");
	system("cls");
	
	int Fender;
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\tVersion 1.1.2");
	printf("\n1. Registrarse\n\n");
	printf("\n2. Iniciar sesion\n\n");
	printf("\n3. Ayuda\n\n");
	printf("\nOpcion: ");
	scanf("%i",&Fender);
	
	system("cls");
	
	
	//opciones
	
	switch(Fender){
		
		case 1:{
			
			
			
			printf("\nHola vamos a empezar :)");
			
			char soad[40];
		
			printf("\n\nIngresa tu nombre de usuario nuevo: ");
			scanf("%s",&soad);


			printf("\n\n\nMuy bien ahora la contraseña, tiene que ser en numeros");

			int s,d;

			printf("\n\n\nIngresa una contraseña nueva: ");
			scanf("%i",&s);
				
			printf("\n\nVamos a ver si la contraseña coincide: ");
			scanf("%i",&d);
			
			
			system("cls");
			
			
			if(s==d){
				printf("\n\nExelente! has creado tu cuenta de 'banco'\n\n");
				
				system("\n\npause");
				
				
				//invitar amigos
				printf("\n\nHola %s, ya que tienes cuenta puedes invitar amigos para que transfieran dinero entre ustedes :D",soad);	
				
				int opcion;
				
				printf("\n\n1. Si! si quiero, empezemos ya");
				printf("\n\n2. Nha, ellos son los que tienen que invitarme");
				printf("\n\nOpcion: ");
				scanf("%i",&opcion);
				
				switch(opcion){//Abre switch del IF
					
					case 1:{
						
						printf("\n\nPerfecto %s ",soad);
						
						printf("\n\nSandra\n");
						printf("Dilia\n");
						printf("Yo(%s)",soad);
						
						printf("\nEllos son tus contactos\n");
						
						int rhcp;
						
						printf("\nEscribe el numero de la persona a la que quieres invitar(no podras enviar dinero hasta tener amigos): ");
						scanf("%i",&rhcp);
						
						
						if(rhcp==sradilia){
							
							system("cls");
							
							printf("\n\nQuieres invitar a dilia?");
							
							int slipknot;
							
							printf("\n\n1. si");
								
							printf("\n\nOpcion: ");
							scanf("%i",&slipknot);
							
							switch(slipknot){
								
								case 1:{
									printf("\n\nEnviaremos un mensaje para ver si la convencemos :D\n\n");
									system("\n\npause\n\n");
									
									
									system("cls");
									system("color f1");
									
									
									int regalo;
							
									regalo=10000;
									
									printf("\n\nHola %s, ya estas en el menu principal.\n\n ",soad);
									printf("\n\nComo apenas te registras te daremos 10.000COP esperemmos lo disfrutes");
									
									printf("\n\nTu saldo es de %i",regalo);
									
									
									printf("\n\n1. Ingresar dinero.");
									printf("\n\n2. Sacar dinero:");
									
									int si;
									
									printf("\n\nCuando estes cerca a un cajero escojes la opcion: ");
									scanf("%i",&si);
		
		
		//eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee							
									switch(si){
										case 1:{
											
											int saldo_inicial=10000;
											int ingreso,saldo=0;
											
											printf("\n\nCuanto dinero quieres ingresar: ");
											scanf("%i",&ingreso);
											
											saldo=saldo_inicial+ingreso;
										
											printf("\n\nSu nuevo saldo es de %i",saldo);
											
											printf("\n\nPerfecto %s ya esta, nos veremos luego :D",soad);
											
											break;
										}
									
										case 2:{
											
											int saldo_inicial=10000;		
											int retiro, saldo=0;
											
											printf("\n\nBueno %s recuerda que tu saldo es de %i",soad,saldo_inicial);
											
											printf("\n\nCuanto dinero quieres sacar: ");
											scanf("%i",&retiro);
											
											if(saldo_inicial>=retiro){
											saldo=saldo_inicial-retiro;
											printf("\n\nAhora te quedan %i",saldo);	
											printf("\n\nGenial %s nos veremos luego :D",soad);	
											}//retiro
											else{
												printf("\n\nAl parecer tratas de sacar mas de lo que tienes :/");
											}
					
											break;
										}
										default:{
											printf("\n\nasegurate que escojiste bien la opcion\n");	
											break;
										}
									}
									break;
								}		
								default:{
									printf("\n\nasegurate que escojiste bien la opcion\n");	
									break;
								}//slipknot	
							}
						}else//dilia IF
//0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000						
					
					
					
					
					
//222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222						
	
						if(rhcp==ninasandra){
							printf("\n\nQuieres invitar a la niña sandra?");
							
							int slayer;
							
							printf("\n\n1. si");
							
							printf("\n\nOpcion: ");
							scanf("%i",&slayer);
							
							switch(slayer){
								case 1:{
									
									printf("\n\nEnviaremos un mensaje para ver si la convencemos :D\n\n");
									system("\n\npause\n\n");
									
									system("cls");
									system("color f1");
									
									int denada;
							
									denada=10000;
									
									printf("\n\nHola %s, ya estas en el menu principal.\n\n ",soad);
									printf("\n\nComo apenas te registras te daremos 10.000COP esperemmos lo disfrutes");
									
									printf("\n\nTu saldo es de %i",denada);
									
									printf("\n\n1. Ingresar dinero");
									printf("\n\n2. Sacar dinero ");
									
									int no;
									
									printf("\n\nCuando estes cerca a un cajero escojes la opcion: ");
									scanf("%i",&no);
									
									switch(no){
										case 1:{
											
											int saldo_principal=10000;
											int entrada,saldoo=0;
											
											printf("\n\nCuanto dinero quieres ingresar: ");
											scanf("%i",&entrada);
											
											saldoo=saldo_principal+entrada;
										
											printf("\n\nSu nuevo saldo es de %i",saldoo);
											
											printf("\n\nPerfecto %s ya esta, nos veremos luego :D",soad);
										
											break;
										}
										
										
										case 2:{
											
											int saldo_principal=10000;		
											int entrada, saldoo=0;
											
											printf("\n\nBueno %s recuerda que tu saldo es de %i",soad,saldo_principal);
											
											printf("\n\nCuanto dinero quieres sacar: ");
											scanf("%i",&entrada);
											
											if(saldo_principal>=entrada){
											saldoo=saldo_principal-entrada;
											printf("\n\nAhora te quedan %i",saldoo);	
											printf("\n\nGenial %s nos veremos luego :D",soad);	
											}
											else{
												printf("\n\nAl parecer tratas de sacar mas de lo que tienes :/");
											}
											
											
											break;
										}
										
										
										default:{
											printf("\n\nAsegurate de que escojiste la opcion correcta");
											break;
										}
									}
									
									break;
								}
								default:{
									printf("\n\nAsegurate de que escojiste la opcion correcta");
									break;
								}
							}
						}else//niña sandra
//22222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222						
						
						
						
//*****************************************************************************************************************************************
						if(rhcp==yo){
							printf("Oh! parece que este numero ya esta registrado :/");
							
							printf("\n\nOh mira este numero pertenece a %s :D",soad);
							
							system("cls");
							system("color f1");
							
							int dinero,i;
							
							i=10000;
							
							
							printf("Oh! parece que este numero ya esta registrado :/");
							
							printf("\n\nOh mira este numero pertenece a %s :D",soad);
							
							
							printf("\n\nHola %s, ya estas en el menu principal.\n\n ",soad);
							printf("\n\nComo apenas te registras te daremos 10.000COP esperemmos puedas comprar pan :D");
							
							printf("\n\nTu saldo es de %i",i);
								
							printf("\n\n1. Ingresar dinero.");
							printf("\n\n2. Sacar dinero");
						
							int talvez;
									
							printf("\n\nCuando estes cerca a un cajero escojes la opcion: ");
							scanf("%i",&talvez);
							
							switch(talvez){
								
								case 1:{
									
									int saldo_iniciall=10000;
									int ingresoo,saldok=0;
									
									printf("\n\nCuanto dinero quieres ingresar: ");
									scanf("%i",&ingresoo);
									
									saldok=saldo_iniciall+ingresoo;
								
									printf("\n\nSu nuevo saldo es de %i",saldok);
									
									printf("\n\nPerfecto %s ya esta, nos veremos luego :D",soad);					
						
									break;
								}
								
								case 2:{
									
									int saldo_iniciall=10000;		
									int retiroo, saldok=0;
									
									printf("\n\nBueno %s recuerda que tu saldo es de %i",soad,saldo_iniciall);
									
									printf("\n\nCuanto dinero quieres sacar: ");
									scanf("%i",&retiroo);
									
									if(saldo_iniciall>=retiroo){
									saldok=saldo_iniciall-retiroo;
									printf("\n\nAhora te quedan %i",saldok);	
									printf("\n\nGenial %s nos veremos luego :D",soad);	
									}
									else{
									printf("\n\nAl parecer tratas de sacar mas de lo que tienes :/");
									}
									
									break;
								}
								default:{
									printf("\n\nAsegurate de que escojiste la opcion correcta");
									break;
								}
							}
					
						}else{
							printf("\n\nAl parecer ninguno de los numeros que ingresaste estan en tu libreta de contactos");
						}
						
//*******************************************************************************************************************************************	
						
						break;//del primero;
					}//del primero
					case 2:{
						//no no quiero inv
						
						system("cls");
						
						printf("\n\nEsta bien, luego llegaran tus amigos");
						printf("\n\nNo podra enviar dinero ni recibirlo hasta tener amigos. Solo ingresar a tu cuenta y sacar");
						
						
					int regalo;
					
							regalo=0;
							
							printf("\n\nHola %s, ya estas en el menu principal.\n\n ",soad);
							printf("\n\nComo apenas te registras te daremos 0");
							
							printf("\n\nTu saldo es de %i",regalo);
							
							
							printf("\n\n1. Ingresar dinero.");
							printf("\n\n2. Sacar dinero:");
							///////////////////////////////////////////////////////////////////
							int si;
							
							printf("\n\nCuando estes cerca a un cajero escojes la opcion: ");
							scanf("%i",&si);

							
							switch(si){
								case 1:{
									
									int saldo_inicial=0;
									int ingreso,saldo=0;
									
									printf("\n\nCuanto dinero quieres ingresar: ");
									scanf("%i",&ingreso);
									
									saldo=saldo_inicial+ingreso;
								
									printf("\n\nSu nuevo saldo es de %i",saldo);
									
									printf("\n\nPerfecto %s ya esta, nos veremos luego :D",soad);
									
									break;
								}
//************************************************************************************************//							
								case 2:{
									
									int saldo_inicial=0;		
									int retiro, saldo=0;
									
									printf("\n\nBueno %s recuerda que tu saldo es de %i",soad,saldo_inicial);
									
									printf("\n\nCuanto dinero quieres sacar: ");
									scanf("%i",&retiro);
									
									if(saldo_inicial>=retiro){
									saldo=saldo_inicial-retiro;
									printf("\n\nAhora te quedan %i",saldo);	
									printf("\n\nGenial %s nos veremos luego :D",soad);	
									}//retiro
									else{
										printf("\n\nAl parecer tratas de sacar mas de lo que tienes :/");
									}
			
									break;
								}
								default:{
									printf("\n\nasegurate que escojiste bien la opcion\n");	
									break;
								}
							}
						
						break;
					}
					default:{
						printf("\n\nasegurate que escojiste bien la opcion\n");	
						break;
					}//default
				}//switch del IF
			}//este corchete es del IF
			
			
			else{
				printf("No coinciden D:");
			}//este del ELSE


		
			
			break;
		}//CASE 1 DEL PRIMER SWITCH

		
		case 2:{
			//INICIAR SESION
			iniciar_sesion();
			break;
		}//CASE 2 DEL PRIMER SWITCH

		
		case 3:{
			//OPCION 3(AYUDA)
			atyuda();
			break;
		}//CASE 3 DEL PRIMER SWITCH

		
		default:{
			printf("\n\nasegurate que escojiste bien la opcion\n\n");	
			break;
		}//FIN UWU DEL SWITCH MADRE		
	}//SWITC DEL 1ER O SEA EL PRIMERO QUE CONTIENE TODO (MADRE) 
	
	return 0;
}
//***********************************************************************************************************************//


//2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222//
void iniciar_sesion(){
	
			
			int a;
			
			printf("Numero de cuenta: ");	
			scanf("%i",&a);
				
			if(elyo==a){
				printf("\nHola Carlos");
				system("cls");
				system("color b8");
				
				int prisioneros;
				
				printf("Ahora ingresa tu contraseña: ");
				scanf("%i",&prisioneros);
				
				if(cont==prisioneros){
					printf("\nAcceso creado\n");
					system("\n\npause");
			//acceso creado abierto	
							
				int platica[5]={1000000,700000,35000,375000};
				int i;
				/*for(i=1;i<2;i++){
					printf("\nTe han consignado: %i",platica[i]);
				}*/
				
				//printf("\nSI %i",platica[0]);
				
				
			printf("\n\nHola estamos teniendo problemas en nuestros servidores D:, necesitamos que ingreses tu nombre o crees uno nuevo\n\n");
			
			char pantera[40];				
				
			printf("\nIngresa nombre nuevo o reciente: ");
			scanf("%s",&pantera);	
				
				
			int seg,x;
	
			x=1000;
			
			for(seg=0;seg<8;seg++){
				printf("\t\t\t\t\t\t\t\t%02i\r",seg);
				Sleep(x);
			}
			system("cls");
			
			//EMPIEZA TODOOOOOOOOOOOOOOOOOOOOOOO
			printf("\t\t\t\t\t\t\t\tHola %s ya estas en la pgaina principal\n",pantera);	
					
			int EstoVaAEstarCompeljo;		
				
			printf("\t\t\t\t\t\t\t\t\n1. Mi cuenta");	
			printf("\t\t\t\t\t\t\t\t\n2. Notificaciones");		
			printf("\t\t\t\t\t\t\t\t\n3. Enviar y recibir");	
			printf("\n4. Ingreso de palata por medio de mi Banco");
			printf("\t\t\t\t\t\t\t\t\n\nOpcion: ");	
			scanf("%i",&EstoVaAEstarCompeljo);	
				
			switch(EstoVaAEstarCompeljo){//pag pri
				
				case 1:{//1
					primero();
					break;
				}//1
				
				case 2:{//2
					segundo();
					break;
				}//2
				case 3:{//3
					tercero();
					break;
				}//3				
				case 4:{//4
					cuatro();
					break;
				}//4
				default:{//defa
					printf("\nAsegurate que escojiste bien la opcion");	
					break;
				}//defa
			}//pag pri			
			}//fin de acceso creado abierto
			else{
				printf("\nNo hemos podido conectarla, no coinciden");
			}//prisioneros
			
		}
		else{
			printf("\n:/ No hemos podido encotrar en nuestra base de datos");
		}//else de contra
}
//2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222//


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
void primero(char pantera[50], int EstoVaAEstarCompeljo){//void

	
	system("cls");
	printf("MI CUENTA\n\n");
	
	int s;
	
	printf("\n1. Cambio de contraseña\n");
	printf("\n2. Cambio de nombre\n");	
	
	printf("\nOpcion: ");
	scanf("%i",&s);
	
	switch(s){
		case 1:{
			
			system("cls");
			
			int x;
			printf("\n\nHola primero deberas ingresar tu contraseña para verificar si eres tu: ");
			scanf("%i",&x);
			
			if(cont==x){
				printf("\n\nQue contraseña quieres ahora?");
			
				int skate;
				
				printf("\n\nEscribe la contraseña que quieras: ");
				scanf("%i",&skate);
				
				printf("\n\nMuy bien tu nueva contraseña es: %i",skate);
			
				printf("\nSe reiniciara el sistema tendras que esperar.");
				
				printf("\n\n...");
								
			}
			else{
				printf("Vaya... al parecer no son iguales");
			}
			
			break;
		}
		case 2:{
			
			int o;
			printf("\n\nHola primero deberas ingresar tu contraseña para verificar si eres tu: ");
			scanf("%i",&o);
			
			
			if(cont==o){
				printf("\n\nQue nombre quieres ahora?");
			
				char longboard[90];
				
				printf("\n\nEscribe el nombre que quieras: ");
				scanf("%s",&longboard);
				
				printf("\n\nMuy bien tu nuevo nombre es: %s",longboard);
			
				printf("\nSe reiniciara el sistema tendras que esperar.");
				
				printf("\n\n...");
								
			}
			else{
				printf("Vaya... al parecer no son iguales");
			}
		
			}
}
}//void
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

//*************************************************************************************************************************//

void segundo(){
	
	system("cls");	
	printf("NOTIFICACIONES\n");
	
	printf("\n02/04/20: Te han consignado 400.000\n");
	printf("Yo: Gracias.\n");
	
	printf("\n18/04/20: Te han consignado 100.000");
	printf("Yo: Gracias.\n");
	
	printf("\n29/04/20: Te han consignado 1.400.000\n");
	printf("Yo: Muchas gracias. Me comprare una guitarra.\n");
	
	printf("\n15/05/20: Te han consignado 50.000\n");
	printf("Yo: Gracias.\n");
	
	printf("\n20/05/20: Te han consignado 2.000.000\n");
	printf("Yo: Gracias.\n");
	
	int antiguo;
	
	printf("\nSi quieres ver tus antiguas notificaciones escribe tu contraseña: ");
	scanf("%i",&antiguo);

	if(cont==antiguo){
		
		chat Notificaciones;
		
		strcpy(Notificaciones.a,"\n40.000\n");
		strcpy(Notificaciones.b,"\n100.000\n");
		strcpy(Notificaciones.c,"\n500.000\n");
		strcpy(Notificaciones.d,"\n5.000.000\n");
		strcpy(Notificaciones.e,"\n50.000\n");
		strcpy(Notificaciones.f,"\n10.000\n");
		strcpy(Notificaciones.g,"\n530.000\n");
		strcpy(Notificaciones.h,"\n504.000\n");
		strcpy(Notificaciones.i,"\n999.000\n");
		strcpy(Notificaciones.j,"\n87.000\n");
		strcpy(Notificaciones.k,"\n64.000\n");
		strcpy(Notificaciones.k,"\n54.000\n");
		strcpy(Notificaciones.l,"\n92.000\n");
		strcpy(Notificaciones.n,"\n10.000.000\n");
		strcpy(Notificaciones.o,"\n5.000\n");
		strcpy(Notificaciones.p,"\n200.000\n");
		
		
		printf("\n01/04/19: Te han consignado %s\n",Notificaciones.a);
		printf("\n15/07/19: Te han consignado %s\n",Notificaciones.b);
		printf("\n31/12/18: Te han consignado %s\n",Notificaciones.c);
		printf("\n23/07/17: Te han consignado %s\n",Notificaciones.d);
		printf("\n07/04/17: Te han consignado %s\n",Notificaciones.e);
		printf("\n15/08/17: Te han consignado %s\n",Notificaciones.f);
		printf("\n08/11/16: Te han consignado %s\n",Notificaciones.g);
		printf("\n19/09/16: Te han consignado %s\n",Notificaciones.h);
		printf("\n13/01/15: Te han consignado %s\n",Notificaciones.i);
		printf("\n26/08/15: Te han consignado %s\n",Notificaciones.j);
		printf("\n28/03/15: Te han consignado %s\n",Notificaciones.k);
		printf("\n30/12/14: Te han consignado %s\n",Notificaciones.l);
		printf("\n27/06/14: Te han consignado %s\n",Notificaciones.n);
		printf("\n16/08/14: Te han consignado %s\n",Notificaciones.o);
		printf("\n12/04/10: Te han consignado %s\n",Notificaciones.p);
		
				
		int si;
		
		printf("\n1.BORRAR");
		printf("\n2.DEJAR");
		printf("\nOpcion: ");
		scanf("%i",&si);
		
		switch(si){
			
			case 1:{
				
				int seg,x;
	
				x=1000;
			
				for(seg=0;seg<5;seg++){
				printf("\t\t\t\t\t\t\t\t%02i\r",seg);
				Sleep(x);
				}
				
				
				printf("\n***********\n");
				printf("\n***********\n");
				printf("\n***********\n");
				printf("\n***********\n");
				printf("\n***********\n");
				printf("\n***********\n");
				printf("\n***********\n");
				printf("\n***********\n");
				printf("\n***********\n");
				printf("\n***********\n");
				printf("\n***********\n");
				printf("\n***********\n");
				printf("\n***********\n");
				printf("\n***********\n");
				printf("\n***********\n");
				printf("\n***********\n");
				
				
				printf("\nTu historial de transferencias ha sido borrado con exito :D");
				
				break;
			}
			case 2:{
				printf("Muy bien :D");	
				break;
			}
			default:{
				printf("No escojiste la opcion correcta");
				break;
			}
		}
	}else{
		printf("\nEn este momento no podras");
	}
	
		

}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
	
//00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000//	
void tercero(){
	system("cls");
	printf("\nLastimosamente solo podras enviar dinero mas no recibir, cuando recibas te llegara a las notificaciones\n");
	
	system("\npause");
	system("cls");
	
	
	printf("\nTu saldo es de: 3.950.000\n");
	
	printf("\nLastimosamente tus ahorros has sido gastados\n");
	
	printf("\n3.950.000$");
	
	printf("\nA quien de tus amigos quieres enviar plata.\n");
	
	int name;
	
	printf("\n1. Sandra");
	printf("\n2. Dilia\n");
	
	printf("\nOpcion: ");
	scanf("%i",&name);
	
	switch(name){
		case 1:{
				
				int saldo_inicial=3950000;		
				int retiro, saldo=0;
				
				printf("\n\nTu saldo es de %i",saldo_inicial);
				
				printf("\n\nCuanto dinero quieres enviarle: ");
				scanf("%i",&retiro);
				
				if(saldo_inicial>=retiro){
				saldo=saldo_inicial-retiro;
				printf("\n\nAhora te quedan %i",saldo);	
				printf("\n\nNos veremos luego :D");	
				}//retiro
				else{
					printf("\n\nAl parecer tratas de sacar mas de lo que tienes :/");
				}
		
			break;
		}
		case 2:{
			
			int saldo_inicial=3950000;		
			int retiro, saldo=0;
			
			printf("\n\nTu saldo es de %i",saldo_inicial);
			
			printf("\n\nCuanto dinero quieres enviarle: ");
			scanf("%i",&retiro);
			
			if(saldo_inicial>=retiro){
			saldo=saldo_inicial-retiro;
			printf("\n\nAhora te quedan %i",saldo);	
			printf("\n\nNos veremos luego :D");	
			}//retiro
			else{
				printf("\n\nAl parecer tratas de sacar mas de lo que tienes :/");
			}
		
			break;
		}
		
		default:{
			printf("\n");
			break;
		}
	}
	
	
}
//000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000//


//<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>//

void cuatro(){
			
			int array[16]={3000,5000,7000,10000,15000,25000,50000,75000,100000,250000,500000,750000,1000000,5000000,9000000};
			long iw=10000000;
			int x;
			x=3950000;
	
			system("cls");
			printf("INGRESO DE DINERO");
			printf("\nEsta accion solo la podras hacer mediante tu banco\n");
	
			printf("\n\n\t\t\t\t\t\t\tTRANSFIRIENO A TU BANCO\n\n\n");
	
			int seg,xq;
		
			xq=1000;
		
			for(seg=0;seg<31;seg++){
			printf("\t\t\t\t\t\t\t\t%02i\r",seg);
			Sleep(xq);
			}
			
			system("cls");
			
				printf("\n\nBienvenido/a a tu banco Carlos\n");
		
				int halo_reach;
				
				printf("\nPor seguridad necesitamos tu clave: ");
				scanf("%i",&halo_reach);
				
				if(cont==halo_reach){//reach
					system("cls");
				int doo;
				printf("\nQue quieres hacer\n");	
				printf("\n1. Sacar dinero");
				printf("\n2. Ingresar dinero\n");
				printf("\nOpcion: ");
				scanf("%i",&doo);
				
				switch(doo){//rwrgerefdsg
				
				case 1:{//1 de doo
					
					printf("Nustro bancco solo permite sacar ciertas sumas de dinero: ");
					printf("\nTu dunero es de: %i",x);
					
					printf("\n\n1. %i",array[0]);
					printf("\n2. %i",array[1]);
					printf("\n3. %i",array[2]);
					printf("\n4. %i",array[3]);
					printf("\n5. %i",array[4]);
					printf("\n6. %i",array[5]);
					printf("\n7. %i",array[6]);
					printf("\n8. %i",array[7]);
					printf("\n9. %i",array[8]);
					printf("\n10. %i",array[9]);
					printf("\n11. %i",array[10]);
					printf("\n12. %i",array[11]);
					printf("\n13. %i",array[12]);
					printf("\n14. %i",array[13]);
					printf("\n15. %i",array[14]);
//					printf("\n16. %i",array[16]);
//					printf("\n%16. li",iw);
					
					int sacar;
					printf("\nQue opcion deseas: ");
					scanf("%i",&sacar);
					
					switch(sacar){//scar
						
					case 1:{//1
						system("cls");
						x-=array[0];
						printf("Tu saldo es %i",x);
						break;
					}//1
					
					case 2:{//2
						system("cls");
						x-=array[1];
						printf("Tu saldo es %i",x);
						break;
					}//2
					
					case 3:{//3
						system("cls");
						x-=array[2];
						printf("Tu saldo es %i",x);
						break;
					}//3
					
					case 4:{//4
						system("cls");
						x-=array[3];
						printf("Tu saldo es %i",x);
						break;
					}//4
					
					case 5:{//5
						system("cls");
						x-=array[4];
						printf("Tu saldo es %i",x);
						break;
					}//5
					
					case 6:{//6
						system("cls");
						x-=array[5];
						printf("Tu saldo es %i",x);
						break;
					}//6
					
					case 7:{//7
						system("cls");
						x-=array[6];
						printf("Tu saldo es %i",x);
						break;
					}//7
					
					case 8:{//8
						system("cls");
						x-=array[7];
						printf("Tu saldo es %i",x);
						break;
					}//8
					
					case 9:{//9
						system("cls");
						x-=array[8];
						printf("Tu saldo es %i",x);
						break;
					}//9
					
					case 10:{
						system("cls");
						x-=array[9];
						printf("Tu saldo es %i",x);
						break;
					}
					 case 11:{
					 	system("cls");
						x-=array[10];
						printf("Tu saldo es %i",x);
						break;
					 }
					
					case 12:{
						system("cls");
						x-=array[11];
						printf("Tu saldo es %i",x);
						break;
					}
						
					case 13:{
						system("cls");
						x-=array[12];
						printf("Tu saldo es %i",x);
						break;
					}	
						
					case 14:{
						system("cls");
						if(x<array[13]){
							printf("Lo lamentamos no puedes sacar esta suma");
						}
						else{
							x-=array[13];
						printf("Tu saldo es %i",x);
						}
//						x-=array[13];
//						printf("Tu saldo es %i",x);
						break;
					}	
						
					case 15:{
						system("cls");
							if(x<array[14]){
							printf("Lo lamentamos no puedes sacar esta suma");
						}
						else{
							x-=array[15];
						printf("Tu saldo es %i",x);
						}
//						x-=array[15];
//						printf("Tu saldo es %i",x);
						break;
					}							
					default:{//def
					printf("??");
					break;
				}//def			
				}//scar
					break;
				}//1 de doo
				
				
				case 2:{//INGRESAR
				system("cls");
					
					int arrayy[16]={3000,5000,7000,10000,15000,25000,50000,75000,100000,250000,500000,750000,1000000,5000000,9000000};
					
					int xx;
					xx=3950000;	
					
					printf("Nustro banco solo permite ingresar ciertas sumas de dinero: ");
					printf("\nTu dunero es de: %i",x);
					
					printf("\n\n1. %i",array[0]);
					printf("\n2. %i",array[1]);
					printf("\n3. %i",array[2]);
					printf("\n4. %i",array[3]);
					printf("\n5. %i",array[4]);
					printf("\n6. %i",array[5]);
					printf("\n7. %i",array[6]);
					printf("\n8. %i",array[7]);
					printf("\n9. %i",array[8]);
					printf("\n10. %i",array[9]);
					printf("\n11. %i",array[10]);
					printf("\n12. %i",array[11]);
					printf("\n13. %i",array[12]);
					printf("\n14. %i",array[13]);
					printf("\n15. %i",array[14]);
					
					int ingresar;
					printf("\nQue opcion deseas: ");
					scanf("%i",&ingresar);
					
					switch(ingresar){//fffffffffffffffffffffffffffffffffffffff
						
						
						case 1:{//1
						system("cls");
						xx+=arrayy[0];
						printf("Tu saldo es %i",xx);
						break;
					}//1
					
					case 2:{//2
						system("cls");
						xx+=arrayy[1];
						printf("Tu saldo es %i",xx);
						break;
					}//2
					
					case 3:{//3
						system("cls");
						xx+=arrayy[2];
						printf("Tu saldo es %i",xx);
						break;
					}//3
					
					case 4:{//4
						system("cls");
						xx+=arrayy[3];
						printf("Tu saldo es %i",xx);
						break;
					}//4
					
					case 5:{//5
						system("cls");
						xx+=arrayy[4];
						printf("Tu saldo es %i",xx);
						break;
					}//5
					
					case 6:{//6
						system("cls");
						xx+=arrayy[5];
						printf("Tu saldo es %i",xx);
						break;
					}//6
					
					case 7:{//7
						system("cls");
						xx+=arrayy[6];
						printf("Tu saldo es %i",xx);
						break;
					}//7
					
					case 8:{//8
						system("cls");
						xx+=arrayy[7];
						printf("Tu saldo es %i",xx);
						break;
					}//8
					
					case 9:{//9
						system("cls");
						xx+=arrayy[8];
						printf("Tu saldo es %i",xx);
						break;
					}//9
					
					case 10:{
						system("cls");
						xx+=arrayy[9];
						printf("Tu saldo es %i",xx);
						break;
					}
					 case 11:{
					 	system("cls");
						xx+=arrayy[10];
						printf("Tu saldo es %i",xx);
						break;
					 }
					
					case 12:{
						system("cls");
						xx+=arrayy[11];
						printf("Tu saldo es %i",xx);
						break;
					}
						
					case 13:{
						system("cls");
						xx+=arrayy[12];
						printf("Tu saldo es %i",xx);
						break;
					}	
						
					case 14:{
						xx+=arrayy[13];
						printf("Tu saldo es %i",xx);
						break;
					}	
						
					case 15:{
						xx+=arrayy[15];
						printf("Tu saldo es %i",xx);
						break;
					}
						default:{
							printf("??");
							break;
						}
					}//ihfffffffffffffffffffffffffffffff
					
					break;
				}//SACAR
				
				default:{
					printf("??");
					break;
				}	
				}//swgigcweiffwrg
				}//reach/If
				
				else{
					printf("No coinciden");
				}
}//CUATRO


void atyuda(){//ayuda
	system("color f2");
	printf("Estas en la seccion de ayuda,\nAca habra preguntas frecuentes de nuestros usuarios de igual modo tu podras preguntar\n");
	
	int questions;	
	
	printf("\n1. Preguntas frecuentes");
	printf("\nOpcion: ");
	scanf("%i",&questions);
	
	switch(questions){
		
		case 1:{
		
		/*typedef struct{
			
			char ScarTissue[90];
			char RadioVideo[90];
			char Polly[90];
			char LoMaloDeSerBueno[90];
			char ElViejo[90];
			char TrenAlSur[90];
			char ElBaileDeLosQueSobran[90];
			char Sonne[90];
			char StirbNichVorMir[90];
			char LaBaladaDelDiabloYLaMuerte[90];
			char LabiosRotos[90];
			char DontCry[90];
			char Revenge[90];
			char Holiday[90];
			char Californication[90];
			
		}CancionesDeRock*/
		
		
		/*
		typedef struct{
	
			char re1[100];
			char re2[100];
			char re3[100];
			char re4[100];
			
			
		}respuestas;*/
				
		
		CancionesDeRock list;
	
				system("cls");
		
		
		strcpy(list.Californication,"Andres646: Cuando saldra la nueva version de este programa?");		
				strcpy(list.DontCry,"\tAdministracion de aplicacion: Estamos trabajando en ello, diria que para 15/06/20 version 1.2.1");
					printf("\n%s",list.Californication);
						printf("\n%s",list.DontCry);
							printf("\n\nNo puedes responder pues ya ha sido respondido");
		
		
		
		
		strcpy(list.ElBaileDeLosQueSobran,"\n\n\n\nSkate8: Una pregunta lo que pasa es que no tengo muchos amigos pero me gustaria saber cuantos amigos se puede tener en esta App");
				strcpy(list.ElViejo,"\tPiano90: Lo maximo son 20 amigos");
					printf("\n%s",list.ElBaileDeLosQueSobran);
						printf("\n%s",list.ElViejo);
								printf("\n\nNo puedes responder pues ya ha sido respondido");
							
		
		
		strcpy(list.Holiday,"\n\n\n\nUnRoBoT880: En alguna actualizacion puede que añadan algo paara pagaar por intenet???????");
				strcpy(list.LaBaladaDelDiabloYLaMuerte,"\tAdministracion de aplicacion: En algun futuro no muy lejado añadieremos esa opcion de momento toda investigar mas");
					printf("\n%s",list.Holiday);
						printf("\n%s",list.LaBaladaDelDiabloYLaMuerte);
							printf("\n\nNo puedes responder pues ya ha sido respondido");
		
		
		
		char answer[100];
		int ppl;
		strcpy(list.LabiosRotos,"\n\n\nCamila7009: Hay versiones antiguas de este programa? Soy nueva en esto");
	
				printf("\n%s",list.LabiosRotos);
					printf("\n\t...");
					printf("\n\t\t Quieres responder?");
					printf("\n1. Si");
					printf("\n2. No");
					printf("\nOpcion: ");
					scanf("%i",&ppl);
		
					switch(ppl){//a
						case 1:{
								printf("\nResponder(Tendras que escribir la respuesta todo pegado 'AlgoAsiCadaVez'): ");
								scanf("%s",answer);
								printf("\nCamila7009: Hay versiones antiguas de este programa? Soy nueva en esto");
								printf("\nYo: %s",answer);
								
								printf("\nAun no hay mas preguntas sobre la Aplicacion, esperemos te pueda ayudar\n");
								
							break;
						}
						case 2:{
							printf("\nAun no hay mas preguntas sobre la Aplicacion, esperemos te pueda ayudar\n");
							break;
						}
						default:{
							printf("??");
							break;
						}			
					}//a
		
		
		
		
		
		
		
			
			break;
		}
		
		
		case 2:{
			system("cls");
			printf("Si abandona tendra que reiniciar el sistema para volver a iniiarlo\n");
			printf("Esta seguro de hacerlo?\n");
			int si_no;
			
			printf("\nSi");
			printf("\nNo");
			printf("\n\nOpcion: ");
			scanf("%i",&si_no);
			
			switch(si_no){//sino
				
				case 1:{
					printf("\nNos veremos luego");
					break;
				}
					
				defaultf:{
					printf("??");
					break;
				}
	
			}//sino
					
			break;//case 2 del primero
		}
		default:{
			printf("??");
			break;
		}
		
	}
	
}//ayuda
