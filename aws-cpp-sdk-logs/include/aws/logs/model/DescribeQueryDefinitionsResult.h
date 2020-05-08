﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/QueryDefinition.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{
  class AWS_CLOUDWATCHLOGS_API DescribeQueryDefinitionsResult
  {
  public:
    DescribeQueryDefinitionsResult();
    DescribeQueryDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeQueryDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<QueryDefinition>& GetQueryDefinitions() const{ return m_queryDefinitions; }

    
    inline void SetQueryDefinitions(const Aws::Vector<QueryDefinition>& value) { m_queryDefinitions = value; }

    
    inline void SetQueryDefinitions(Aws::Vector<QueryDefinition>&& value) { m_queryDefinitions = std::move(value); }

    
    inline DescribeQueryDefinitionsResult& WithQueryDefinitions(const Aws::Vector<QueryDefinition>& value) { SetQueryDefinitions(value); return *this;}

    
    inline DescribeQueryDefinitionsResult& WithQueryDefinitions(Aws::Vector<QueryDefinition>&& value) { SetQueryDefinitions(std::move(value)); return *this;}

    
    inline DescribeQueryDefinitionsResult& AddQueryDefinitions(const QueryDefinition& value) { m_queryDefinitions.push_back(value); return *this; }

    
    inline DescribeQueryDefinitionsResult& AddQueryDefinitions(QueryDefinition&& value) { m_queryDefinitions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeQueryDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeQueryDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeQueryDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<QueryDefinition> m_queryDefinitions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
