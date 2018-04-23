/*
 * Stress Monitor Based on NB-IoT
 * 项目名称：基于NB-IoT的应力监测系统
 * 作者：宋超超
 *
 * 该代码版权归宋超超所有，请勿用于商业用途。
 * https://neyzoter.github.io/
 */

#ifndef __ALGORITHM_H
#define	__ALGORITHM_H

#include "sys.h"

/*******************************************************************************
* 函数名 : itoi
* 描述   : 数字转化为字符串
* 输入   :
* 输出   :
* 返回   :
* 注意   :
*******************************************************************************/
void Num2Str(char *str, unsigned long num);



/*******************************************************************************
* 函数名 : Hex2Str
* 描述   : 16进制数转化成字符串，用于AT+NSOST命令
* 输入   : 输入: pSrc - 源数据指针
* 输出   : 输出: pDst - 目标字符串指针
* 返回   :
* 注意   : 如：{0xC8, 0x32, 0x9B, 0xFD, 0x0E, 0x01} --> "C8329BFD0E01"
*******************************************************************************/
void Hex2Str(char* pSrc, char* pDst, unsigned int nSrcLength);

/*******************************************************************************
* 函数名 : AsciiToHex
* 描述   : ASCALL码转换成字符
* 输入   : unsigned char cNum  ASC-II字符码
* 输出   : unsigned char HEX码
* 返回   :
* 注意   : 如：{'A'} --> 0xA
*******************************************************************************/
unsigned char AsciiToHex(unsigned char cNum);

/*******************************************************************************
* 函数名 : StrToHex
* 描述   : 字符串转换hex
* 输入   : char *ptr字符存储区，unsigned short len数据长度
* 输出   :
* 返回   :
* 注意   : 如："C8329BFD0E01" -->  {0xC8, 0x32, 0x9B, 0xFD, 0x0E, 0x01}
*******************************************************************************/
void StrToHex(char *ptr, unsigned short len);

/*******************************************************************************
* 函数名 : Str2Hex
* 描述   : 字符串转换hex
* 输入   : char *ptr字符存储区，unsigned short len数据长度
* 输出   :
* 返回   :
* 注意   : 如："A" -->  {43}
str = +002321N

hex = 2b3030323332314e
*******************************************************************************/
void Str2HexStr(char * Str,char * HexStr);

u32 mypow(u8 m,u8 n);
u8 StrCmp(u8 *buff,u8 *ch);
u8 CMD_Anls(u8 cmd[]);
u16 Lenstr2Lennum(u8 lenstr[]);
u16 HexStr2Str(char * HexStr,char * Str);
#endif

