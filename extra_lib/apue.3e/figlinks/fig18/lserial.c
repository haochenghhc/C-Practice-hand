#include     <stdio.h>      /*��׼�����������*/
#include     <stdlib.h>     /*��׼�����ⶨ��*/
#include     <unistd.h>     /*Unix��׼��������*/
#include     <sys/types.h>  /**/
#include     <sys/stat.h>   /**/
#include     <fcntl.h>      /*�ļ����ƶ���*/
#include     <termios.h>    /*PPSIX�ն˿��ƶ���*/
#include     <errno.h>      /*����Ŷ���*/


/***@brief  ���ô���ͨ������
*@param  fd     ���� int  �򿪴��ڵ��ļ����
*@param  speed  ���� int  �����ٶ�
*@return  void*/ 
    
#define FALSE 1
#define TRUE 0

    { B38400, B19200, B9600, B4800, B2400, B1200, B300, 
B4800, B2400, B1200, B300,
};


    { 38400, 19200, 9600, 4800, 2400, 1200, 300, 
2400, 1200, 300,
};


set_speed(int fd, int speed) 
{
    
    
    
    
    
	
    {
	
	    
	{
	    
	    
	    
	    
	    
		
	    
	
	
    




/**
*@brief   ���ô�������λ��ֹͣλ��Ч��λ
*@param  fd     ����  int  �򿪵Ĵ����ļ����*
*@param  databits ����  int ����λ   ȡֵ Ϊ 7 ����8*
*@param  stopbits ����  int ֹͣλ   ȡֵΪ 1 ����2*
*@param  parity  ����  int  Ч������ ȡֵΪN,E,O,,S
*/ 
    int
set_Parity(int fd, int databits, int stopbits, int parity) 
{
    
    
	
    {
	
	
    
    
    
	
    {
    
	
	
    
	
	
    
	
	
    
    
	
    {
    
    
	
	
	
    
    
	
	
	
    
    
	
	
	
	
    
    
	
	
	
    
	
	
    
    
	/* ����ֹͣλ */ 
	switch (stopbits)
	
    {
    
	
	
    
	
	
    
	
	
    
    
	/* Set input parity option */ 
	if (parity != 'n')
	
    
    options.c_cc[VMIN] = 0;
    
    
	
    {
	
	
    
    




/**
*@breif �򿪴���
*/ 
    int
OpenDev(char *Dev) 
{
    
    if (-1 == fd)
	
    {				/*��������λ�� */
	
	
    
    
    else
	




/**
*@breif 	main()
*/ 
    int
main(int argc, char **argv) 
{
    
    
    
    
    
    
	
    
    else
	
    {
	
	
    
    
	
    {
	
	
    
    
	
    {
	
	    
	{
	    
	    
	    
	
    
    
	//close(fd);
	//exit(0);
}

