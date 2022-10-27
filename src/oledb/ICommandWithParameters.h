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
    
    
    
    
    DBPARAMINFO *pParamInfo = pT->m_pParamInfo;	// �Ķ���� ���� ����ü �迭
    
      // �Ķ���� ���� �ʱ⿡ 0���� ����
      *pcParams = 0;
    
      // argument üũ
      if (pcParams == NULL || prgParamInfo == NULL)
      
    
      // �ʱ�ȭ
      *prgParamInfo = NULL;
    
      // �Ķ���� �̸� �迭 NULL�� �ʱ�ȭ
      if (ppNamesBuffer != NULL)
      
    
      // ���õ� �Ķ���Ͱ� ���� ���
      if (cParams == 0)
      
    
      // �Ķ���� ���� ī��
      *pcParams = cParams;
    
      // �Ķ���� ���� ����ü �迭 ī��
      *prgParamInfo = (DBPARAMINFO *) CoTaskMemAlloc (cParams * sizeof (DBPARAMINFO));
    
    
      // �Ķ���� �̸��� ���õǾ� �ִ��� üũ
      if (pParamInfo[0].pwszName != NULL)
      
      {
	
	  // �Ķ���� �̸� �迭�� ���� �� Byte ���̸� ���
	  ULONG i;
	
	
	
	  
	  {
	    
	      // �迭���� ������ �̸� �ڿ��� null character�� �´�
	      cChars = wcslen (pParamInfo[i].pwszName) + 1;
	    
	      // �Ķ���� �̸��� ���̸� �ӽ� ����
	      (*prgParamInfo)[i].pwszName = (WCHAR *) cChars;
	    
	  
	
	  // ��� �� ����Ʈ ��ŭ �޸� �Ҵ�
	  *ppNamesBuffer = (WCHAR *) CoTaskMemAlloc (cBytes);
	
	  // Fill out the string buffer
	  WCHAR * pstrTemp = *ppNamesBuffer;
	
	  
	  {
	    
	      // �ӽ� ����� �Ķ���� �̸��� ����
	      cChars = (size_t) (*prgParamInfo)[i].pwszName;
	    
	      // �Ķ���� �̸� ī��
	      wcscpy (pstrTemp, pParamInfo[i].pwszName);
	    
	    
	      // �Ķ���� �̸� �迭���� �ε��� �̵�
	      pstrTemp += cChars;
	  
      
    
  
  
						 
  {
    
    
    
    
    
    
      // cParamNames�� 0�̸� �׳� S_OK�� ����
      if (cParamNames == 0)
      
    
      // cParamNames�� 0�� �ƴϰ� rgParamNames Ȥ�� rgParamOrdinals�� NULL�̸�
      // E_INVALIDARG�� ����
      if (rgParamNames == NULL || rgParamOrdinals == NULL)
      
    
      
      {
	
	
	  
	  {
	    
	      // _wcsicmp -> lower case comparison
	      if (_wcsicmp (rgParamNames[i], pT->m_pParamInfo[j].pwszName) == 0)
	      
	      {
		
		
	      
	  
	
	  // �Ķ���� �̸��� ���� ���� �߰ߵǸ� bParamFound�� true�� �����ϰ�
	  // �ϳ��� �߰ߵ��� ���ϸ� bParamNotFound�� true�� ����
	  if (bFound)
	  
	  {
	    
	    
	  
	
	else
	  
	  {
	    
	    
	  
      
    
      // �Ķ���� �̸��� ������ �Ķ���� �̸��� ��ġ�� ��
      if (bParamFound && !bParamNotFound)
      
    
      // �ϳ��� ��ġ���� ������
      if (bParamFound && bParamNotFound)
      
    
  
  
						
  {
    
    
    
    
    
    
    
    
      // �Լ� argument üũ
      if (cParams != 0 && rgParamOrdinals == NULL)
      
    
      
    
      // ������ �Ķ���� ���� ������ �Ķ���ͼ��� ���Ѵ�
      if (pT->m_cParams != NULL)
      
    
      // ���� nCount��ŭ�� ���۸� �Ҵ��Ѵ�
      pParamInfo = (DBPARAMINFO *) CoTaskMemAlloc (nCount * sizeof (DBPARAMINFO));
    
      // ������ �Ķ���� ������ �־��� �� ���� pParamInfo�� ī���Ѵ�
      if (pT->m_pParamInfo != NULL)
      
      {
	
	
	  
      
    
    
    
      
      {
	
	  // �Ķ���� Ordinal�� 0�̸� E_INVALIDARD ����
	  if (rgParamOrdinals[i] == 0)
	  
	  {
	    
	    
	  
	
	  // ���ο� �Ķ������ ordinal�� ���� ������ ordinal�� ��ġ������ ����
	  bool bFound = false;
	
	  
	  {
	    
	      
	      {
		
		
	      
	  
	
	  
	  {
	    
	      // �߰ߵ��� �ʾ����� ���ο� ordinal�� �ο�
	      j = nCount;
	    
	  
	
	else
	  
	  {
	    
	      // ������ �Ķ���� �̸� ����
	      if (pParamInfo[j].pwszName != NULL)
	      
	    
	      // �Ķ���� ������ override�Ǿ����� ����
	      hr = DB_S_TYPEINFOOVERRIDDEN;
	  
	
	  // ���ο� �Ķ���� information ����
	  if (rgParamBindInfo[i].pwszName == NULL || *rgParamBindInfo[i].pwszName == 0)
	  
	
	else
	  
	
	
	
	
	
	
	
      
    
      // DBPARAMINFO ����ü �迭���� ��� �׸� �Ķ���� �̸��� ���õǾ� �ִ��� üũ
      for (i = 1; i < nCount; i++)
      
      {
	
	     || 
	  
	  {
	    
	    
	  
      
  
      // ������ ���� ����
      if (pT->m_pParamInfo != NULL)
      
      {
	
	  
	
      
    
      // �� ������ ����
      // m_cParams : �Ķ���� ����
      // m_cParamInfo : �Ķ���� ���� ����ü �迭
      pT->m_cParams = nCount;
    
    
  
      // ���� �����Ϸ��� ���� ����
      for (i = 0; i < nCount; i++)
      
    
    
  


