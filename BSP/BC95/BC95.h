#ifndef __BC95_H
#define __BC95_H
#include "common.h"

#define AT_TICKLESS_ON 1	//是否开始在BC95联网等待usart信号时，进入tickless
#define  AT_CHECK_EVERYTIME		300 //用于在发送AT指令后，每次200ms进入一次来查看是否时间超过了设定的等待时间	


//总体步骤
u8 AttachNetwork(void);
//基本函数
u8 AT_NRB(void);
u8 AT_Test(void);
//发送AT指令，网络连接
u8 CDP_Get_Cfg(char * ip_port);
u8 CDP_Cfg(char * ip_port);
u8 CFUN_Get_Set(void);
u8 CFUN_Set(void);
u8 NBAND_Get_Set(char * nband);
u8 NBAND_Set(char * nband);
u8 CGATT_Get_Set(void);
u8 CGATT_Set(void);
//数据发送
u8 MSG_Send(char * msg,char * len);

//数据接收
u8 CMD_Get(void);
//简短的函数
void StartWaitMsg(void);
void StopWaitMsg(void);

#endif

