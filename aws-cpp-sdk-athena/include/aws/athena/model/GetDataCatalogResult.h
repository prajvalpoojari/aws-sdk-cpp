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
#include <aws/athena/model/DataCatalog.h>
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
  class AWS_ATHENA_API GetDataCatalogResult
  {
  public:
    GetDataCatalogResult();
    GetDataCatalogResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDataCatalogResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The data catalog returned.</p>
     */
    inline const DataCatalog& GetDataCatalog() const{ return m_dataCatalog; }

    /**
     * <p>The data catalog returned.</p>
     */
    inline void SetDataCatalog(const DataCatalog& value) { m_dataCatalog = value; }

    /**
     * <p>The data catalog returned.</p>
     */
    inline void SetDataCatalog(DataCatalog&& value) { m_dataCatalog = std::move(value); }

    /**
     * <p>The data catalog returned.</p>
     */
    inline GetDataCatalogResult& WithDataCatalog(const DataCatalog& value) { SetDataCatalog(value); return *this;}

    /**
     * <p>The data catalog returned.</p>
     */
    inline GetDataCatalogResult& WithDataCatalog(DataCatalog&& value) { SetDataCatalog(std::move(value)); return *this;}

  private:

    DataCatalog m_dataCatalog;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
