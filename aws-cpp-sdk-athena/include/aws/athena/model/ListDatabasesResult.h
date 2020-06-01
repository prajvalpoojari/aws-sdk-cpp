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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/Database.h>
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
namespace Athena
{
namespace Model
{
  class AWS_ATHENA_API ListDatabasesResult
  {
  public:
    ListDatabasesResult();
    ListDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of databases from a data catalog.</p>
     */
    inline const Aws::Vector<Database>& GetDatabaseList() const{ return m_databaseList; }

    /**
     * <p>A list of databases from a data catalog.</p>
     */
    inline void SetDatabaseList(const Aws::Vector<Database>& value) { m_databaseList = value; }

    /**
     * <p>A list of databases from a data catalog.</p>
     */
    inline void SetDatabaseList(Aws::Vector<Database>&& value) { m_databaseList = std::move(value); }

    /**
     * <p>A list of databases from a data catalog.</p>
     */
    inline ListDatabasesResult& WithDatabaseList(const Aws::Vector<Database>& value) { SetDatabaseList(value); return *this;}

    /**
     * <p>A list of databases from a data catalog.</p>
     */
    inline ListDatabasesResult& WithDatabaseList(Aws::Vector<Database>&& value) { SetDatabaseList(std::move(value)); return *this;}

    /**
     * <p>A list of databases from a data catalog.</p>
     */
    inline ListDatabasesResult& AddDatabaseList(const Database& value) { m_databaseList.push_back(value); return *this; }

    /**
     * <p>A list of databases from a data catalog.</p>
     */
    inline ListDatabasesResult& AddDatabaseList(Database&& value) { m_databaseList.push_back(std::move(value)); return *this; }


    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the NextToken from the response object of the previous page call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the NextToken from the response object of the previous page call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the NextToken from the response object of the previous page call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the NextToken from the response object of the previous page call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the NextToken from the response object of the previous page call.</p>
     */
    inline ListDatabasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the NextToken from the response object of the previous page call.</p>
     */
    inline ListDatabasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the NextToken from the response object of the previous page call.</p>
     */
    inline ListDatabasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Database> m_databaseList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
