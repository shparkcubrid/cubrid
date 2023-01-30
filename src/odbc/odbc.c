/*
 * Copyright (C) 2008 Search Solution Corporation. All rights reserved by Search Solution. 
 *
 * Redistribution and use in source and binary forms, with or without modification, 
 * are permitted provided that the following conditions are met: 
 *
 * - Redistributions of source code must retain the above copyright notice, 
 *   this list of conditions and the following disclaimer. 
 *
 * - Redistributions in binary form must reproduce the above copyright notice, 
 *   this list of conditions and the following disclaimer in the documentation 
 *   and/or other materials provided with the distribution. 
 *
 * - Neither the name of the <ORGANIZATION> nor the names of its contributors 
 *   may be used to endorse or promote products derived from this software without 
 *   specific prior written permission. 
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
 * IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY 
 * OF SUCH DAMAGE. 
 *
 */  
  
#include	<windows.h>
#include	<stdio.h>
#include	"odbc_portable.h"
#include	"odbcinst.h"
#include	"odbc_resource.h"
#include	"odbc_connection.h"
#include	"odbc_util.h"
  


/************************************************************************
 * name:  ConfigDriver
 * arguments:
 * returns/side-effects:
 * description:
 *		SQLConfigDriver�� ���� driver-specific routine�̴�.
 *		���� ODBC Driver 3.51 for CUBRID���� ���������� 
 *		�����ϴ� routine�� �������� �ʴ´�.
 * NOTE:
 *		INTERFACE�� ODBCINST.h�� ���ǵǾ� �ִ�.
 ************************************************************************/ 
  ODBC_INTERFACE INSTAPI 
					 LPSTR lpszMsg, WORD cbMsgMax, WORD * pcbMsgOut) 
{
  
  



/************************************************************************
 * name:  ConfigDSN
 * arguments:
 * returns/side-effects:
 * description:
 * NOTE:
 *		INTERFACE�� ODBCINST.h�� ���ǵǾ� �ִ�.
 ************************************************************************/ 
  ODBC_INTERFACE INSTAPI 
{
  
  
  
  
  
  
    
    {
    
      
      
      
      
      
	
      
    
      
      
      
      
	
	{
	  
	  
	
      
      
				    
      
				   "ODBC.INI");
      
				   "ODBC.INI");
      
				   "ODBC.INI");
      
				   "ODBC.INI");
      
				   "ODBC.INI");
      
				   
      
      
	
      
    
      
      
	
	{
	  
	  
	
      
      
    
      
      
    
  
  



/************************************************************************
 * name:  ConfigDSNDlgProc
 * arguments:
 * returns/side-effects:						
 * description:
 *  SQLDriverConnect�� ���Ǵ� dialog box�� ����.
 * NOTE:
 ************************************************************************/ 
  PUBLIC INT_PTR CALLBACK 
{
  
  
  
  
  
    
    {
      
    
      
      
      
      
	
	{			// FILEDSN
	  SetDlgItemText (hwndParent, IDC_DSN, "");
	  
	  
	
      
      else
	
	{
	  
	  
	
      
      
      
      
      
      
      
      
      
      
      
	/* 
	SetCursor (hOldCursor);
      
    
      
	
	{
	
	  hOldCursor = SetCursor (LoadCursor ((HINSTANCE) NULL, IDC_WAIT));
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	
	  
	  
	
	  
	
      
    
      
    
  



/*	
 * AddDSNProc
 *		- FILEDSN�� SQLDriverConnect�� out connection string
 *		�� ���ؼ� ����, �����ȴ�.  �� ���� �߰������� �ʿ����.
 */ 
  PRIVATE BOOL FAR PASCAL 
{
  
  
  
  
  
    
    {
      
	// User DSN, or system DSN
	GetDlgItemText (hwndParent, IDC_DRIVER, dsn_item.driver, ITEMBUFLEN);
      
      
      
      
      
      
      
      
      
      
	
	{
	  
	
      
      
      
      
      
      
      
    
  


