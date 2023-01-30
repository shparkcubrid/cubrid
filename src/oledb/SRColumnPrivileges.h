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
  
#pragma once
  
{

  
  
  
  
  
  
  
  
  
  
  {
    
    
    
    
    
    
    
    
  

										   m_szGrantor) 
    PROVIDER_COLUMN_ENTRY_WSTR ("GRANTEE", 2, m_szGrantee) 
											   m_szTableCatalog) 
    PROVIDER_COLUMN_ENTRY_WSTR ("TABLE_SCHEMA", 4, m_szTableSchema) 
												    m_szTableName) 
    PROVIDER_COLUMN_ENTRY_WSTR ("COLUMN_NAME", 6, m_szColumnName) 
												     DBTYPE_GUID, 255,
												     255,
												     m_szColumnGUID) 
    PROVIDER_COLUMN_ENTRY_TYPE_PS ("COLUMN_PROPID", 8, DBTYPE_UI4, 10, ~0,
				     m_ColumnPropID) 
										     m_szPrivilegeType) 
    PROVIDER_COLUMN_ENTRY_TYPE_PS ("IS_GRANTABLE", 10, DBTYPE_BOOL, 0xFF, 0xFF,
				     m_bIsGrantable) 


{

  
							    const VARIANT * rgRestrictions);
  
  
			const char *column_name);


