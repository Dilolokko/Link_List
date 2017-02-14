#include <iostream>
#define maxsize 10
struct liste
{
	char data;
	int next;
};
liste list[maxsize];
int head,bos;
int bosmu();
int dolumu();
void ekle(int eleman);
void bul(int,int*);
void sil(int);
void goster();
void baslat();
void elemanver(int*);
int main(int argc, char** argv) 
{
	return 0;
}
void baslat()
{
	int k;
	for(k =0;k<maxsize;k++)
	{
		list[k].next = k+1;
	}
	list[k].next = -1;
	head=-1;
	bos = 0;
}
int bosmu()
{
	if(head==-1)
	return 1;
	else
	return 0;
}
int dolumu()
{
	if(bosmu()==1)
	return 0;
	else
	return 1;
}
void elemanver(int *k)
{
	if(dolumu)
	{
		*(k) = -1;
	}
	else
	{
		*(k)= bos;
		bos = list[bos].next;
	}
}
void ekle(char eleman)
{
	if(dolumu)
	{
		printf("uzgunuz");
	}	
	else
	{
		int m;
		elemanver(&m);
		if(m==-1)
		{
			printf("dolu");
		}
		else if(head==-1)
		{	
		head = m;
		liste[m].next = -1;
		liste[m].data = eleman;			
		}else
		{
		liste[m].data = eleman;
		liste[m].next = head;
		head = m;
		}
	}
}
